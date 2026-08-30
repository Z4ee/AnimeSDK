#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_801;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_6B16E77FB7E81476_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0x105E33F0)
#define CLASS_1_6B16E77FB7E81476_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0x105E3470)
#define CLASS_1_6B16E77FB7E81476_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0x105E3340)
#define CLASS_1_6B16E77FB7E81476_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0x105E32A0)
#define CLASS_1_6B16E77FB7E81476_GET_UPGRADEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x105E3280)
#define CLASS_1_6B16E77FB7E81476_SET_UPGRADEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x105E3290)
#define CLASS_1_6B16E77FB7E81476__CTOR_OFFSET UNITYSDK_OFFSET(0x105E35C0)

inline static constexpr unsigned int Class_1_6B16E77FB7E81476_TypeDefinitionIndex = 62936;

class Class_1_6B16E77FB7E81476 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_801* _UpgradeAvatarService_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_801* get_UpgradeAvatarService()
	{
		return ((::Class_0_16E4307DCC419505_801*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_GET_UPGRADEAVATARSERVICE_OFFSET))(this);
	}

	::System::Void set_UpgradeAvatarService(::Class_0_16E4307DCC419505_801* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_801*))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_SET_UPGRADEAVATARSERVICE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* ConvertToUpgrade(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_CONVERTTOUPGRADE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* ConvertToOrigin(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_CONVERTTOORIGIN_OFFSET))(this, a1);
	}

	::System::Boolean CheckPartIsNeedUpgrade(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_CHECKPARTISNEEDUPGRADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean CheckTraceNodeIsUpgraded(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B16E77FB7E81476_CHECKTRACENODEISUPGRADED_OFFSET))(this, a1, a2);
	}
};
