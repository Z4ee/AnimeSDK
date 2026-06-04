#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_19;
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET UNITYSDK_OFFSET(0xB497640)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB496970)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0xB497C80)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB497DD0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET UNITYSDK_OFFSET(0xB497CE0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0xB496AA0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET UNITYSDK_OFFSET(0xB497CA0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xB497CC0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xB497C70)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0xB497400)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0xB497450)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0xB497C90)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET UNITYSDK_OFFSET(0xB497CB0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xB497CD0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB497BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendRankingData_TypeDefinitionIndex = 58977;

	class CakeRaceFriendRankingData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _DisplayData_k__BackingField; // 0x10
		::System::UInt32 _AccumulateCoin_k__BackingField; // 0x18
		::System::UInt32 _Rank_k__BackingField; // 0x1C
		::System::UInt32 _Uid_k__BackingField; // 0x20
		::System::UInt32 _LikeNum_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceFriendRankingData* Create(::Class_1_D1E0AD3915BCCF29_19* a1)
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::Class_1_D1E0AD3915BCCF29_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET))(a1);
		}

		::System::Void AddLike(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET))(this, a1);
		}

		::System::Void SetRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET))(this, a1);
		}

		::System::Void SetAccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_AccumulateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET))(this);
		}

		::System::Void set_AccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_LikeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET))(this);
		}

		::System::Void set_LikeNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLiked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_DisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET))(this);
		}
	};
}
