#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/BitWidth.h"
#include "unitysdk/FlexBuffers/FlexBuffer_Options.h"
#include "unitysdk/FlexBuffers/StackValue.h"
#include "unitysdk/FlexBuffers/Type.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLEXBUFFERS_FLEXBUFFER_ADDDYNAMICMAP_OFFSET UNITYSDK_OFFSET(0x1B20E0F0)
#define FLEXBUFFERS_FLEXBUFFER_ADDDYNAMICVECTOR_OFFSET UNITYSDK_OFFSET(0x1B20E7F0)
#define FLEXBUFFERS_FLEXBUFFER_ADDDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1B20F890)
#define FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1B20F430)
#define FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x1B20F610)
#define FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B20F210)
#define FLEXBUFFERS_FLEXBUFFER_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B20FC20)
#define FLEXBUFFERS_FLEXBUFFER_ADDNULL_OFFSET UNITYSDK_OFFSET(0x1B20C830)
#define FLEXBUFFERS_FLEXBUFFER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1B20CAC0)
#define FLEXBUFFERS_FLEXBUFFER_ADD_2_OFFSET UNITYSDK_OFFSET(0x1B20CC00)
#define FLEXBUFFERS_FLEXBUFFER_ADD_3_OFFSET UNITYSDK_OFFSET(0x1B20CD00)
#define FLEXBUFFERS_FLEXBUFFER_ADD_4_OFFSET UNITYSDK_OFFSET(0x1B20C210)
#define FLEXBUFFERS_FLEXBUFFER_ADD_5_OFFSET UNITYSDK_OFFSET(0x1B20DEF0)
#define FLEXBUFFERS_FLEXBUFFER_ADD_OFFSET UNITYSDK_OFFSET(0x1B20C950)
#define FLEXBUFFERS_FLEXBUFFER_ALIGN_OFFSET UNITYSDK_OFFSET(0x1B20EE50)
#define FLEXBUFFERS_FLEXBUFFER_CREATEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B210820)
#define FLEXBUFFERS_FLEXBUFFER_ENDMAP_OFFSET UNITYSDK_OFFSET(0x1B210270)
#define FLEXBUFFERS_FLEXBUFFER_ENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B20C630)
#define FLEXBUFFERS_FLEXBUFFER_FINISHBUFFER_OFFSET UNITYSDK_OFFSET(0x1B20EB90)
#define FLEXBUFFERS_FLEXBUFFER_FINISH_OFFSET UNITYSDK_OFFSET(0x1B20C700)
#define FLEXBUFFERS_FLEXBUFFER_FROM_OFFSET UNITYSDK_OFFSET(0x1B20E050)
#define FLEXBUFFERS_FLEXBUFFER_NEWOFFSET_OFFSET UNITYSDK_OFFSET(0x1B20F7D0)
#define FLEXBUFFERS_FLEXBUFFER_NULL_OFFSET UNITYSDK_OFFSET(0x1B20C7B0)
#define FLEXBUFFERS_FLEXBUFFER_PARTITION_OFFSET UNITYSDK_OFFSET(0x1B210630)
#define FLEXBUFFERS_FLEXBUFFER_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1B210220)
#define FLEXBUFFERS_FLEXBUFFER_SHOULDFLIP_OFFSET UNITYSDK_OFFSET(0x1B2100D0)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1B20D720)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1B20D960)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1B20DAA0)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1B20DC50)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1B20DE70)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1B20C9E0)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1B20CB40)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1B20CC60)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1B20CD50)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1B20CDD0)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1B20CF50)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1B20D160)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1B20D3F0)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1B20D550)
#define FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_OFFSET UNITYSDK_OFFSET(0x1B20C860)
#define FLEXBUFFERS_FLEXBUFFER_SORTANDENDMAP_OFFSET UNITYSDK_OFFSET(0x1B20FF70)
#define FLEXBUFFERS_FLEXBUFFER_STARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B20C1F0)
#define FLEXBUFFERS_FLEXBUFFER_SWAP_OFFSET UNITYSDK_OFFSET(0x1B210760)
#define FLEXBUFFERS_FLEXBUFFER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1B20F110)
#define FLEXBUFFERS_FLEXBUFFER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1B20F340)
#define FLEXBUFFERS_FLEXBUFFER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1B20F550)
#define FLEXBUFFERS_FLEXBUFFER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1B20F720)
#define FLEXBUFFERS_FLEXBUFFER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B20EE80)
#define FLEXBUFFERS_FLEXBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B20BFC0)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBuffer_TypeDefinitionIndex = 8753;

	class FlexBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _bytes; // 0x10
		::System::Collections::Generic::Dictionary_2<::Il2CppArray<::System::Int64>*, ::FlexBuffers::StackValue>* _keyVectorCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* _stringCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* _keyCache; // 0x28
		::System::Collections::Generic::List_1<::FlexBuffers::StackValue>* _stack; // 0x30
		::System::UInt64 _offset; // 0x38
		::System::UInt64 _size; // 0x40
		::FlexBuffers::FlexBuffer_Options _options; // 0x48
		::System::Boolean _finished; // 0x49

		::System::Void _ctor(::System::UInt64 size, ::FlexBuffers::FlexBuffer_Options options)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::FlexBuffers::FlexBuffer_Options))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER__CTOR_OFFSET))(this, size, options);
		}

		static ::Il2CppArray<::System::Byte>* Null()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_NULL_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* SingleValue(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_1(::System::UInt64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_1_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_2(::System::Double value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_2_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_3(::System::Boolean value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_3_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_4(::System::String* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_4_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_5(::System::Int64 x, ::System::Int64 y)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_5_OFFSET))(x, y);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_6(::System::Int64 x, ::System::Int64 y, ::System::Int64 z)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_6_OFFSET))(x, y, z);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_7(::System::Int64 x, ::System::Int64 y, ::System::Int64 z, ::System::Int64 w)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_7_OFFSET))(x, y, z, w);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_8(::System::UInt64 x, ::System::UInt64 y)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_8_OFFSET))(x, y);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_9(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_9_OFFSET))(x, y, z);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_10(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 w)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_10_OFFSET))(x, y, z, w);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_11(::System::Double x, ::System::Double y)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_11_OFFSET))(x, y);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_12(::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_12_OFFSET))(x, y, z);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_13(::System::Double x, ::System::Double y, ::System::Double z, ::System::Double w)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_13_OFFSET))(x, y, z, w);
		}

		static ::Il2CppArray<::System::Byte>* SingleValue_14(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SINGLEVALUE_14_OFFSET))(blob);
		}

		static ::Il2CppArray<::System::Byte>* From(::System::Collections::IEnumerable* value, ::FlexBuffers::FlexBuffer_Options options)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Collections::IEnumerable*, ::FlexBuffers::FlexBuffer_Options))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_FROM_OFFSET))(value, options);
		}

		::Il2CppArray<::System::Byte>* Finish()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_FINISH_OFFSET))(this);
		}

		::System::Void FinishBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_FINISHBUFFER_OFFSET))(this);
		}

		::FlexBuffers::Type AddNull()
		{
			return ((::FlexBuffers::Type(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDNULL_OFFSET))(this);
		}

		::FlexBuffers::Type Add(::System::Int64 value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_OFFSET))(this, value);
		}

		::FlexBuffers::Type AddIndirect(::System::Int64 value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_OFFSET))(this, value);
		}

		::FlexBuffers::Type Add_1(::System::UInt64 value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_1_OFFSET))(this, value);
		}

		::FlexBuffers::Type AddIndirect_1(::System::UInt64 value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_1_OFFSET))(this, value);
		}

		::FlexBuffers::Type Add_2(::System::Double value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_2_OFFSET))(this, value);
		}

		::FlexBuffers::Type AddIndirect_2(::System::Double value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDINDIRECT_2_OFFSET))(this, value);
		}

		::FlexBuffers::Type Add_3(::System::Boolean value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_3_OFFSET))(this, value);
		}

		::FlexBuffers::Type Add_4(::System::String* value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_4_OFFSET))(this, value);
		}

		::FlexBuffers::Type Add_5(::Il2CppArray<::System::Byte>* value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADD_5_OFFSET))(this, value);
		}

		::System::Void AddDynamicVector(::System::Collections::IEnumerable* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDDYNAMICVECTOR_OFFSET))(this, values);
		}

		::System::Void AddDynamicMap(::System::Collections::IDictionary* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDDYNAMICMAP_OFFSET))(this, values);
		}

		::System::Void SortAndEndMap(::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SORTANDENDMAP_OFFSET))(this, start);
		}

		::System::Void QuickSort(::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_QUICKSORT_OFFSET))(this, left, right);
		}

		::System::Int32 Partition(::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_PARTITION_OFFSET))(this, left, right);
		}

		::System::Void Swap(::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SWAP_OFFSET))(this, i, j);
		}

		::System::Void EndMap(::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ENDMAP_OFFSET))(this, start);
		}

		::System::Boolean ShouldFlip(::FlexBuffers::StackValue v1, ::FlexBuffers::StackValue v2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::StackValue, ::FlexBuffers::StackValue))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_SHOULDFLIP_OFFSET))(this, v1, v2);
		}

		::FlexBuffers::Type AddDynamic(::System::Object* value)
		{
			return ((::FlexBuffers::Type(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDDYNAMIC_OFFSET))(this, value);
		}

		::System::Void AddKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ADDKEY_OFFSET))(this, value);
		}

		::System::Byte Align(::FlexBuffers::BitWidth width)
		{
			return ((::System::Byte(*)(::PVOID, ::FlexBuffers::BitWidth))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ALIGN_OFFSET))(this, width);
		}

		::System::Void Write(::FlexBuffers::StackValue value, ::System::UInt64 width)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::StackValue, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_WRITE_OFFSET))(this, value, width);
		}

		::System::Void Write_1(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void Write_2(::System::Int64 value, ::System::UInt64 width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_WRITE_2_OFFSET))(this, value, width);
		}

		::System::Void Write_3(::System::UInt64 value, ::System::UInt64 width)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_WRITE_3_OFFSET))(this, value, width);
		}

		::System::Void Write_4(::System::Double value, ::System::UInt64 width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_WRITE_4_OFFSET))(this, value, width);
		}

		::System::UInt64 NewOffset(::System::UInt64 width)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_NEWOFFSET_OFFSET))(this, width);
		}

		::System::Int32 StartVector()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_STARTVECTOR_OFFSET))(this);
		}

		::System::Int32 EndVector(::System::Int32 start, ::System::Boolean typed, ::System::Boolean fix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_ENDVECTOR_OFFSET))(this, start, typed, fix);
		}

		::FlexBuffers::StackValue CreateVector(::System::Int32 start, ::System::Int32 vecLen, ::System::Int32 step, ::System::Boolean typed, ::System::Boolean fix, ::System::Nullable_1<::FlexBuffers::StackValue> keys)
		{
			return ((::FlexBuffers::StackValue(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::FlexBuffers::StackValue>))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFER_CREATEVECTOR_OFFSET))(this, start, vecLen, step, typed, fix, keys);
		}
	};
}
