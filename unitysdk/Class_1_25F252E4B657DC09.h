#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_800;
class Class_0_16E4307DCC419505_801;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_25F252E4B657DC09_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0x1633BBC0)
#define CLASS_1_25F252E4B657DC09_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0x1633BD30)
#define CLASS_1_25F252E4B657DC09_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0x1633BB10)
#define CLASS_1_25F252E4B657DC09_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0x1633B9B0)
#define CLASS_1_25F252E4B657DC09__CTOR_OFFSET UNITYSDK_OFFSET(0x1633B920)

inline static constexpr unsigned int Class_1_25F252E4B657DC09_TypeDefinitionIndex = 62908;

class Class_1_25F252E4B657DC09 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_801* FOMAOEGECHC; // 0x10
	::Class_0_16E4307DCC419505_800* KLFKAABPBEJ; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_801* a1, ::Class_0_16E4307DCC419505_800* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_801*, ::Class_0_16E4307DCC419505_800*))((::PBYTE)hIl2Cpp + CLASS_1_25F252E4B657DC09__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* ConvertToUpgrade(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_25F252E4B657DC09_CONVERTTOUPGRADE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* ConvertToOrigin(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_25F252E4B657DC09_CONVERTTOORIGIN_OFFSET))(this, a1);
	}

	::System::Boolean CheckPartIsNeedUpgrade(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_25F252E4B657DC09_CHECKPARTISNEEDUPGRADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean CheckTraceNodeIsUpgraded(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25F252E4B657DC09_CHECKTRACENODEISUPGRADED_OFFSET))(this, a1, a2);
	}
};
