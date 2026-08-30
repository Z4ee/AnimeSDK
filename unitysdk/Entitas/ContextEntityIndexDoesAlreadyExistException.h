#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IContext; }
namespace System { class String; }

#define ENTITAS_CONTEXTENTITYINDEXDOESALREADYEXISTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16531E60)

namespace Entitas
{
	inline static constexpr unsigned int ContextEntityIndexDoesAlreadyExistException_TypeDefinitionIndex = 9932;

	class ContextEntityIndexDoesAlreadyExistException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYINDEXDOESALREADYEXISTEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
