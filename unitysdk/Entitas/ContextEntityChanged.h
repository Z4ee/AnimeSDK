#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_CONTEXTENTITYCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A81DB0)
#define ENTITAS_CONTEXTENTITYCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A81DF0)
#define ENTITAS_CONTEXTENTITYCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A81830)
#define ENTITAS_CONTEXTENTITYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x11A81810)

namespace Entitas
{
	inline static constexpr unsigned int ContextEntityChanged_TypeDefinitionIndex = 9685;

	class ContextEntityChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Entitas::IContext* context, ::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_INVOKE_OFFSET))(this, context, entity);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IContext* context, ::Entitas::IEntity* entity, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_BEGININVOKE_OFFSET))(this, context, entity, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
