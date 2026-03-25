#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_ENTITYCOMPONENTREPLACED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A869C0)
#define ENTITAS_ENTITYCOMPONENTREPLACED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A86A40)
#define ENTITAS_ENTITYCOMPONENTREPLACED_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A84FB0)
#define ENTITAS_ENTITYCOMPONENTREPLACED__CTOR_OFFSET UNITYSDK_OFFSET(0x11A869A0)

namespace Entitas
{
	inline static constexpr unsigned int EntityComponentReplaced_TypeDefinitionIndex = 9702;

	class EntityComponentReplaced : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* previousComponent, ::Entitas::IComponent* newComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_INVOKE_OFFSET))(this, entity, index, previousComponent, newComponent);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* previousComponent, ::Entitas::IComponent* newComponent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_BEGININVOKE_OFFSET))(this, entity, index, previousComponent, newComponent, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
