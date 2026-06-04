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

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0xD033850)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_10D22B28B686D049_OFFSET UNITYSDK_OFFSET(0xD032E20)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD033D40)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_7F6BD08C06250CBF_OFFSET UNITYSDK_OFFSET(0xD0337E0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0xD033710)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_FEDFCE5C3EA7AA9D_OFFSET UNITYSDK_OFFSET(0xD033D90)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD0339A0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD033A00)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD033A70)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0341A0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD0341B0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD0341C0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD0341D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransformMixer_TypeDefinitionIndex = 45298;

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

		::System::Void Method_2_10D22B28B686D049(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::GameObject* a2, ::RPGTools::Timeline::OverrideTransform_ControlType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::RPGTools::Timeline::OverrideTransform_ControlType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_10D22B28B686D049_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_7F6BD08C06250CBF(::UnityEngine::Timeline::TrackAsset* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_7F6BD08C06250CBF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C365440D57901CE0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_C365440D57901CE0_OFFSET))(this);
		}

		::System::Void Method_2_06F38768260E973C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_06F38768260E973C_OFFSET))(this);
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

		::System::Void Method_2_FEDFCE5C3EA7AA9D(::UnityEngine::Playables::Playable a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_FEDFCE5C3EA7AA9D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
