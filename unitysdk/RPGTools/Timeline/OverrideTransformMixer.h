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

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x1998F980)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1998FE70)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_7F6BD08C06250CBF_OFFSET UNITYSDK_OFFSET(0x1998F910)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0x1998F840)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_FEDFCE5C3EA7AA9D_OFFSET UNITYSDK_OFFSET(0x1998FEC0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_FF36942ED4CD4426_OFFSET UNITYSDK_OFFSET(0x1998EDC0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1998FAD0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1998FB30)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1998FBA0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x199902D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransformMixer_TypeDefinitionIndex = 46222;

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

		::System::Void Method_2_FF36942ED4CD4426(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::GameObject* a2, ::RPGTools::Timeline::OverrideTransform_ControlType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::RPGTools::Timeline::OverrideTransform_ControlType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_METHOD_2_FF36942ED4CD4426_OFFSET))(this, a1, a2, a3);
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
	};
}
