#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_680;
class Class_1_35EF8ACF9B94E295_1;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_CD62F3FA33B0D191_GET_UPGRADEAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9E56A80)
#define CLASS_1_CD62F3FA33B0D191_GET_UPGRADER_OFFSET UNITYSDK_OFFSET(0x9E56A60)
#define CLASS_1_CD62F3FA33B0D191_METHOD_1_39ACF78FCAAF11A6_OFFSET UNITYSDK_OFFSET(0x9E56B90)
#define CLASS_1_CD62F3FA33B0D191_METHOD_1_544B12A5C10413F4_OFFSET UNITYSDK_OFFSET(0x9E56AA0)
#define CLASS_1_CD62F3FA33B0D191_METHOD_1_9B73A6616A276412_OFFSET UNITYSDK_OFFSET(0x9E56C30)
#define CLASS_1_CD62F3FA33B0D191_METHOD_1_DEB6FE86ADD2489D_OFFSET UNITYSDK_OFFSET(0x9E56CB0)
#define CLASS_1_CD62F3FA33B0D191_SET_UPGRADEAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9E56A90)
#define CLASS_1_CD62F3FA33B0D191_SET_UPGRADER_OFFSET UNITYSDK_OFFSET(0x9E56A70)
#define CLASS_1_CD62F3FA33B0D191__CTOR_OFFSET UNITYSDK_OFFSET(0x9E56DF0)

inline static constexpr unsigned int Class_1_CD62F3FA33B0D191_TypeDefinitionIndex = 57882;

class Class_1_CD62F3FA33B0D191 : public ::System::Object
{
public:
	::Class_1_35EF8ACF9B94E295_1* _UpgradeAvatarRepository_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_680* _Upgrader_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_680* get_Upgrader()
	{
		return ((::Class_0_16E4307DCC419505_680*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_GET_UPGRADER_OFFSET))(this);
	}

	::System::Void set_Upgrader(::Class_0_16E4307DCC419505_680* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_680*))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_SET_UPGRADER_OFFSET))(this, value);
	}

	::Class_1_35EF8ACF9B94E295_1* get_UpgradeAvatarRepository()
	{
		return ((::Class_1_35EF8ACF9B94E295_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_GET_UPGRADEAVATARREPOSITORY_OFFSET))(this);
	}

	::System::Void set_UpgradeAvatarRepository(::Class_1_35EF8ACF9B94E295_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35EF8ACF9B94E295_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_SET_UPGRADEAVATARREPOSITORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_544B12A5C10413F4(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_METHOD_1_544B12A5C10413F4_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_39ACF78FCAAF11A6(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_METHOD_1_39ACF78FCAAF11A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9B73A6616A276412(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_METHOD_1_9B73A6616A276412_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DEB6FE86ADD2489D(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD62F3FA33B0D191_METHOD_1_DEB6FE86ADD2489D_OFFSET))(this, a1, a2);
	}
};
