#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYALREADYHASCOMPONENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECABD0)

namespace Entitas
{
	inline static constexpr unsigned int EntityAlreadyHasComponentException_TypeDefinitionIndex = 9948;

	class EntityAlreadyHasComponentException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYALREADYHASCOMPONENTEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
