#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0x1B34E0E0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x1B34E2F0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B34D890)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34E8B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlCenterAndSize_TypeDefinitionIndex = 46123;

	class CRPCameraSmallWindowControlCenterAndSize : public ::System::Object
	{
	public:
		::System::Single CenterX; // 0x10
		::System::Single CenterY; // 0x14
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
