#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 8773;

	enum class Type : ::System::Byte
	{
		Null = 0x0,
		Int = 0x1,
		Uint = 0x2,
		Float = 0x3,
		Key = 0x4,
		String = 0x5,
		IndirectInt = 0x6,
		IndirectUInt = 0x7,
		IndirectFloat = 0x8,
		Map = 0x9,
		Vector = 0xA,
		VectorInt = 0xB,
		VectorUInt = 0xC,
		VectorFloat = 0xD,
		VectorKey = 0xE,
		VectorString = 0xF,
		VectorInt2 = 0x10,
		VectorUInt2 = 0x11,
		VectorFloat2 = 0x12,
		VectorInt3 = 0x13,
		VectorUInt3 = 0x14,
		VectorFloat3 = 0x15,
		VectorInt4 = 0x16,
		VectorUInt4 = 0x17,
		VectorFloat4 = 0x18,
		Blob = 0x19,
		Bool = 0x1A,
		VectorBool = 0x24,
	};
}
