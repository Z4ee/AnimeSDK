#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IEntity; }
namespace System { class Object; }

#define ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A86B30)

namespace Entitas
{
	inline static constexpr unsigned int EntityIsAlreadyRetainedByOwnerException_TypeDefinitionIndex = 9697;

	class EntityIsAlreadyRetainedByOwnerException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IEntity* entity, ::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET))(this, entity, owner);
		}
	};
}
