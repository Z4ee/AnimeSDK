#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDESERIALIZEOVERWRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA520)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDeserializeOverwrite_TypeDefinitionIndex = 29549;

	class fsDeserializeOverwrite : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDESERIALIZEOVERWRITE__CTOR_OFFSET))(this);
		}
	};
}
