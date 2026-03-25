#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define ENTITAS_ENTITASEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11A816D0)

namespace Entitas
{
	inline static constexpr unsigned int EntitasException_TypeDefinitionIndex = 9691;

	class EntitasException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::String* hint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASEXCEPTION__CTOR_OFFSET))(this, message, hint);
		}
	};
}
