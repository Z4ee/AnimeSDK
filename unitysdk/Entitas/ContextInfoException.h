#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class ContextInfo; }
namespace Entitas { class IContext; }

#define ENTITAS_CONTEXTINFOEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C8970)

namespace Entitas
{
	inline static constexpr unsigned int ContextInfoException_TypeDefinitionIndex = 9655;

	class ContextInfoException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* a1, ::Entitas::ContextInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::ContextInfo*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTINFOEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
