#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineData.h"

namespace MoleMole::Timeline::TimelineComponent { class PreLoadCameraData; }
namespace System { class String; }

#define MOLEMOLE_RUNTIMETIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15B4AA30)
#define MOLEMOLE_RUNTIMETIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15B4A9F0)
#define MOLEMOLE_RUNTIMETIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4AA70)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15B4AAC0)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15B4AB50)

namespace MoleMole
{
	inline static constexpr unsigned int RuntimeTimelineData_TypeDefinitionIndex = 43810;

	class RuntimeTimelineData : public ::MoleMole::TimelineData
	{
	public:
		::System::Boolean ShowText; // 0x78
		::System::String* TextShowInfo; // 0x80
		::System::Boolean PreLoad; // 0x88
		::MoleMole::Timeline::TimelineComponent::PreLoadCameraData* FirstFrameCamera; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean GetIgnoreTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean GetDefaultNeedDisplayTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean __base_GetDefaultNeedDisplayTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean __base_GetIgnoreTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETIGNORETIMELINERESOVERRIDE_OFFSET))(this);
		}
	};
}
