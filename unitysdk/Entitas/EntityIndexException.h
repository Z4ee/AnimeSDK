#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_ENTITYINDEXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC360)

namespace Entitas
{
	inline static constexpr unsigned int EntityIndexException_TypeDefinitionIndex = 9683;

	class EntityIndexException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITYINDEXEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
