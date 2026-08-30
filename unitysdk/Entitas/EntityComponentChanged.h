#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_ENTITYCOMPONENTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16535AB0)
#define ENTITAS_ENTITYCOMPONENTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16535B20)
#define ENTITAS_ENTITYCOMPONENTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x165342D0)
#define ENTITAS_ENTITYCOMPONENTCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x165359C0)

namespace Entitas
{
	inline static constexpr unsigned int EntityComponentChanged_TypeDefinitionIndex = 9954;

	class EntityComponentChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYCOMPONENTCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
