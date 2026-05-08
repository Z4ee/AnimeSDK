#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10153AA0)
#define CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10153AD0)
#define CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_INVOKE_OFFSET UNITYSDK_OFFSET(0x10153800)
#define CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x101537F0)

inline static constexpr unsigned int Class_2_002C218A1D4CE93A_Class_3_50D343C44D28BEFB_4_TypeDefinitionIndex = 42148;

class Class_2_002C218A1D4CE93A_Class_3_50D343C44D28BEFB_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableDirector* Invoke()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_CLASS_3_50D343C44D28BEFB_4_ENDINVOKE_OFFSET))(this, a1);
	}
};
