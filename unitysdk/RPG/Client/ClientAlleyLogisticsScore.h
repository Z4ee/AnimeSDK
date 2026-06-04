#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84;
namespace Proto { class ItemList; }

#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_CREATE_OFFSET UNITYSDK_OFFSET(0xB6CC450)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC600)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xB6CC5E0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTMAXSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC5C0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xB6CC640)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC620)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_REWARD_OFFSET UNITYSDK_OFFSET(0xB6CC5A0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_UNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0xB6CC660)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC610)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xB6CC5F0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTMAXSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC5D0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xB6CC650)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xB6CC630)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_REWARD_OFFSET UNITYSDK_OFFSET(0xB6CC5B0)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_UNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0xB6CC670)
#define RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CC590)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientAlleyLogisticsScore_TypeDefinitionIndex = 58262;

	class ClientAlleyLogisticsScore : public ::System::Object
	{
	public:
		::Proto::ItemList* _Reward_k__BackingField; // 0x10
		::System::UInt32 _CurScore_k__BackingField; // 0x18
		::System::UInt32 _UnlockLevel_k__BackingField; // 0x1C
		::System::UInt32 _MaxScore_k__BackingField; // 0x20
		::System::UInt32 _MapId_k__BackingField; // 0x24
		::System::UInt32 _LastMaxScore_k__BackingField; // 0x28
		::System::UInt32 _LastLevel_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClientAlleyLogisticsScore* Create(::Class_1_DCE302F7FD05DE84* a1)
		{
			return ((::RPG::Client::ClientAlleyLogisticsScore*(*)(::Class_1_DCE302F7FD05DE84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_CREATE_OFFSET))(a1);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_REWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTMAXSCORE_OFFSET))(this);
		}

		::System::Void set_LastMaxScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTMAXSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_LASTLEVEL_OFFSET))(this);
		}

		::System::Void set_LastLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_LASTLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_CURSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Void set_MaxScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAXSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_GET_UNLOCKLEVEL_OFFSET))(this);
		}

		::System::Void set_UnlockLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTALLEYLOGISTICSSCORE_SET_UNLOCKLEVEL_OFFSET))(this, a1);
		}
	};
}
