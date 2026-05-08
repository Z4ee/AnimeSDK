#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_04999CCE6E77B4A2_2_Class_2_D3207C9B786FBEC5;
namespace MoleMole { class UIWindowController; }

#define CLASS_2_04999CCE6E77B4A2_2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xECA5BA0)
#define CLASS_2_04999CCE6E77B4A2_2_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xECA5BB0)
#define CLASS_2_04999CCE6E77B4A2_2__CTOR_OFFSET UNITYSDK_OFFSET(0xECA5C70)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_2_TypeDefinitionIndex = 39533;

class Class_2_04999CCE6E77B4A2_2 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_2_Class_2_D3207C9B786FBEC5* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_2__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_2_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}
};
