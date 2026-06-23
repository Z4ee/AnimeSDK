#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC280)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsObjectAttribute_TypeDefinitionIndex = 29308;

	class fsObjectAttribute : public ::System::Attribute
	{
	public:
		::System::Type* Converter; // 0x10
		::System::Type* Processor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
