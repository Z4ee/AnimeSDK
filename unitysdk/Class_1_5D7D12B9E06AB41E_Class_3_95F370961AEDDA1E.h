#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9797C50)
#define CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9797C90)
#define CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_INVOKE_OFFSET UNITYSDK_OFFSET(0x97976D0)
#define CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x9796740)

inline static constexpr unsigned int Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E_TypeDefinitionIndex = 63768;

class Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_CLASS_3_95F370961AEDDA1E_ENDINVOKE_OFFSET))(this, a1);
	}
};
