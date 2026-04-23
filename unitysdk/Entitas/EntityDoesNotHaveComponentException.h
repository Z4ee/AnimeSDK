#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYDOESNOTHAVECOMPONENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C539D0)

namespace Entitas
{
	inline static constexpr unsigned int EntityDoesNotHaveComponentException_TypeDefinitionIndex = 9829;

	class EntityDoesNotHaveComponentException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 index, ::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYDOESNOTHAVECOMPONENTEXCEPTION__CTOR_OFFSET))(this, index, message, hint);
		}
	};
}
