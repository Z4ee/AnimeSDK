#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }

#define CLASS_1_8EC6DE90C67864D2_METHOD_1_021409EFDF2A7534_OFFSET UNITYSDK_OFFSET(0x97A43D0)
#define CLASS_1_8EC6DE90C67864D2_METHOD_1_32EED3E6FFA0E18C_OFFSET UNITYSDK_OFFSET(0x97A3E40)
#define CLASS_1_8EC6DE90C67864D2_METHOD_1_6BE93CCE00D3084D_OFFSET UNITYSDK_OFFSET(0x97A3F00)
#define CLASS_1_8EC6DE90C67864D2_METHOD_1_827CBA0F5CDCC7E9_OFFSET UNITYSDK_OFFSET(0x97A3E90)
#define CLASS_1_8EC6DE90C67864D2_METHOD_1_A44EC6A5157AD749_OFFSET UNITYSDK_OFFSET(0x97A4000)
#define CLASS_1_8EC6DE90C67864D2_METHOD_1_F5D5EE68C43F7BFF_OFFSET UNITYSDK_OFFSET(0x97A4610)
#define CLASS_1_8EC6DE90C67864D2__CTOR_OFFSET UNITYSDK_OFFSET(0x97A47F0)

inline static constexpr unsigned int Class_1_8EC6DE90C67864D2_TypeDefinitionIndex = 60392;

class Class_1_8EC6DE90C67864D2 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2; // 0x0
	::RPG::GameCore::AvatarSkillTreeRow* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32EED3E6FFA0E18C(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_32EED3E6FFA0E18C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_827CBA0F5CDCC7E9(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_827CBA0F5CDCC7E9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_A44EC6A5157AD749(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_A44EC6A5157AD749_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BE93CCE00D3084D(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_6BE93CCE00D3084D_OFFSET))(this, a1);
	}

	::System::String* Method_1_021409EFDF2A7534(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_021409EFDF2A7534_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_F5D5EE68C43F7BFF(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8EC6DE90C67864D2_METHOD_1_F5D5EE68C43F7BFF_OFFSET))(this, a1);
	}
};
