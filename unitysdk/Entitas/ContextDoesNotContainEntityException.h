#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_CONTEXTDOESNOTCONTAINENTITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50510)

namespace Entitas
{
	inline static constexpr unsigned int ContextDoesNotContainEntityException_TypeDefinitionIndex = 9811;

	class ContextDoesNotContainEntityException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTDOESNOTCONTAINENTITYEXCEPTION__CTOR_OFFSET))(this, message, hint);
		}
	};
}
