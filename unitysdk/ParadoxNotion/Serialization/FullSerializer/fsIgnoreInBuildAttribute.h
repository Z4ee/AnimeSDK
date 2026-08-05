#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSIGNOREINBUILDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF958C0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsIgnoreInBuildAttribute_TypeDefinitionIndex = 29854;

	class fsIgnoreInBuildAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSIGNOREINBUILDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
