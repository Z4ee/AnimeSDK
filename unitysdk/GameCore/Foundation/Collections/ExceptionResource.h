#pragma once
#include "unitysdk/unitysdk.h"

namespace GameCore::Foundation::Collections
{
	inline static constexpr unsigned int ExceptionResource_TypeDefinitionIndex = 6714;

	enum class ExceptionResource : ::System::Int32
	{
		Argument_ImplementIComparable = 0,
		ArgumentOutOfRange_NeedNonNegNum = 1,
		ArgumentOutOfRange_NeedNonNegNumRequired = 2,
		Arg_ArrayPlusOffTooSmall = 3,
		Argument_AddingDuplicate = 4,
		Serialization_InvalidOnDeser = 5,
		Serialization_MismatchedCount = 6,
		Serialization_MissingValues = 7,
		Arg_RankMultiDimNotSupported = 8,
		Arg_NonZeroLowerBound = 9,
		Argument_InvalidArrayType = 10,
		NotSupported_KeyCollectionSet = 11,
		ArgumentOutOfRange_SmallCapacity = 12,
		ArgumentOutOfRange_Index = 13,
		Argument_InvalidOffLen = 14,
		NotSupported_ReadOnlyCollection = 15,
		InvalidOperation_CannotRemoveFromStackOrQueue = 16,
		InvalidOperation_EmptyCollection = 17,
		InvalidOperation_EmptyQueue = 18,
		InvalidOperation_EnumOpCantHappen = 19,
		InvalidOperation_EnumFailedVersion = 20,
		InvalidOperation_EmptyStack = 21,
		InvalidOperation_EnumNotStarted = 22,
		InvalidOperation_EnumEnded = 23,
		NotSupported_SortedListNestedWrite = 24,
		NotSupported_ValueCollectionSet = 25,
		Serialization_MissingKeys = 26,
		Serialization_NullKey = 27,
	};
}
