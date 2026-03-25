#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class BitArray; }

#define SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x161C4E90)
#define SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x161C4FE0)
#define SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x161C4F30)
#define SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_RESET_OFFSET UNITYSDK_OFFSET(0x161C50B0)
#define SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x161C4E60)

namespace System::Collections
{
	inline static constexpr unsigned int BitArray_BitArrayEnumeratorSimple_TypeDefinitionIndex = 1453;

	class BitArray_BitArrayEnumeratorSimple : public ::System::Object
	{
	public:
		::System::Collections::BitArray* bitarray; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 version; // 0x1C
		::System::Boolean currentElement; // 0x20

		::System::Void _ctor(::System::Collections::BitArray* bitarray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE__CTOR_OFFSET))(this, bitarray);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_BITARRAYENUMERATORSIMPLE_RESET_OFFSET))(this);
		}
	};
}
