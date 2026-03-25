#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_PINNEDUICANVASCREATED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18435C60)
#define SRDEBUGGER_PINNEDUICANVASCREATED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18435C90)
#define SRDEBUGGER_PINNEDUICANVASCREATED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18435710)
#define SRDEBUGGER_PINNEDUICANVASCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x184356F0)

namespace SRDebugger
{
	inline static constexpr unsigned int PinnedUiCanvasCreated_TypeDefinitionIndex = 29613;

	class PinnedUiCanvasCreated : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* canvasTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_INVOKE_OFFSET))(this, canvasTransform);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::RectTransform* canvasTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_BEGININVOKE_OFFSET))(this, canvasTransform, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
