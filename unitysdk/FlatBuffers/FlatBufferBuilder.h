#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Offset_1.h"
#include "unitysdk/FlatBuffers/StringOffset.h"
#include "unitysdk/FlatBuffers/VectorOffset.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_1_OFFSET UNITYSDK_OFFSET(0x1F627EF0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_2_OFFSET UNITYSDK_OFFSET(0x1F627F60)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET UNITYSDK_OFFSET(0x1F6277A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1F6280E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_2_OFFSET UNITYSDK_OFFSET(0x1F628150)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x1F627820)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1F6288E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_2_OFFSET UNITYSDK_OFFSET(0x1F628960)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F627A30)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1F6287D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_2_OFFSET UNITYSDK_OFFSET(0x1F628850)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x1F6279E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_1_OFFSET UNITYSDK_OFFSET(0x1F6283B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_2_OFFSET UNITYSDK_OFFSET(0x1F628420)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET UNITYSDK_OFFSET(0x1F6278E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_1_OFFSET UNITYSDK_OFFSET(0x1F628590)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_2_OFFSET UNITYSDK_OFFSET(0x1F628600)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET UNITYSDK_OFFSET(0x1F627960)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1F628A20)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F627A80)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_1_OFFSET UNITYSDK_OFFSET(0x1F627FF0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_2_OFFSET UNITYSDK_OFFSET(0x1F628060)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_OFFSET UNITYSDK_OFFSET(0x1F6277E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_1_OFFSET UNITYSDK_OFFSET(0x1F6281D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_2_OFFSET UNITYSDK_OFFSET(0x1F628240)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_OFFSET UNITYSDK_OFFSET(0x1F627860)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSTRUCT_OFFSET UNITYSDK_OFFSET(0x1F6293F0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_1_OFFSET UNITYSDK_OFFSET(0x1F6284A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_2_OFFSET UNITYSDK_OFFSET(0x1F628510)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET UNITYSDK_OFFSET(0x1F627920)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_1_OFFSET UNITYSDK_OFFSET(0x1F6286B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_2_OFFSET UNITYSDK_OFFSET(0x1F628720)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_OFFSET UNITYSDK_OFFSET(0x1F6279A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_1_OFFSET UNITYSDK_OFFSET(0x1F6282C0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_2_OFFSET UNITYSDK_OFFSET(0x1F628330)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_OFFSET UNITYSDK_OFFSET(0x1F6278A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F6272E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATESHAREDSTRING_OFFSET UNITYSDK_OFFSET(0x1F629240)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1F628A50)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATEUTF8STRING_OFFSET UNITYSDK_OFFSET(0x1F629090)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDTABLE_OFFSET UNITYSDK_OFFSET(0x1F629420)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1F627C30)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_1_OFFSET UNITYSDK_OFFSET(0x1F629E00)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_OFFSET UNITYSDK_OFFSET(0x1F629A90)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_1_OFFSET UNITYSDK_OFFSET(0x1F629A50)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_2_OFFSET UNITYSDK_OFFSET(0x1F629AF0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_3_OFFSET UNITYSDK_OFFSET(0x1F629DF0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x1F6299B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_DATABUFFER_OFFSET UNITYSDK_OFFSET(0x1F629AA0)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_FORCEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1F6273F0)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1F627410)
#define FLATBUFFERS_FLATBUFFERBUILDER_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x1F627470)
#define FLATBUFFERS_FLATBUFFERBUILDER_NESTED_OFFSET UNITYSDK_OFFSET(0x1F627C90)
#define FLATBUFFERS_FLATBUFFERBUILDER_NOTNESTED_OFFSET UNITYSDK_OFFSET(0x1F627BC0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PAD_OFFSET UNITYSDK_OFFSET(0x1F627440)
#define FLATBUFFERS_FLATBUFFERBUILDER_PREP_OFFSET UNITYSDK_OFFSET(0x1F6274B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTBOOL_OFFSET UNITYSDK_OFFSET(0x1F627590)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTBYTE_OFFSET UNITYSDK_OFFSET(0x1F6275F0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F627770)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTFLOAT_OFFSET UNITYSDK_OFFSET(0x1F627740)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTINT_OFFSET UNITYSDK_OFFSET(0x1F627680)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTLONG_OFFSET UNITYSDK_OFFSET(0x1F6276E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSBYTE_OFFSET UNITYSDK_OFFSET(0x1F6275C0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSHORT_OFFSET UNITYSDK_OFFSET(0x1F627620)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTUINT_OFFSET UNITYSDK_OFFSET(0x1F6276B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTULONG_OFFSET UNITYSDK_OFFSET(0x1F627710)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTUSHORT_OFFSET UNITYSDK_OFFSET(0x1F627650)
#define FLATBUFFERS_FLATBUFFERBUILDER_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1F6298D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_SET_FORCEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1F627400)
#define FLATBUFFERS_FLATBUFFERBUILDER_SIZEDBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F629AB0)
#define FLATBUFFERS_FLATBUFFERBUILDER_SLOT_OFFSET UNITYSDK_OFFSET(0x1F627E40)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTTABLE_OFFSET UNITYSDK_OFFSET(0x1F627D20)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1F627B20)
#define FLATBUFFERS_FLATBUFFERBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F627240)
#define FLATBUFFERS_FLATBUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F627030)

