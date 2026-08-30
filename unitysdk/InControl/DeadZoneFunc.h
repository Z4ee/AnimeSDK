#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_DEADZONEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18E7B9A0)
#define INCONTROL_DEADZONEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18E7BA50)
#define INCONTROL_DEADZONEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18E7B970)
#define INCONTROL_DEADZONEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7B900)

namespace InControl
{
	inline static constexpr unsigned int DeadZoneFunc_TypeDefinitionIndex = 39520;

	class DeadZoneFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Invoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector2 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
