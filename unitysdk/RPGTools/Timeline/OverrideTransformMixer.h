#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class OverrideTransformMixer_Class_1_5ADB076CDD392373; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB8F1FC0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_52F4092F6BFF6992_OFFSET UNITYSDK_OFFSET(0xB8F12B0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_85E770997A59B4B6_OFFSET UNITYSDK_OFFSET(0xB8F1A60)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0xB8F19A0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_A61B8BC4D1AB144C_OFFSET UNITYSDK_OFFSET(0xB8F2010)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0xB8F1AD0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8F1C00)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F1C60)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F1CD0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F2460)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB8F2470)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8F2480)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8F2490)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransformMixer_TypeDefinitionIndex = 44751;

	class OverrideTransformMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::System::Double>* _ClipStartArray; // 0x10
		::Il2CppArray<::System::Double>* _ClipEndArray; // 0x18
		::RPGTools::Timeline::OverrideTransform_ControlType _ControlType; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Timeline::OverrideTransformMixer_Class_1_5ADB076CDD392373*>* _OverrideTransformEntities; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_52F4092F6BFF6992(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::GameObject* a2, ::RPGTools::Timeline::OverrideTransform_ControlType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::RPGTools::Timeline::OverrideTransform_ControlType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_52F4092F6BFF6992_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_85E770997A59B4B6(::UnityEngine::Timeline::TrackAsset* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_85E770997A59B4B6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9076BB310BB6989E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_9076BB310BB6989E_OFFSET))(this);
		}

		::System::Void Method_2_D8E6DC0B27699F85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_D8E6DC0B27699F85_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_2_A61B8BC4D1AB144C(::UnityEngine::Playables::Playable a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_A61B8BC4D1AB144C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
