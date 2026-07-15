#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Animation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x168C2530)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x168C2600)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x168C16C0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x168C2440)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate_TypeDefinitionIndex = 42234;

	class SkeletonMecanim_MecanimTranslator_OnClipAppliedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Animation* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Animation* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
