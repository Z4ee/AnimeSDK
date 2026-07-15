#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IEntity; }
namespace System { class Object; }

#define ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC3E0)

namespace Entitas
{
	inline static constexpr unsigned int EntityIsAlreadyRetainedByOwnerException_TypeDefinitionIndex = 9671;

	class EntityIsAlreadyRetainedByOwnerException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IEntity* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISALREADYRETAINEDBYOWNEREXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
