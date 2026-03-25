#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendFriendLineupRecommendation; }
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class ActivityLocalLegendStatisticsLineupRecommendation; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class StarFightRedDotFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x8F57830)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x8F577E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x8F57880)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET UNITYSDK_OFFSET(0x8F57CA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F57DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils_TypeDefinitionIndex = 49949;

	class ActivityLocalLegendUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightRedDotFilter** StaticGet__NativeFilter()
		{
			return (::RPG::Client::StarFightRedDotFilter**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils_TypeDefinitionIndex)->GetStaticField(0x2C570);
		}
		static ::System::UInt32* StaticGet_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils_TypeDefinitionIndex)->GetStaticField(0xEBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation* CreateStatisticsRecommendation(::RPG::Client::ActivityLocalLegendLevelData* levelData)
		{
			return ((::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET))(levelData);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* CreateFriendRecommendation(::RPG::Client::ActivityLocalLegendLevelData* levelData)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET))(levelData);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataList(::System::UInt32 eventID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET))(eventID);
		}

		static ::RPG::Client::StarFightRedDotFilter* get_NativeFilter()
		{
			return ((::RPG::Client::StarFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET))();
		}
	};
}
