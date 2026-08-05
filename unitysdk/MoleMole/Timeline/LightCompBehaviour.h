#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class LightParams; }
namespace System { class Object; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x168A24E0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x168A24F0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x168A24D0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x168A21E0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_97E4BDB308FEA370_OFFSET UNITYSDK_OFFSET(0x168A2500)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x168A2100)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x168A1F00)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x168A24C0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168A23C0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x168A2160)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x168A1E70)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x168A2250)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x168A2440)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightCompBehaviour_TypeDefinitionIndex = 50224;

	class LightCompBehaviour : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::Light* Light; // 0x18
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData; // 0x20
		::System::Boolean hasInitData; // 0x28
		::MoleMole::Timeline::LightParams* lightParams; // 0x30
		::MoleMole::Timeline::LightParams* PreLightParams; // 0x38
		::System::Boolean HasRecordedParams; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_3_B235E757922104A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_B235E757922104A8_OFFSET))(this);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_832295EC279E5994_2_OFFSET))(this);
		}

		::System::Void Method_3_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_3_97E4BDB308FEA370(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_97E4BDB308FEA370_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}
	};
}
