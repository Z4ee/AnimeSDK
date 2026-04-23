#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_ImeDialogCloseCallback; }
namespace MiHoYo::SDK { class PSDelegate_ImeDialogCompleteCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175FAF30)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175FAF70)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175F82C0)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175FAF10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenImeDialogDelegate_TypeDefinitionIndex = 6785;

	class PSDelegate_OpenImeDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::InputField* inputField, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback* closeCallback, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_INVOKE_OFFSET))(this, inputField, closeCallback, completeCallback);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::InputField* inputField, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback* closeCallback, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback* completeCallback, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::InputField*, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, inputField, closeCallback, completeCallback, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
