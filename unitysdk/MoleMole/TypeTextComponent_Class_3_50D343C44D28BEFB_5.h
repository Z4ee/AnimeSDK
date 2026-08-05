#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11D80DD0)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11D80E00)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_INVOKE_OFFSET UNITYSDK_OFFSET(0x11D80B40)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x11D80B20)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_Class_3_50D343C44D28BEFB_5_TypeDefinitionIndex = 72448;

	class TypeTextComponent_Class_3_50D343C44D28BEFB_5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_3_50D343C44D28BEFB_5_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
