#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/NPCCrowd/NPCCrowdUtils_CrowdWeatherTypeFlag.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

class Class_3_CCAF4B6A77932E66;
class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDUTILS_APPLYCURRENTTIMEPERIODTAG_OFFSET UNITYSDK_OFFSET(0xE9567B0)
#define NPCCROWD_NPCCROWDUTILS_APPLYTIMEPERIODTAG_OFFSET UNITYSDK_OFFSET(0xE9568B0)
#define NPCCROWD_NPCCROWDUTILS_CONVERTWEATHERTYPETOFLAG_OFFSET UNITYSDK_OFFSET(0xE956680)
#define NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE94AC70)
#define NPCCROWD_NPCCROWDUTILS_GETCURRENTTIMEPERIODFORTAGSYNC_OFFSET UNITYSDK_OFFSET(0xE956BB0)
#define NPCCROWD_NPCCROWDUTILS_GETCURTIMEDATA_OFFSET UNITYSDK_OFFSET(0xE956260)
#define NPCCROWD_NPCCROWDUTILS_GETCURWEATHERTYPE_OFFSET UNITYSDK_OFFSET(0xE9565D0)
#define NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE955E50)
#define NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE955C10)
#define NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xE9561F0)
#define NPCCROWD_NPCCROWDUTILS_ISGPUMODEENABLEDINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xE956090)
#define NPCCROWD_NPCCROWDUTILS_MATCHWEATHERFLAG_OFFSET UNITYSDK_OFFSET(0xE9566E0)
#define NPCCROWD_NPCCROWDUTILS_STATIC_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0xE956580)
#define NPCCROWD_NPCCROWDUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xE956DD0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_TypeDefinitionIndex = 70989;

	class NPCCrowdUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::ProtoScript::TimePeriodType, ::Foundation::Unreal::FGameplayTag>** StaticGet_TimePeriodTagCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::ProtoScript::TimePeriodType, ::Foundation::Unreal::FGameplayTag>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdUtils_TypeDefinitionIndex)->GetStaticField(0x3AE10);
		}
		static ::System::Boolean* StaticGet__timePeriodTagCacheBuilt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdUtils_TypeDefinitionIndex)->GetStaticField(0xDE30);
		}
		// static const ::System::Int32 INVALID_ID = 0x0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetTagComponent(::System::UInt32 entityID, ::Class_3_CCAF4B6A77932E66*& tagComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_CCAF4B6A77932E66*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET))(entityID, tagComponent);
		}

		static ::System::Boolean GetCrowdComponent(::System::UInt32 entityID, ::Class_3_F2DAD7F45F518868*& crowdComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET))(entityID, crowdComponent);
		}

		static ::System::Boolean GetMaterialComponent(::System::UInt32 entityID, ::Class_3_FFD0045B4597F294*& matComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_FFD0045B4597F294*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET))(entityID, matComponent);
		}

		static ::System::Boolean IsGpuModeEnabledInCurrentScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_ISGPUMODEENABLEDINCURRENTSCENE_OFFSET))();
		}

		static ::System::Boolean IsCrowdStreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET))();
		}

		static ::System::Void GetCurTimeData(::ProtoScript::TimePeriodType& period, ::System::DayOfWeek& dayOfWeek)
		{
			return ((::System::Void(*)(::ProtoScript::TimePeriodType&, ::System::DayOfWeek&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURTIMEDATA_OFFSET))(period, dayOfWeek);
		}

		static ::System::Void GetCurWeatherType(::MoleMole::Config::WeatherType& weatherType)
		{
			return ((::System::Void(*)(::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURWEATHERTYPE_OFFSET))(weatherType);
		}

		static ::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag ConvertWeatherTypeToFlag(::MoleMole::Config::WeatherType weatherType)
		{
			return ((::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag(*)(::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_CONVERTWEATHERTYPETOFLAG_OFFSET))(weatherType);
		}

		static ::System::Boolean MatchWeatherFlag(::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag weatherFlags, ::MoleMole::Config::WeatherType weatherType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_MATCHWEATHERFLAG_OFFSET))(weatherFlags, weatherType);
		}

		static ::System::Boolean ApplyCurrentTimePeriodTag(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_APPLYCURRENTTIMEPERIODTAG_OFFSET))(entityID);
		}

		static ::System::Boolean ApplyTimePeriodTag(::Class_3_CCAF4B6A77932E66* tagComponent, ::ProtoScript::TimePeriodType period)
		{
			return ((::System::Boolean(*)(::Class_3_CCAF4B6A77932E66*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_APPLYTIMEPERIODTAG_OFFSET))(tagComponent, period);
		}

		static ::System::Void GetCurrentTimePeriodForTagSync(::ProtoScript::TimePeriodType& period)
		{
			return ((::System::Void(*)(::ProtoScript::TimePeriodType&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURRENTTIMEPERIODFORTAGSYNC_OFFSET))(period);
		}

		static ::ProtoScript::TimePeriodType Static_ConvertFrom(::Enum_3_AB9CCA0B2E05A401 gameDayPeriod)
		{
			return ((::ProtoScript::TimePeriodType(*)(::Enum_3_AB9CCA0B2E05A401))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_STATIC_CONVERTFROM_OFFSET))(gameDayPeriod);
		}
	};
}
