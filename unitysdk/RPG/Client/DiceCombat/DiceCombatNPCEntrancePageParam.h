#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA1292E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_GET_NPCNAME_OFFSET UNITYSDK_OFFSET(0xA1292C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xA1292A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_SET_NPCNAME_OFFSET UNITYSDK_OFFSET(0xA1292D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xA1292B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA129290)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatNPCEntrancePageParam_TypeDefinitionIndex = 69886;

	class DiceCombatNPCEntrancePageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatStageInfo* _StageInfo_k__BackingField; // 0x10
		::RPG::Client::TextID _NpcName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::DiceCombat::DiceCombatStageInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_SET_STAGEINFO_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_NpcName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_GET_NPCNAME_OFFSET))(this);
		}

		::System::Void set_NpcName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_SET_NPCNAME_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam* Create(::System::UInt32 stageID, ::System::Nullable_1<::RPG::Client::TextID> npcName)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatNPCEntrancePageParam*(*)(::System::UInt32, ::System::Nullable_1<::RPG::Client::TextID>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATNPCENTRANCEPAGEPARAM_CREATE_OFFSET))(stageID, npcName);
		}
	};
}
