#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA42390)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA423D0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA41E10)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA41E00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior_DeleteAnimationFrames_TypeDefinitionIndex = 30621;

	class MaterialBaseBehavior_DeleteAnimationFrames : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Timeline::AnimationTrack* animationTrack, ::System::Collections::Generic::List_1<::System::String*>* attrNames)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_INVOKE_OFFSET))(this, animationTrack, attrNames);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Timeline::AnimationTrack* animationTrack, ::System::Collections::Generic::List_1<::System::String*>* attrNames, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_BEGININVOKE_OFFSET))(this, animationTrack, attrNames, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_DELETEANIMATIONFRAMES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
