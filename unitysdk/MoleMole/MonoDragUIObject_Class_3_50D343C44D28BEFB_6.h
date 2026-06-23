#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18301120)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18301150)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_INVOKE_OFFSET UNITYSDK_OFFSET(0x18300E80)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18300E60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_Class_3_50D343C44D28BEFB_6_TypeDefinitionIndex = 46812;

	class MonoDragUIObject_Class_3_50D343C44D28BEFB_6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_50D343C44D28BEFB_6_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
