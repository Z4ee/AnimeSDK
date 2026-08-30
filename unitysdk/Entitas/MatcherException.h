#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ENTITAS_MATCHEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECCDD0)

namespace Entitas
{
	inline static constexpr unsigned int MatcherException_TypeDefinitionIndex = 9986;

	class MatcherException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_MATCHEREXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
