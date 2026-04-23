#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3E3A20)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3E3A50)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3E3780)
#define RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3760)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounder_Class_3_50D343C44D28BEFB_9_TypeDefinitionIndex = 68337;

	class Grounder_Class_3_50D343C44D28BEFB_9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDER_CLASS_3_50D343C44D28BEFB_9_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