namespace FlatBuffers
{
	inline static constexpr unsigned int FlatBufferBuilder_TypeDefinitionIndex = 6730;

	class FlatBufferBuilder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _vtables; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlatBuffers::VectorOffset>* _sharedListsMap; // 0x18
		::FlatBuffers::ByteBuffer* _bb; // 0x20
		::Il2CppArray<::System::Int32>* _vtable; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlatBuffers::StringOffset>* _sharedStringMap; // 0x30
		::System::Int32 _vtableSize; // 0x38
		::System::Int32 _objectStart; // 0x3C
		::System::Int32 _numVtables; // 0x40
		::System::Int32 _minAlign; // 0x44
		::System::Int32 _vectorNumElems; // 0x48
		::System::Boolean _ForceDefaults_k__BackingField; // 0x4C
		::System::Int32 _space; // 0x50

		::System::Void _ctor(::System::Int32 initialSize, ::System::Boolean isMonoString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER__CTOR_OFFSET))(this, initialSize, isMonoString);
		}

		::System::Void _ctor_1(::FlatBuffers::ByteBuffer* buffer, ::System::Boolean isMonoString)
		{
			return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER__CTOR_1_OFFSET))(this, buffer, isMonoString);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_ForceDefaults()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GET_FORCEDEFAULTS_OFFSET))(this);
		}

		::System::Void set_ForceDefaults(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_SET_FORCEDEFAULTS_OFFSET))(this, value);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GET_OFFSET_OFFSET))(this);
		}

		::System::Void Pad(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PAD_OFFSET))(this, size);
		}

		::System::Void GrowBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GROWBUFFER_OFFSET))(this);
		}

		::System::Void Prep(::System::Int32 size, ::System::Int32 additionalBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PREP_OFFSET))(this, size, additionalBytes);
		}

		::System::Void PutBool(::System::Boolean x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTBOOL_OFFSET))(this, x);
		}

		::System::Void PutSbyte(::System::SByte x)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTSBYTE_OFFSET))(this, x);
		}

		::System::Void PutByte(::System::Byte x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTBYTE_OFFSET))(this, x);
		}

		::System::Void PutShort(::System::Int16 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTSHORT_OFFSET))(this, x);
		}

		::System::Void PutUshort(::System::UInt16 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTUSHORT_OFFSET))(this, x);
		}

		::System::Void PutInt(::System::Int32 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTINT_OFFSET))(this, x);
		}

		::System::Void PutUint(::System::UInt32 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTUINT_OFFSET))(this, x);
		}

		::System::Void PutLong(::System::Int64 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTLONG_OFFSET))(this, x);
		}

		::System::Void PutUlong(::System::UInt64 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTULONG_OFFSET))(this, x);
		}

		::System::Void PutFloat(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTFLOAT_OFFSET))(this, x);
		}

		::System::Void PutDouble(::System::Double x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTDOUBLE_OFFSET))(this, x);
		}

		::System::Void AddBool(::System::Boolean x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET))(this, x);
		}

		::System::Void AddSbyte(::System::SByte x)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_OFFSET))(this, x);
		}

		::System::Void AddByte(::System::Byte x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_OFFSET))(this, x);
		}

		::System::Void AddShort(::System::Int16 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_OFFSET))(this, x);
		}

		::System::Void AddUshort(::System::UInt16 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_OFFSET))(this, x);
		}

		::System::Void AddInt(::System::Int32 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET))(this, x);
		}

		::System::Void AddUint(::System::UInt32 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET))(this, x);
		}

		::System::Void AddLong(::System::Int64 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET))(this, x);
		}

		::System::Void AddUlong(::System::UInt64 x)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_OFFSET))(this, x);
		}

		::System::Void AddFloat(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET))(this, x);
		}

		::System::Void AddDouble(::System::Double x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_OFFSET))(this, x);
		}

		::System::Void AddOffset(::System::Int32 off)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET))(this, off);
		}

		::System::Void StartVector(::System::Int32 elemSize, ::System::Int32 count, ::System::Int32 alignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_STARTVECTOR_OFFSET))(this, elemSize, count, alignment);
		}

		::FlatBuffers::VectorOffset EndVector()
		{
			return ((::FlatBuffers::VectorOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ENDVECTOR_OFFSET))(this);
		}

		::System::Void Nested(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_NESTED_OFFSET))(this, obj);
		}

		::System::Void NotNested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_NOTNESTED_OFFSET))(this);
		}

		::System::Void StartTable(::System::Int32 numfields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_STARTTABLE_OFFSET))(this, numfields);
		}

		::System::Void Slot(::System::Int32 voffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_SLOT_OFFSET))(this, voffset);
		}

		::System::Void AddBool_1(::System::Int32 o, ::System::Boolean x, ::System::Boolean d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddBool_2(::System::Int32 o, ::System::Nullable_1<::System::Boolean> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_2_OFFSET))(this, o, x);
		}

		::System::Void AddSbyte_1(::System::Int32 o, ::System::SByte x, ::System::SByte d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::SByte, ::System::SByte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddSbyte_2(::System::Int32 o, ::System::Nullable_1<::System::SByte> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::SByte>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_2_OFFSET))(this, o, x);
		}

		::System::Void AddByte_1(::System::Int32 o, ::System::Byte x, ::System::Byte d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddByte_2(::System::Int32 o, ::System::Nullable_1<::System::Byte> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_2_OFFSET))(this, o, x);
		}

		::System::Void AddShort_1(::System::Int32 o, ::System::Int16 x, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddShort_2(::System::Int32 o, ::System::Nullable_1<::System::Int16> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int16>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_2_OFFSET))(this, o, x);
		}

		::System::Void AddUshort_1(::System::Int32 o, ::System::UInt16 x, ::System::UInt16 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddUshort_2(::System::Int32 o, ::System::Nullable_1<::System::UInt16> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::UInt16>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_2_OFFSET))(this, o, x);
		}

		::System::Void AddInt_1(::System::Int32 o, ::System::Int32 x, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddInt_2(::System::Int32 o, ::System::Nullable_1<::System::Int32> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_2_OFFSET))(this, o, x);
		}

		::System::Void AddUint_1(::System::Int32 o, ::System::UInt32 x, ::System::UInt32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddUint_2(::System::Int32 o, ::System::Nullable_1<::System::UInt32> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_2_OFFSET))(this, o, x);
		}

		::System::Void AddLong_1(::System::Int32 o, ::System::Int64 x, ::System::Int64 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddLong_2(::System::Int32 o, ::System::Nullable_1<::System::Int64> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_2_OFFSET))(this, o, x);
		}

		::System::Void AddUlong_1(::System::Int32 o, ::System::UInt64 x, ::System::UInt64 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddUlong_2(::System::Int32 o, ::System::Nullable_1<::System::UInt64> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_2_OFFSET))(this, o, x);
		}

		::System::Void AddFloat_1(::System::Int32 o, ::System::Single x, ::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddFloat_2(::System::Int32 o, ::System::Nullable_1<::System::Single> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_2_OFFSET))(this, o, x);
		}

		::System::Void AddDouble_1(::System::Int32 o, ::System::Double x, ::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_1_OFFSET))(this, o, x, d);
		}

		::System::Void AddDouble_2(::System::Int32 o, ::System::Nullable_1<::System::Double> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_2_OFFSET))(this, o, x);
		}

		::System::Void AddOffset_1(::System::Int32 o, ::System::Int32 x, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_1_OFFSET))(this, o, x, d);
		}

		::FlatBuffers::StringOffset CreateString(::System::String* s)
		{
			return ((::FlatBuffers::StringOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_CREATESTRING_OFFSET))(this, s);
		}

		::FlatBuffers::StringOffset CreateUTF8String(::System::Span_1<::System::Byte> chars)
		{
			return ((::FlatBuffers::StringOffset(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_CREATEUTF8STRING_OFFSET))(this, chars);
		}

		::FlatBuffers::StringOffset CreateSharedString(::System::String* s)
		{
			return ((::FlatBuffers::StringOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_CREATESHAREDSTRING_OFFSET))(this, s);
		}

		::System::Void AddStruct(::System::Int32 voffset, ::System::Int32 x, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSTRUCT_OFFSET))(this, voffset, x, d);
		}

		::System::Int32 EndTable()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ENDTABLE_OFFSET))(this);
		}

		::System::Void Required(::System::Int32 table, ::System::Int32 field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_REQUIRED_OFFSET))(this, table, field);
		}

		::System::Void Finish(::System::Int32 rootTable, ::System::Boolean sizePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET))(this, rootTable, sizePrefix);
		}

		::System::Void Finish_1(::System::Int32 rootTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_1_OFFSET))(this, rootTable);
		}

		::System::Void FinishSizePrefixed(::System::Int32 rootTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_OFFSET))(this, rootTable);
		}

		::FlatBuffers::ByteBuffer* get_DataBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GET_DATABUFFER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* SizedByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_SIZEDBYTEARRAY_OFFSET))(this);
		}

		::System::Void Finish_2(::System::Int32 rootTable, ::System::String* fileIdentifier, ::System::Boolean sizePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_2_OFFSET))(this, rootTable, fileIdentifier, sizePrefix);
		}

		::System::Void Finish_3(::System::Int32 rootTable, ::System::String* fileIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_3_OFFSET))(this, rootTable, fileIdentifier);
		}

		::System::Void FinishSizePrefixed_1(::System::Int32 rootTable, ::System::String* fileIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_1_OFFSET))(this, rootTable, fileIdentifier);
		}
	};
}
