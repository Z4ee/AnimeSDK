#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_ImeDialogCloseCallback; }
namespace MiHoYo::SDK { class PSDelegate_ImeDialogCompleteCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E7B930)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E7B970)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E79480)
#define MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7B840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenImeDialogDelegate_TypeDefinitionIndex = 7694;

	class PSDelegate_OpenImeDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::UI::InputField* a1, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback* a2, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::InputField* a1, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback* a2, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::InputField*, ::MiHoYo::SDK::PSDelegate_ImeDialogCloseCallback*, ::MiHoYo::SDK::PSDelegate_ImeDialogCompleteCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENIMEDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
