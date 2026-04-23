#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_DEADZONEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x171645A0)
#define INCONTROL_DEADZONEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17164650)
#define INCONTROL_DEADZONEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x17164190)
#define INCONTROL_DEADZONEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x17164170)

namespace InControl
{
	inline static constexpr unsigned int DeadZoneFunc_TypeDefinitionIndex = 37121;

	class DeadZoneFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Vector2 Invoke(::System::Single x, ::System::Single y, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_INVOKE_OFFSET))(this, x, y, lowerDeadZone, upperDeadZone);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single x, ::System::Single y, ::System::Single lowerDeadZone, ::System::Single upperDeadZone, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_BEGININVOKE_OFFSET))(this, x, y, lowerDeadZone, upperDeadZone, callback, object);
		}

		::UnityEngine::Vector2 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_DEADZONEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
