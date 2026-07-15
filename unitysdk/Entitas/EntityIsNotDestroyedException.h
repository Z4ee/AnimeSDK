#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYISNOTDESTROYEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC650)

namespace Entitas
{
	inline static constexpr unsigned int EntityIsNotDestroyedException_TypeDefinitionIndex = 9658;

	class EntityIsNotDestroyedException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISNOTDESTROYEDEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
