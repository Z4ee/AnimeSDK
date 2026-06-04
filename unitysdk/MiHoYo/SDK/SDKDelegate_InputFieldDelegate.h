#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184203C0)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184203F0)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184203B0)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184202C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_InputFieldDelegate_TypeDefinitionIndex = 7724;

	class SDKDelegate_InputFieldDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::InputField* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::InputField*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
