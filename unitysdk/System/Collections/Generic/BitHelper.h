#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x19EB6AA0)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x19EB6A30)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x19EB6B20)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EB6A20)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB6A10)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 3681;

	class BitHelper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _array; // 0x10
		::System::Int32 _length; // 0x18
		::System::Boolean _useStackAlloc; // 0x1C
		::System::Int32* _arrayPtr; // 0x20

		::System::Void _ctor(::System::Int32* bitArrayPtr, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_OFFSET))(this, bitArrayPtr, length);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Int32>* bitArray, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_1_OFFSET))(this, bitArray, length);
		}

		::System::Void MarkBit(::System::Int32 bitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET))(this, bitPosition);
		}

		::System::Boolean IsMarked(::System::Int32 bitPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET))(this, bitPosition);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET))(n);
		}
	};
}
