#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_DATASTRUCTURES_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1C5C2790)
#define FOUNDATION_DATASTRUCTURES_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x1C5C26E0)
#define FOUNDATION_DATASTRUCTURES_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5C2840)
#define FOUNDATION_DATASTRUCTURES_BITHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5C26D0)
#define FOUNDATION_DATASTRUCTURES_BITHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C26C0)

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 8275;

	class BitHelper : public ::System::Object
	{
	public:
		// static const ::System::Byte MarkedBitFlag = 0x1; // 0x0
		// static const ::System::Byte IntSize = 0x20; // 0x0
		::Il2CppArray<::System::Int32>* m_array; // 0x10
		::System::Boolean useStackAlloc; // 0x18
		::System::Int32 m_length; // 0x1C
		::System::Int32* m_arrayPtr; // 0x20

		::System::Void _ctor(::System::Int32* bitArrayPtr, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_BITHELPER__CTOR_OFFSET))(this, bitArrayPtr, length);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Int32>* bitArray, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_BITHELPER__CTOR_1_OFFSET))(this, bitArray, length);
		}

		::System::Void MarkBit(::System::Int32 bitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_BITHELPER_MARKBIT_OFFSET))(this, bitPosition);
		}

		::System::Boolean IsMarked(::System::Int32 bitPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_BITHELPER_ISMARKED_OFFSET))(this, bitPosition);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_BITHELPER_TOINTARRAYLENGTH_OFFSET))(n);
		}
	};
}
