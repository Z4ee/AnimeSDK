#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class TimelineData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINEDATA_OPENSHOWTEXTSCANTOOL_OFFSET UNITYSDK_OFFSET(0x115F2690)
#define MOLEMOLE_CONFIGTIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2720)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineData_TypeDefinitionIndex = 48066;

	class ConfigTimelineData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 prorityOrder; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>* timelineDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Void OpenShowTextScanTool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATA_OPENSHOWTEXTSCANTOOL_OFFSET))(this);
		}
	};
}
