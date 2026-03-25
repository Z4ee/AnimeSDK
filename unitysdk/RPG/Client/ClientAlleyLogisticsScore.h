#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84;
namespace Proto { class ItemList; }

#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_CREATE_OFFSET UNITYSDK_OFFSET(0x93E0240)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x93E03F0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0x93E03D0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTMAXSCORE_OFFSET UNITYSDK_OFFSET(0x93E03B0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x93E0430)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x93E0410)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x93E0390)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_UNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0x93E0450)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x93E0400)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0x93E03E0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTMAXSCORE_OFFSET UNITYSDK_OFFSET(0x93E03C0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x93E0440)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x93E0420)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x93E03A0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_UNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0x93E0460)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x93E0380)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientAlleyLogisticsScore_TypeDefinitionIndex = 50587;

	class ClientAlleyLogisticsScore : public ::System::Object
	{
	public:
		::Proto::ItemList* _Reward_k__BackingField; // 0x10
		::System::UInt32 _LastLevel_k__BackingField; // 0x18
		::System::UInt32 _CurScore_k__BackingField; // 0x1C
		::System::UInt32 _LastMaxScore_k__BackingField; // 0x20
		::System::UInt32 _UnlockLevel_k__BackingField; // 0x24
		::System::UInt32 _MaxScore_k__BackingField; // 0x28
		::System::UInt32 _MapId_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClientAlleyLogisticsScore* Create(::Class_1_DCE302F7FD05DE84* protoLogisticsScore)
		{
			return ((::RPG::Client::ClientAlleyLogisticsScore*(*)(::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_CREATE_OFFSET))(protoLogisticsScore);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_REWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_LastMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTMAXSCORE_OFFSET))(this);
		}

		::System::Void set_LastMaxScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTMAXSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_LastLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTLEVEL_OFFSET))(this);
		}

		::System::Void set_LastLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_CURSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Void set_MaxScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAXSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_MapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_UNLOCKLEVEL_OFFSET))(this);
		}

		::System::Void set_UnlockLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_UNLOCKLEVEL_OFFSET))(this, value);
		}
	};
}
