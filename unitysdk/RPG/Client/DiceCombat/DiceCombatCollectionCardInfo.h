#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xA124730)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_AVATARINFO_OFFSET UNITYSDK_OFFSET(0xA124740)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xA124720)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA124670)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionCardInfo_TypeDefinitionIndex = 69829;

	class DiceCombatCollectionCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _PlayerAvatarInfo; // 0x10
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _ConfigAvatarInfo; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Boolean _Available_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO__CTOR_OFFSET))(this, avatarID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_AVAILABLE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_AvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONCARDINFO_GET_AVATARINFO_OFFSET))(this);
		}
	};
}
