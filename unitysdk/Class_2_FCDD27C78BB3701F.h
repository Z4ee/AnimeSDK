#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_486190703084CEB1.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define CLASS_2_FCDD27C78BB3701F_METHOD_2_1369AE2827BC0DF2_OFFSET UNITYSDK_OFFSET(0x163E18D0)
#define CLASS_2_FCDD27C78BB3701F_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x163E17B0)
#define CLASS_2_FCDD27C78BB3701F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x163E1840)
#define CLASS_2_FCDD27C78BB3701F__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E1730)
#define CLASS_2_FCDD27C78BB3701F__CTOR_OFFSET UNITYSDK_OFFSET(0x163E17A0)

inline static constexpr unsigned int Class_2_FCDD27C78BB3701F_TypeDefinitionIndex = 53760;

class Class_2_FCDD27C78BB3701F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xDC; // 0x0
	::MoleMole::Config::ConfigEntitySkill* Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28
	::Enum_3_486190703084CEB1 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1369AE2827BC0DF2(::System::String* a1, ::MoleMole::Config::ConfigEntitySkill* a2, ::Enum_3_486190703084CEB1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySkill*, ::Enum_3_486190703084CEB1))((::PBYTE)hIl2Cpp + CLASS_2_FCDD27C78BB3701F_METHOD_2_1369AE2827BC0DF2_OFFSET))(this, a1, a2, a3);
	}
};
