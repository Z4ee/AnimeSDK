#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYDOESNOTHAVECOMPONENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CAB40)

namespace Entitas
{
	inline static constexpr unsigned int EntityDoesNotHaveComponentException_TypeDefinitionIndex = 9670;

	class EntityDoesNotHaveComponentException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYDOESNOTHAVECOMPONENTEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
