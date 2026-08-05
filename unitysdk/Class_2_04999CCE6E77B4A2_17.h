#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_04999CCE6E77B4A2_17_Class_2_44201780A2E51AE8;
namespace MoleMole { class UIMusicBattleInLevelFeverTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_34B301FFD3BC3F82_OFFSET UNITYSDK_OFFSET(0x1820C1C0)
#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1820C0E0)
#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x1820C0F0)
#define CLASS_2_04999CCE6E77B4A2_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1820C1B0)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_17_TypeDefinitionIndex = 75364;

class Class_2_04999CCE6E77B4A2_17 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_17_Class_2_44201780A2E51AE8* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::Class_3_826A30478DA34A69<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>* Method_2_34B301FFD3BC3F82()
	{
		return ((::Class_3_826A30478DA34A69<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_34B301FFD3BC3F82_OFFSET))(this);
	}
};
