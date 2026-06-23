#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyCopyType_TypeDefinitionIndex = 31011;

	enum class StateTreePropertyCopyType : ::System::Byte
	{
		None = 0x0,
		CopyPlain = 0x1,
		CopyComplex = 0x2,
		CopyBool = 0x3,
		CopyStruct = 0x4,
		CopyObject = 0x5,
		CopyName = 0x6,
		CopyFixedArray = 0x7,
		StructReference = 0x8,
		PromoteBoolToByte = 0x9,
		PromoteBoolToInt32 = 0xA,
		PromoteBoolToUInt32 = 0xB,
		PromoteBoolToInt64 = 0xC,
		PromoteBoolToFloat = 0xD,
		PromoteBoolToDouble = 0xE,
		PromoteByteToInt32 = 0xF,
		PromoteByteToUInt32 = 0x10,
		PromoteByteToInt64 = 0x11,
		PromoteByteToFloat = 0x12,
		PromoteByteToDouble = 0x13,
		PromoteInt32ToInt64 = 0x14,
		PromoteInt32ToFloat = 0x15,
		PromoteInt32ToDouble = 0x16,
		PromoteUInt32ToInt64 = 0x17,
		PromoteUInt32ToFloat = 0x18,
		PromoteUInt32ToDouble = 0x19,
		PromoteFloatToInt32 = 0x1A,
		PromoteFloatToInt64 = 0x1B,
		PromoteFloatToDouble = 0x1C,
		DemoteDoubleToInt32 = 0x1D,
		DemoteDoubleToInt64 = 0x1E,
		DemoteDoubleToFloat = 0x1F,
	};
}
