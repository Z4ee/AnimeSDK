#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYALREADYHASCOMPONENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53130)

namespace Entitas
{
	inline static constexpr unsigned int EntityAlreadyHasComponentException_TypeDefinitionIndex = 9828;

	class EntityAlreadyHasComponentException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 index, ::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYALREADYHASCOMPONENTEXCEPTION__CTOR_OFFSET))(this, index, message, hint);
		}
	};
}
