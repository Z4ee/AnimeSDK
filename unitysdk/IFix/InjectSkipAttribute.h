#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_INJECTSKIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0B150)

namespace IFix
{
	inline static constexpr unsigned int InjectSkipAttribute_TypeDefinitionIndex = 84197;

	class InjectSkipAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_INJECTSKIPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
