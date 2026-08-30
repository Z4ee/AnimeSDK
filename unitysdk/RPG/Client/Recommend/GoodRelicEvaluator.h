#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Recommend/GoodRelicRecommendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Recommend { class GoodRelicPropertyDataGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xDE0D160)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETGOODRELICRECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0xDE0F6D0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETRELICITEMRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0xDE0D3E0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGOODRELIC_OFFSET UNITYSDK_OFFSET(0xDE0D470)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGROWTHTARGETRELIC_OFFSET UNITYSDK_OFFSET(0xDE0D900)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTBATTLERESULTDATA_OFFSET UNITYSDK_OFFSET(0xDE0E820)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTITEMDIALOGDATA_OFFSET UNITYSDK_OFFSET(0xDE0EFF0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDE0D2E0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__FETCHSUBPROPERTYMATCHINFO_OFFSET UNITYSDK_OFFSET(0xDE0E0E0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETAVATARLISTBYSETID_OFFSET UNITYSDK_OFFSET(0xDE0E220)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETRELICMATCHDATA_OFFSET UNITYSDK_OFFSET(0xDE0E640)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETREPORTINFO_OFFSET UNITYSDK_OFFSET(0xDE0ECA0)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xDE0DE00)
#define RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHRELICSET_OFFSET UNITYSDK_OFFSET(0xDE0DD90)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int GoodRelicEvaluator_TypeDefinitionIndex = 74359;

	class GoodRelicEvaluator : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>* _GrowthTargetRecommendDataCacheMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>*>* _RelicRecommendCacheMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Recommend::GoodRelicEvaluator* Create()
		{
			return ((::RPG::Client::Recommend::GoodRelicEvaluator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_CREATE_OFFSET))();
		}

		::RPG::Client::Recommend::GoodRelicRecommendType GetRelicItemRecommendType(::RPG::Client::RelicItemData* a1)
		{
			return ((::RPG::Client::Recommend::GoodRelicRecommendType(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETRELICITEMRECOMMENDTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsGrowthTargetRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGROWTHTARGETRELIC_OFFSET))(this, a1);
		}

		::System::Boolean IsGoodRelic(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_ISGOODRELIC_OFFSET))(this, a1);
		}

		::System::Void ReportBattleResultData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTBATTLERESULTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* _GetReportInfo(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETREPORTINFO_OFFSET))(this, a1);
		}

		::System::Void ReportItemDialogData(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_REPORTITEMDIALOGDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAvatarListBySetID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETAVATARLISTBYSETID_OFFSET))(this, a1);
		}

		::System::Boolean _IsMatchRelicSet(::RPG::Client::RelicRecommendData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHRELICSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Recommend::GoodRelicPropertyDataGroup* _GetRelicMatchData(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2)
		{
			return ((::RPG::Client::Recommend::GoodRelicPropertyDataGroup*(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__GETRELICMATCHDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsMatchMainProperty(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__ISMATCHMAINPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchSubPropertyMatchInfo(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR__FETCHSUBPROPERTYMATCHINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>* GetGoodRelicRecommendAvatarList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Recommend::GoodRelicPropertyDataGroup*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICEVALUATOR_GETGOODRELICRECOMMENDAVATARLIST_OFFSET))(this, a1);
		}
	};
}
