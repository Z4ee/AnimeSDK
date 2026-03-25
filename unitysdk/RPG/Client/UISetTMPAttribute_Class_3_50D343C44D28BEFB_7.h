#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA731F70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA731FA0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET UNITYSDK_OFFSET(0xA731C80)
#define RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET UNITYSDK_OFFSET(0xA731F50)

namespace RPG::Client
{
	inline static constexpr unsigned int UISetTMPAttribute_Class_3_50D343C44D28BEFB_7_TypeDefinitionIndex = 57915;

	class UISetTMPAttribute_Class_3_50D343C44D28BEFB_7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
