#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_ENTITYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C558E0)
#define ENTITAS_ENTITYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C55910)
#define ENTITAS_ENTITYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C54EC0)
#define ENTITAS_ENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C558C0)

namespace Entitas
{
	inline static constexpr unsigned int EntityEvent_TypeDefinitionIndex = 9836;

	class EntityEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYEVENT_INVOKE_OFFSET))(this, entity);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IEntity* entity, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYEVENT_BEGININVOKE_OFFSET))(this, entity, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
