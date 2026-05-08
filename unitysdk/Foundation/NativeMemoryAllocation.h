#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVEMEMORYALLOCATION_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9C75E0)
#define FOUNDATION_NATIVEMEMORYALLOCATION_MAKEVIEW_OFFSET UNITYSDK_OFFSET(0x9C7600)
#define FOUNDATION_NATIVEMEMORYALLOCATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C213FE0)
#define FOUNDATION_NATIVEMEMORYALLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x99AB90)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryAllocation_TypeDefinitionIndex = 9097;

	struct alignas(8) NativeMemoryAllocation
	{
		static ::Foundation::NativeMemoryAllocation* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryAllocation*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryAllocation_TypeDefinitionIndex)->GetStaticField(0x3EA0);
		}
		::System::UInt64 RequestId; // 0x10
		::System::Int64 _typeHash; // 0x18
		::System::Int32 _number; // 0x20
		::System::Int32 _offset; // 0x24

		::System::Void _ctor(::System::UInt64 requestId, ::System::Int64 typeHash, ::System::Int32 number, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYALLOCATION__CTOR_OFFSET))(this, requestId, typeHash, number, offset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYALLOCATION__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYALLOCATION_GET_ISNULL_OFFSET))(this);
		}

		/*
		::Foundation::NativeMemoryView_1<::System::Byte> MakeView(::Unity::Collections::NativeArray_1<::System::Byte> storage, ::System::Int32 startOffset)
		{
			return ((::Foundation::NativeMemoryView_1<::System::Byte>(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYALLOCATION_MAKEVIEW_OFFSET))(this, storage, startOffset);
		}
		*/
	};
}
