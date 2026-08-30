#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB762D0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int AllocationException_TypeDefinitionIndex = 44908;

	class AllocationException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ALLOCATIONEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
