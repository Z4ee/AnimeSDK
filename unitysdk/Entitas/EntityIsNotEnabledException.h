#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYISNOTENABLEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53030)

namespace Entitas
{
	inline static constexpr unsigned int EntityIsNotEnabledException_TypeDefinitionIndex = 9831;

	class EntityIsNotEnabledException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYISNOTENABLEDEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
