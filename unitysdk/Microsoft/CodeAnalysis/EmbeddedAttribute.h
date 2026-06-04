#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA84B5C0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_TypeDefinitionIndex = 44409;

	class EmbeddedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
