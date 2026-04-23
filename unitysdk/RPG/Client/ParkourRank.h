#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourRankType.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_81;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURRANK_COMPARETO_OFFSET UNITYSDK_OFFSET(0xAC36170)
#define RPG_CLIENT_PARKOURRANK_CREATECHARACTERRANK_OFFSET UNITYSDK_OFFSET(0xAC35EB0)
#define RPG_CLIENT_PARKOURRANK_CREATEPLAYERRANK_OFFSET UNITYSDK_OFFSET(0xAC35D40)
#define RPG_CLIENT_PARKOURRANK_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAC35FF0)
#define RPG_CLIENT_PARKOURRANK_CREATE_OFFSET UNITYSDK_OFFSET(0xAC35A90)
#define RPG_CLIENT_PARKOURRANK_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xAC35A30)
#define RPG_CLIENT_PARKOURRANK_GET_BALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xAC35A50)
#define RPG_CLIENT_PARKOURRANK_GET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xAC359F0)
#define RPG_CLIENT_PARKOURRANK_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xAC35A80)
#define RPG_CLIENT_PARKOURRANK_GET_ISWITHDRAW_OFFSET UNITYSDK_OFFSET(0xAC35A70)
#define RPG_CLIENT_PARKOURRANK_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAC359D0)
#define RPG_CLIENT_PARKOURRANK_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xAC35A10)
#define RPG_CLIENT_PARKOURRANK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAC359B0)
#define RPG_CLIENT_PARKOURRANK_SET_BALLID_OFFSET UNITYSDK_OFFSET(0xAC35A40)
#define RPG_CLIENT_PARKOURRANK_SET_BALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xAC35A60)
#define RPG_CLIENT_PARKOURRANK_SET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xAC35A00)
#define RPG_CLIENT_PARKOURRANK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xAC359E0)
#define RPG_CLIENT_PARKOURRANK_SET_RECORD_OFFSET UNITYSDK_OFFSET(0xAC35A20)
#define RPG_CLIENT_PARKOURRANK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xAC359C0)
#define RPG_CLIENT_PARKOURRANK__CTOR_OFFSET UNITYSDK_OFFSET(0xAC35D30)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourRank_TypeDefinitionIndex = 57061;

	class ParkourRank : public ::System::Object
	{
	public:
		::System::String* _BallImagePath_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::UInt32 _Record_k__BackingField; // 0x20
		::System::UInt32 _DistanceToFinish_k__BackingField; // 0x24
		::RPG::Client::ParkourRankType _Type_k__BackingField; // 0x28
		::System::UInt32 _BallID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK__CTOR_OFFSET))(this);
		}

		::RPG::Client::ParkourRankType get_Type()
		{
			return ((::RPG::Client::ParkourRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ParkourRankType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_DistanceToFinish()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_DISTANCETOFINISH_OFFSET))(this);
		}

		::System::Void set_DistanceToFinish(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_DISTANCETOFINISH_OFFSET))(this, value);
		}

		::System::UInt32 get_Record()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_RECORD_OFFSET))(this);
		}

		::System::Void set_Record(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_RECORD_OFFSET))(this, value);
		}

		::System::UInt32 get_BallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_BALLID_OFFSET))(this);
		}

		::System::Void set_BallID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_BALLID_OFFSET))(this, value);
		}

		::System::String* get_BallImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_BALLIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_BallImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_SET_BALLIMAGEPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsWithdraw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_ISWITHDRAW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_GET_ISPLAYER_OFFSET))(this);
		}

		static ::RPG::Client::ParkourRank* Create(::Class_1_D1E0AD3915BCCF29_81* rankingInfo)
		{
			return ((::RPG::Client::ParkourRank*(*)(::Class_1_D1E0AD3915BCCF29_81*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATE_OFFSET))(rankingInfo);
		}

		static ::RPG::Client::ParkourRank* CreatePlayerRank(::System::UInt32 record, ::System::UInt32 ballID, ::System::UInt32 distanceToFinish)
		{
			return ((::RPG::Client::ParkourRank*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATEPLAYERRANK_OFFSET))(record, ballID, distanceToFinish);
		}

		static ::RPG::Client::ParkourRank* CreateCharacterRank(::System::UInt32 characterID, ::System::UInt32 record, ::System::UInt32 distanceToFinish)
		{
			return ((::RPG::Client::ParkourRank*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATECHARACTERRANK_OFFSET))(characterID, record, distanceToFinish);
		}

		static ::RPG::Client::ParkourRank* Create_1(::RPG::GameCore::ParkourRankingListConfigRow* rankingRow, ::System::UInt32 levelID)
		{
			return ((::RPG::Client::ParkourRank*(*)(::RPG::GameCore::ParkourRankingListConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_CREATE_1_OFFSET))(rankingRow, levelID);
		}

		::System::Int32 CompareTo(::RPG::Client::ParkourRank* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURRANK_COMPARETO_OFFSET))(this, other);
		}
	};
}
