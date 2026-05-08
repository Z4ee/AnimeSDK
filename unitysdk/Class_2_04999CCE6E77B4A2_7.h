#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_04999CCE6E77B4A2_7_Class_2_D80873C5458F2BA9;
namespace MoleMole { class UIWindowController; }

#define CLASS_2_04999CCE6E77B4A2_7_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x111D6E00)
#define CLASS_2_04999CCE6E77B4A2_7_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x111D6E10)
#define CLASS_2_04999CCE6E77B4A2_7__CTOR_OFFSET UNITYSDK_OFFSET(0x111D6ED0)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_7_TypeDefinitionIndex = 44872;

class Class_2_04999CCE6E77B4A2_7 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_7_Class_2_D80873C5458F2BA9* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}
};
