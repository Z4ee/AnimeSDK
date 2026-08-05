#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C487470)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4874A0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4871E0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4871C0)

namespace MoleMole
{
	inline static constexpr unsigned int DragableRectController_Class_3_50D343C44D28BEFB_3_TypeDefinitionIndex = 44008;

	class DragableRectController_Class_3_50D343C44D28BEFB_3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_CLASS_3_50D343C44D28BEFB_3_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
