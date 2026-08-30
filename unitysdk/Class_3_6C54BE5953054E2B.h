#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_3_6C54BE5953054E2B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16451BC0)
#define CLASS_3_6C54BE5953054E2B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16451BF0)
#define CLASS_3_6C54BE5953054E2B_INVOKE_OFFSET UNITYSDK_OFFSET(0x16451BB0)
#define CLASS_3_6C54BE5953054E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x16451B40)

inline static constexpr unsigned int Class_3_6C54BE5953054E2B_TypeDefinitionIndex = 69484;

class Class_3_6C54BE5953054E2B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_6C54BE5953054E2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6C54BE5953054E2B_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6C54BE5953054E2B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_6C54BE5953054E2B_ENDINVOKE_OFFSET))(this, a1);
	}
};
