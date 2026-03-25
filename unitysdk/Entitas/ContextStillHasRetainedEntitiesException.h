#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }

#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A82AC0)

namespace Entitas
{
	inline static constexpr unsigned int ContextStillHasRetainedEntitiesException_TypeDefinitionIndex = 9682;

	class ContextStillHasRetainedEntitiesException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* context, ::Il2CppArray<::Entitas::IEntity*>* entities)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Il2CppArray<::Entitas::IEntity*>*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION__CTOR_OFFSET))(this, context, entities);
		}
	};
}
