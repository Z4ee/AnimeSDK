#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1717D3F0)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1717D460)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1717D0A0)
#define INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1717D080)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutChanged_TypeDefinitionIndex = 37165;

	class KeyboardLayoutChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET))(this, oldCultureInfo, newCultureInfo);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET))(this, oldCultureInfo, newCultureInfo, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
