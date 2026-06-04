#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_ENTITYCOMPONENTREPLACED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14702610)
#define ENTITAS_ENTITYCOMPONENTREPLACED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14702690)
#define ENTITAS_ENTITYCOMPONENTREPLACED_INVOKE_OFFSET UNITYSDK_OFFSET(0x14701570)
#define ENTITAS_ENTITYCOMPONENTREPLACED__CTOR_OFFSET UNITYSDK_OFFSET(0x14702520)

namespace Entitas
{
	inline static constexpr unsigned int EntityComponentReplaced_TypeDefinitionIndex = 9662;

	class EntityComponentReplaced : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTREPLACED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
