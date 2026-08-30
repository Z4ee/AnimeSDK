#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC3665B0)
#define CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC3665E0)
#define CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_INVOKE_OFFSET UNITYSDK_OFFSET(0xC3665A0)
#define CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB__CTOR_OFFSET UNITYSDK_OFFSET(0xC3664B0)

inline static constexpr unsigned int Class_0_16E4307DCC419505_464_Class_3_410EEB4A0F592FBB_TypeDefinitionIndex = 57302;

class Class_0_16E4307DCC419505_464_Class_3_410EEB4A0F592FBB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Animator* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Animator*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_0_16E4307DCC419505_464_CLASS_3_410EEB4A0F592FBB_ENDINVOKE_OFFSET))(this, a1);
	}
};
