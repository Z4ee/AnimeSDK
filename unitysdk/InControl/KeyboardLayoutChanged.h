#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17FC4640)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17FC46B0)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x17FC4630)
#define INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC45C0)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutChanged_TypeDefinitionIndex = 37897;

	class KeyboardLayoutChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
