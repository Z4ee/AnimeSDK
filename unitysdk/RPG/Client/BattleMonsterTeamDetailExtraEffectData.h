#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExtraEffectRow; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91C1070)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x91C1320)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x91C1250)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x91C1100)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_EXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0x91C1120)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91C1180)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x91C1110)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91C10F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailExtraEffectData_TypeDefinitionIndex = 58996;

	class BattleMonsterTeamDetailExtraEffectData : public ::System::Object
	{
	public:
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterTeamDetailExtraEffectData* Create(::System::UInt32 extraEffectID)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailExtraEffectData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_CREATE_OFFSET))(extraEffectID);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_SET_EXTRAEFFECTID_OFFSET))(this, value);
		}

		::RPG::GameCore::ExtraEffectRow* get_ExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_EXTRAEFFECTROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParam()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILEXTRAEFFECTDATA_GET_DESCPARAM_OFFSET))(this);
		}
	};
}
