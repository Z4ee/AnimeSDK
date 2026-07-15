#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class String; }

#define CLASS_1_A2B569C8E16CE41A_METHOD_1_32EED3E6FFA0E18C_OFFSET UNITYSDK_OFFSET(0x15DDE0D0)
#define CLASS_1_A2B569C8E16CE41A_METHOD_1_48243A04E97CE3FA_OFFSET UNITYSDK_OFFSET(0x15DDE6E0)
#define CLASS_1_A2B569C8E16CE41A_METHOD_1_6BE93CCE00D3084D_OFFSET UNITYSDK_OFFSET(0x15DDE190)
#define CLASS_1_A2B569C8E16CE41A_METHOD_1_9886B89C69ADDD2C_OFFSET UNITYSDK_OFFSET(0x15DDE2A0)
#define CLASS_1_A2B569C8E16CE41A_METHOD_1_D3477B9BE6D5D7C7_OFFSET UNITYSDK_OFFSET(0x15DDE120)
#define CLASS_1_A2B569C8E16CE41A_METHOD_1_F5D5EE68C43F7BFF_OFFSET UNITYSDK_OFFSET(0x15DDE8E0)
#define CLASS_1_A2B569C8E16CE41A__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDEAC0)

inline static constexpr unsigned int Class_1_A2B569C8E16CE41A_TypeDefinitionIndex = 62669;

class Class_1_A2B569C8E16CE41A : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2; // 0x0
	::RPG::GameCore::AvatarSkillTreeRow* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32EED3E6FFA0E18C(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_32EED3E6FFA0E18C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D3477B9BE6D5D7C7(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_D3477B9BE6D5D7C7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_9886B89C69ADDD2C(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_9886B89C69ADDD2C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BE93CCE00D3084D(::RPG::GameCore::AvatarSkillTreeRow* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_6BE93CCE00D3084D_OFFSET))(this, a1);
	}

	::System::String* Method_1_48243A04E97CE3FA(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_48243A04E97CE3FA_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_F5D5EE68C43F7BFF(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2B569C8E16CE41A_METHOD_1_F5D5EE68C43F7BFF_OFFSET))(this, a1);
	}
};
