#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsBaseConverter.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8D90)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDirectConverter_TypeDefinitionIndex = 29913;

	class fsDirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDIRECTCONVERTER__CTOR_OFFSET))(this);
		}
	};
}
