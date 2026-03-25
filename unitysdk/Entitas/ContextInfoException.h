#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

namespace Entitas { class ContextInfo; }
namespace Entitas { class IContext; }

#define ENTITAS_CONTEXTINFOEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A82780)

namespace Entitas
{
	inline static constexpr unsigned int ContextInfoException_TypeDefinitionIndex = 9681;

	class ContextInfoException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::Entitas::IContext* context, ::Entitas::ContextInfo* contextInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::ContextInfo*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTINFOEXCEPTION__CTOR_OFFSET))(this, context, contextInfo);
		}
	};
}
