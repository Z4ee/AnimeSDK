#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_04999CCE6E77B4A2_Class_2_8504E12A716501A1_6;
namespace MoleMole { class UIWindowController; }

#define CLASS_2_04999CCE6E77B4A2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x122EB080)
#define CLASS_2_04999CCE6E77B4A2_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x122EB090)
#define CLASS_2_04999CCE6E77B4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x122EB150)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_TypeDefinitionIndex = 55521;

class Class_2_04999CCE6E77B4A2 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_Class_2_8504E12A716501A1_6* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}
};
