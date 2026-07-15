#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourRankType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_760;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURRANK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1A2F8490)
#define RPG_CLIENT_PARKOURRANK_CREATECHARACTERRANK_OFFSET UNITYSDK_OFFSET(0x1A2F81D0)
#define RPG_CLIENT_PARKOURRANK_CREATEPLAYERRANK_OFFSET UNITYSDK_OFFSET(0x1A2F8010)
#define RPG_CLIENT_PARKOURRANK_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A2F8310)
#define RPG_CLIENT_PARKOURRANK_CREATE_OFFSET UNITYSDK_OFFSET(0x1A2F7D10)
#define RPG_CLIENT_PARKOURRANK_GET_BALLID_OFFSET UNITYSDK_OFFSET(0x1A2F7C30)
#define RPG_CLIENT_PARKOURRANK_GET_BALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A2F7C50)
#define RPG_CLIENT_PARKOURRANK_GET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0x1A2F7BF0)
#define RPG_CLIENT_PARKOURRANK_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1A2F7CC0)
#define RPG_CLIENT_PARKOURRANK_GET_ISWITHDRAW_OFFSET UNITYSDK_OFFSET(0x1A2F7C70)
#define RPG_CLIENT_PARKOURRANK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A2F7BD0)
#define RPG_CLIENT_PARKOURRANK_GET_RECORD_OFFSET UNITYSDK_OFFSET(0x1A2F7C10)
#define RPG_CLIENT_PARKOURRANK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A2F7BB0)
#define RPG_CLIENT_PARKOURRANK_SET_BALLID_OFFSET UNITYSDK_OFFSET(0x1A2F7C40)
#define RPG_CLIENT_PARKOURRANK_SET_BALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A2F7C60)
#define RPG_CLIENT_PARKOURRANK_SET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0x1A2F7C00)
#define RPG_CLIENT_PARKOURRANK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A2F7BE0)
#define RPG_CLIENT_PARKOURRANK_SET_RECORD_OFFSET UNITYSDK_OFFSET(0x1A2F7C20)
#define RPG_CLIENT_PARKOURRANK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A2F7BC0)
#define RPG_CLIENT_PARKOURRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F8000)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourRank_TypeDefinitionIndex = 59114;

	class ParkourRank : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _BallImagePath_k__BackingField; // 0x18
		::System::UInt32 _Record_k__BackingField; // 0x20
		::System::UInt32 _BallID_k__BackingField; // 0x24
		::System::UInt32 _DistanceToFinish_k__BackingField; // 0x28
		::RPG::Client::ParkourRankType _Type_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK__CTOR_OFFSET))(this);
		}

		::RPG::Client::ParkourRankType get_Type()
		{
			return ((::RPG::Client::ParkourRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ParkourRankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_DistanceToFinish()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_DISTANCETOFINISH_OFFSET))(this);
		}

		::System::Void set_DistanceToFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_DISTANCETOFINISH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Record()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_RECORD_OFFSET))(this);
		}

		::System::Void set_Record(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_RECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_BallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_BALLID_OFFSET))(this);
		}

		::System::Void set_BallID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_BALLID_OFFSET))(this, a1);
		}

		::System::String* get_BallImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_BALLIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_BallImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_BALLIMAGEPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWithdraw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_ISWITHDRAW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_ISPLAYER_OFFSET))(this);
		}

		static ::RPG::Client::ParkourRank* Create(::Class_1_D17272E82AE804C2_760* a1)
		{
			return ((::RPG::Client::ParkourRank*(*)(::Class_1_D17272E82AE804C2_760*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ParkourRank* CreatePlayerRank(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ParkourRank*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATEPLAYERRANK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ParkourRank* CreateCharacterRank(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ParkourRank*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATECHARACTERRANK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ParkourRank* Create_1(::RPG::GameCore::ParkourRankingListConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ParkourRank*(*)(::RPG::GameCore::ParkourRankingListConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_COMPARETO_OFFSET))(this, a1);
		}
	};
}
