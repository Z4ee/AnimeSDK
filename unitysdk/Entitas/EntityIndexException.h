#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYINDEXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A86AB0)

namespace Entitas
{
	inline static constexpr unsigned int EntityIndexException_TypeDefinitionIndex = 9709;

	class EntityIndexException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYINDEXEXCEPTION__CTOR_OFFSET))(this, message, hint);
		}
	};
}
