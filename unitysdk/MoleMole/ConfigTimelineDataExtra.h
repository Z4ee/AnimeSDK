#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class TimelineDataExtra; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ENSURETIMELINEEXTRADATASDEFAULTTYPES_OFFSET UNITYSDK_OFFSET(0x1A94D960)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ONTIMELINEEXTRADATASCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A94D910)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94DD80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineDataExtra_TypeDefinitionIndex = 45765;

	class ConfigTimelineDataExtra : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 prorityOrder; // 0x58
		::System::Int32 timelineType; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>* timelineExtraDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET))(this);
		}

		::System::Void OnTimelineExtraDatasCollectionChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ONTIMELINEEXTRADATASCOLLECTIONCHANGED_OFFSET))(this);
		}

		::System::Void EnsureTimelineExtraDatasDefaultTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ENSURETIMELINEEXTRADATASDEFAULTTYPES_OFFSET))(this);
		}
	};
}
