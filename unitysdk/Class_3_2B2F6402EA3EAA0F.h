#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_2B2F6402EA3EAA0F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14587200)
#define CLASS_3_2B2F6402EA3EAA0F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x145872B0)
#define CLASS_3_2B2F6402EA3EAA0F_INVOKE_OFFSET UNITYSDK_OFFSET(0x14587180)
#define CLASS_3_2B2F6402EA3EAA0F__CTOR_OFFSET UNITYSDK_OFFSET(0x14587110)

inline static constexpr unsigned int Class_3_2B2F6402EA3EAA0F_TypeDefinitionIndex = 53628;

class Class_3_2B2F6402EA3EAA0F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_2B2F6402EA3EAA0F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_2B2F6402EA3EAA0F_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2B2F6402EA3EAA0F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_2B2F6402EA3EAA0F_ENDINVOKE_OFFSET))(this, a1);
	}
};
