#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class String; }

#define CLASS_1_230D8C57C4E2F415_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12C95A00)
#define CLASS_1_230D8C57C4E2F415_METHOD_1_242CC295A80E5CB5_OFFSET UNITYSDK_OFFSET(0x12C95850)
#define CLASS_1_230D8C57C4E2F415_METHOD_1_6578941E6D6D3764_OFFSET UNITYSDK_OFFSET(0x12C95730)
#define CLASS_1_230D8C57C4E2F415_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C958D0)
#define CLASS_1_230D8C57C4E2F415_METHOD_1_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0x12C956A0)
#define CLASS_1_230D8C57C4E2F415_METHOD_1_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x12C95920)
#define CLASS_1_230D8C57C4E2F415_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C955B0)
#define CLASS_1_230D8C57C4E2F415__CTOR_OFFSET UNITYSDK_OFFSET(0x12C95690)

inline static constexpr unsigned int Class_1_230D8C57C4E2F415_TypeDefinitionIndex = 71254;

class Class_1_230D8C57C4E2F415 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigTriggerCache* Field_1_1; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Boolean Field_1_0; // 0x1C
	::System::Single Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_1_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_D0B3EB3192C70900_OFFSET))(this);
	}

	static ::Class_1_230D8C57C4E2F415* Method_1_6578941E6D6D3764(::MoleMole::Config::ConfigTriggerCache* a1)
	{
		return ((::Class_1_230D8C57C4E2F415*(*)(::MoleMole::Config::ConfigTriggerCache*))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_6578941E6D6D3764_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_242CC295A80E5CB5(::MoleMole::Config::ConfigTriggerCache* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCache*))((::PBYTE)hIl2Cpp + CLASS_1_230D8C57C4E2F415_METHOD_1_242CC295A80E5CB5_OFFSET))(this, a1);
	}
};
