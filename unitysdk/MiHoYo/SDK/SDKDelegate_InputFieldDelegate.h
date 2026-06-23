#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CC500)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CC530)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CC000)
#define MIHOYO_SDK_SDKDELEGATE_INPUTFIELDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBFE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_InputFieldDelegate_TypeDefinitionIndex = 19538;

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
