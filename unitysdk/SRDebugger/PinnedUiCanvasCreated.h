#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_PINNEDUICANVASCREATED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F4370)
#define SRDEBUGGER_PINNEDUICANVASCREATED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F43A0)
#define SRDEBUGGER_PINNEDUICANVASCREATED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F4360)
#define SRDEBUGGER_PINNEDUICANVASCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F42F0)

namespace SRDebugger
{
	inline static constexpr unsigned int PinnedUiCanvasCreated_TypeDefinitionIndex = 36415;

	class PinnedUiCanvasCreated : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::RectTransform* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_PINNEDUICANVASCREATED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
