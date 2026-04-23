#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17647BB0)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17647BE0)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17647660)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17647640)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_InputFieldDelegate_TypeDefinitionIndex = 6821;

	class SDKDelegate_InputFieldDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_INVOKE_OFFSET))(this, inputField);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::InputField* inputField, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::InputField*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_BEGININVOKE_OFFSET))(this, inputField, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
