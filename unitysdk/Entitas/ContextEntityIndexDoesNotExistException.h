#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class IContext; }
namespace System { class String; }

#define ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50D80)

namespace Entitas
{
	inline static constexpr unsigned int ContextEntityIndexDoesNotExistException_TypeDefinitionIndex = 9813;

	class ContextEntityIndexDoesNotExistException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* context, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYINDEXDOESNOTEXISTEXCEPTION__CTOR_OFFSET))(this, context, name);
		}
	};
}
