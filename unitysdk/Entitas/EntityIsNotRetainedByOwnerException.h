#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IEntity; }
namespace System { class Object; }

#define ENTITAS_ENTITYISNOTRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C55C60)

namespace Entitas
{
	inline static constexpr unsigned int EntityIsNotRetainedByOwnerException_TypeDefinitionIndex = 9832;

	class EntityIsNotRetainedByOwnerException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IEntity* entity, ::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISNOTRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET))(this, entity, owner);
		}
	};
}
