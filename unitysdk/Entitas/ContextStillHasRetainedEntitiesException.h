#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }

#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC90E0)

namespace Entitas
{
	inline static constexpr unsigned int ContextStillHasRetainedEntitiesException_TypeDefinitionIndex = 9935;

	class ContextStillHasRetainedEntitiesException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::Il2CppArray<::Entitas::IEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Il2CppArray<::Entitas::IEntity*>*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
