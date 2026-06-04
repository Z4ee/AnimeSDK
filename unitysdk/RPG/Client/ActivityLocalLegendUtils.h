#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendFriendLineupRecommendation; }
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class ActivityLocalLegendStatisticsLineupRecommendation; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class StarFightRedDotFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xB19D2E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xB19D290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xB19D330)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET UNITYSDK_OFFSET(0xB19D780)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19D8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils_TypeDefinitionIndex = 57572;

	class ActivityLocalLegendUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightRedDotFilter** StaticGet__NativeFilter()
		{
			return (::RPG::Client::StarFightRedDotFilter**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils_TypeDefinitionIndex)->GetStaticField(0x56B80);
		}
		static ::System::UInt32* StaticGet_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils_TypeDefinitionIndex)->GetStaticField(0x112C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation* CreateStatisticsRecommendation(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* CreateFriendRecommendation(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET))(a1);
		}

		static ::RPG::Client::StarFightRedDotFilter* get_NativeFilter()
		{
			return ((::RPG::Client::StarFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET))();
		}
	};
}
