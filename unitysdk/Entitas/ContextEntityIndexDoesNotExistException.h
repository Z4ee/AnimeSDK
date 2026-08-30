#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IContext; }
namespace System { class String; }

#define ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC8A20)

namespace Entitas
{
	inline static constexpr unsigned int ContextEntityIndexDoesNotExistException_TypeDefinitionIndex = 9933;

	class ContextEntityIndexDoesNotExistException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
