#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_COROUTINEFADEIN_OFFSET UNITYSDK_OFFSET(0x1D8264B0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_COROUTINEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1D8265E0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_FADEIN_OFFSET UNITYSDK_OFFSET(0x1D8263E0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1D826510)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D825E40)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D826120)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D826640)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CameraFader_TypeDefinitionIndex = 30618;

	class CameraFader : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::NodeCanvas::Tasks::Actions::CameraFader** StaticGet__current()
		{
			return (::NodeCanvas::Tasks::Actions::CameraFader**)Il2CppClass::FromTypeDefinitionIndex(CameraFader_TypeDefinitionIndex)->GetStaticField(0x248E0);
		}
		::System::Single alpha; // 0x18
		::UnityEngine::Texture2D* _blackTexture; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_blackTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_GET_BLACKTEXTURE_OFFSET))(this);
		}

		static ::NodeCanvas::Tasks::Actions::CameraFader* get_current()
		{
			return ((::NodeCanvas::Tasks::Actions::CameraFader*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_GET_CURRENT_OFFSET))();
		}

		::System::Void FadeIn(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_FADEIN_OFFSET))(this, time);
		}

		::System::Void FadeOut(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_FADEOUT_OFFSET))(this, time);
		}

		::System::Collections::IEnumerator* CoroutineFadeIn(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_COROUTINEFADEIN_OFFSET))(this, time);
		}

		::System::Collections::IEnumerator* CoroutineFadeOut(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER_COROUTINEFADEOUT_OFFSET))(this, time);
		}
	};
}
