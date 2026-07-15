#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16D34B30)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16D34B60)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D34B20)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10__CTOR_OFFSET UNITYSDK_OFFSET(0x16D34AB0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder_Class_3_50D343C44D28BEFB_10_TypeDefinitionIndex = 70832;

	class Grounder_Class_3_50D343C44D28BEFB_10 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_10_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
