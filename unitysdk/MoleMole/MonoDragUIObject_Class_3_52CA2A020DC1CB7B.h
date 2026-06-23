#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class MonoDragUIObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A041A20)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A041A50)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A041520)
#define MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A041500)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_Class_3_52CA2A020DC1CB7B_TypeDefinitionIndex = 46805;

	class MonoDragUIObject_Class_3_52CA2A020DC1CB7B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MoleMole::MonoDragUIObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoDragUIObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CLASS_3_52CA2A020DC1CB7B_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
