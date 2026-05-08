#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }

#define CLASS_2_87859572F003DB9F_3_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x16DC1FC0)
#define CLASS_2_87859572F003DB9F_3_METHOD_2_4FE3E8F15749E370_OFFSET UNITYSDK_OFFSET(0x16DC1B20)
#define CLASS_2_87859572F003DB9F_3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16DC1A00)
#define CLASS_2_87859572F003DB9F_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16DC1A90)
#define CLASS_2_87859572F003DB9F_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DC1980)
#define CLASS_2_87859572F003DB9F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC19F0)

inline static constexpr unsigned int Class_2_87859572F003DB9F_3_TypeDefinitionIndex = 65759;

class Class_2_87859572F003DB9F_3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xD9; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntitySkill* Method_2_4FE3E8F15749E370()
	{
		return ((::MoleMole::Config::ConfigEntitySkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3_METHOD_2_4FE3E8F15749E370_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_87859572F003DB9F_3_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}
};
