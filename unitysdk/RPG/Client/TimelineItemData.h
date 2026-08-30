#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMELINEITEMDATA_METHOD_3_74AE28B122948DC1_OFFSET UNITYSDK_OFFSET(0xE226000)
#define RPG_CLIENT_TIMELINEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE2261E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineItemData_TypeDefinitionIndex = 60951;

	class TimelineItemData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EntityTimelineControlTrackInfo*>* TrackInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EntityTimelineControlTrackInfo*>* Method_3_74AE28B122948DC1()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EntityTimelineControlTrackInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEITEMDATA_METHOD_3_74AE28B122948DC1_OFFSET))(this);
		}
	};
}
