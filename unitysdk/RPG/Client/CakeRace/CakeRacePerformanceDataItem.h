#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRacePerformenceAudioTagType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRacePerformanceRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9EEEB20)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_ANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9EEE850)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_AUDIOTAG_OFFSET UNITYSDK_OFFSET(0x9EEEAB0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_CD_OFFSET UNITYSDK_OFFSET(0x9EEE530)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x9EEE6C0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x9EEE4C0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x9EEE440)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9EEEA40)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x9EEE9C0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9EEE450)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9EEE3E0)
#define RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEEB70)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRacePerformanceDataItem_TypeDefinitionIndex = 70231;

	class CakeRacePerformanceDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _PerformanceID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM__CTOR_OFFSET))(this, performanceID);
		}

		::RPG::GameCore::CakeRacePerformanceRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRacePerformanceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PERFORMANCEID_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceTriggerPerformanceType get_Type()
		{
			return ((::RPG::GameCore::CakeRaceTriggerPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Params()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PARAMS_OFFSET))(this);
		}

		::System::Single get_CD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_CD_OFFSET))(this);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_DELAY_OFFSET))(this);
		}

		::System::String* get_AnimTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_ANIMTRIGGER_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_TEXTID_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::GameCore::CakeRacePerformenceAudioTagType get_AudioTag()
		{
			return ((::RPG::GameCore::CakeRacePerformenceAudioTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_GET_AUDIOTAG_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRacePerformanceDataItem* Create(::System::UInt32 performanceID)
		{
			return ((::RPG::Client::CakeRace::CakeRacePerformanceDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEPERFORMANCEDATAITEM_CREATE_OFFSET))(performanceID);
		}
	};
}
