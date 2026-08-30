#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_ACTIVECRP_OFFSET UNITYSDK_OFFSET(0x1D1348B0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0x1D134340)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x1D134680)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x1D133AF0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D134A50)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D135F90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowSyncUIRect_TypeDefinitionIndex = 48356;

	class CRPCameraSmallWindowSyncUIRect : public ::System::Object
	{
	public:
		::System::String* UIControllerName; // 0x10
		::RPG::Client::UIController* _UIController; // 0x18
		::UnityEngine::RectTransform* _RectTransform; // 0x20
		::UnityEngine::Rect _Rect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean get_ActiveCRP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_ACTIVECRP_OFFSET))(this);
		}

		::System::Boolean Method_1_7AEA4B2B25797605()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
