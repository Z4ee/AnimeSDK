#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace System { class String; }

#define ENTITAS_CONTEXTDOESNOTCONTAINENTITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C8240)

namespace Entitas
{
	inline static constexpr unsigned int ContextDoesNotContainEntityException_TypeDefinitionIndex = 9652;

	class ContextDoesNotContainEntityException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTDOESNOTCONTAINENTITYEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
