#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int EntryType_TypeDefinitionIndex = 7508;

	enum class EntryType : ::System::Byte
	{
		Invalid = 0x0,
		String = 0x1,
		Guid = 0x2,
		Integer = 0x3,
		FloatingPoint = 0x4,
		Boolean = 0x5,
		Null = 0x6,
		StartOfNode = 0x7,
		EndOfNode = 0x8,
		InternalReference = 0x9,
		ExternalReferenceByIndex = 0xA,
		ExternalReferenceByGuid = 0xB,
		StartOfArray = 0xC,
		EndOfArray = 0xD,
		PrimitiveArray = 0xE,
		EndOfStream = 0xF,
		ExternalReferenceByString = 0x10,
	};
}
