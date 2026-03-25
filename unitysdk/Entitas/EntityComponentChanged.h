#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_ENTITYCOMPONENTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A86920)
#define ENTITAS_ENTITYCOMPONENTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A86990)
#define ENTITAS_ENTITYCOMPONENTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A84390)
#define ENTITAS_ENTITYCOMPONENTCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x11A86900)

namespace Entitas
{
	inline static constexpr unsigned int EntityComponentChanged_TypeDefinitionIndex = 9701;

	class EntityComponentChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_INVOKE_OFFSET))(this, entity, index, component);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IEntity* entity, ::System::Int32 index, ::Entitas::IComponent* component, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_BEGININVOKE_OFFSET))(this, entity, index, component, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
