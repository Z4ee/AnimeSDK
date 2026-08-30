#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x19313570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_GET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x19313600)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_SET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0x19313610)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x193135F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatChangeDicePageParam_TypeDefinitionIndex = 75642;

	class DiceCombatChangeDicePageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam* Create(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatChangeDicePageParam*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_CREATE_OFFSET))(a1);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_AvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_GET_AVATARINFO_OFFSET))(this);
		}

		::System::Void set_AvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCHANGEDICEPAGEPARAM_SET_AVATARINFO_OFFSET))(this, a1);
		}
	};
}
