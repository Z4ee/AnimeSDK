#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesAvatarEventResultRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class PlanetFesAvatarEventOptionData; }
namespace RPG::Client { class PlanetFesReward; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_OWNEROPTIONDATA_OFFSET UNITYSDK_OFFSET(0x9F85300)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x9F852E0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTDESC_OFFSET UNITYSDK_OFFSET(0x9F852C0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTID_OFFSET UNITYSDK_OFFSET(0x9F85260)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9F852A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTRANK_OFFSET UNITYSDK_OFFSET(0x9F85280)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDGOLD_OFFSET UNITYSDK_OFFSET(0x9F85A50)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9F85320)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDITEMDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x9F85B70)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x9F85380)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SETPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9F84EE0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_OWNEROPTIONDATA_OFFSET UNITYSDK_OFFSET(0x9F85310)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x9F852F0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTDESC_OFFSET UNITYSDK_OFFSET(0x9F852D0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTID_OFFSET UNITYSDK_OFFSET(0x9F85270)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9F852B0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTRANK_OFFSET UNITYSDK_OFFSET(0x9F85290)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F84CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionResultData_TypeDefinitionIndex = 54142;

	class PlanetFesAvatarEventOptionResultData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarEventOptionData* _OwnerOptionData_k__BackingField; // 0x10
		::RPG::Client::TextID _ResultBubbleTalk_k__BackingField; // 0x18
		::RPG::Client::PlanetFesAvatarEventResultRank _ResultRank_k__BackingField; // 0x28
		::System::UInt32 _ResultProbability_k__BackingField; // 0x2C
		::RPG::Client::TextID _ResultDesc_k__BackingField; // 0x30
		::System::UInt32 _ResultID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::PlanetFesAvatarEventOptionData* ownerOptionData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA__CTOR_OFFSET))(this, id, ownerOptionData);
		}

		::System::Void SetProbability(::System::UInt32 probability)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SETPROBABILITY_OFFSET))(this, probability);
		}

		::System::UInt32 get_ResultID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTID_OFFSET))(this);
		}

		::System::Void set_ResultID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTID_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesAvatarEventResultRank get_ResultRank()
		{
			return ((::RPG::Client::PlanetFesAvatarEventResultRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTRANK_OFFSET))(this);
		}

		::System::Void set_ResultRank(::RPG::Client::PlanetFesAvatarEventResultRank value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarEventResultRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTRANK_OFFSET))(this, value);
		}

		::System::UInt32 get_ResultProbability()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTPROBABILITY_OFFSET))(this);
		}

		::System::Void set_ResultProbability(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTPROBABILITY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ResultDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTDESC_OFFSET))(this);
		}

		::System::Void set_ResultDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTDESC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ResultBubbleTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_RESULTBUBBLETALK_OFFSET))(this);
		}

		::System::Void set_ResultBubbleTalk(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_RESULTBUBBLETALK_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesAvatarEventOptionData* get_OwnerOptionData()
		{
			return ((::RPG::Client::PlanetFesAvatarEventOptionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_OWNEROPTIONDATA_OFFSET))(this);
		}

		::System::Void set_OwnerOptionData(::RPG::Client::PlanetFesAvatarEventOptionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarEventOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_SET_OWNEROPTIONDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::PlanetFesReward* get_Reward()
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARD_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_RewardGold()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDGOLD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItemDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONRESULTDATA_GET_REWARDITEMDISPLAYDATALIST_OFFSET))(this);
		}
	};
}
