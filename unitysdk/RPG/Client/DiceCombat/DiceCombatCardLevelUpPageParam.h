#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x180C1C20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_GET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x180C1CB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_SET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x180C1CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x180C1CA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCardLevelUpPageParam_TypeDefinitionIndex = 72205;

	class DiceCombatCardLevelUpPageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam* Create(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCardLevelUpPageParam*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_CREATE_OFFSET))(a1);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_AvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_GET_AVATARINFO_OFFSET))(this);
		}

		::System::Void set_AvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCARDLEVELUPPAGEPARAM_SET_AVATARINFO_OFFSET))(this, a1);
		}
	};
}
