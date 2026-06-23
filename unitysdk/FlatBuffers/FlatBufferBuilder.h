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

#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_1_OFFSET UNITYSDK_OFFSET(0x1E213AE0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_2_OFFSET UNITYSDK_OFFSET(0x1E213B50)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET UNITYSDK_OFFSET(0x1E213390)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1E213CD0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_2_OFFSET UNITYSDK_OFFSET(0x1E213D40)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x1E213410)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1E2144D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_2_OFFSET UNITYSDK_OFFSET(0x1E214550)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E213620)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1E2143C0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_2_OFFSET UNITYSDK_OFFSET(0x1E214440)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x1E2135D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_1_OFFSET UNITYSDK_OFFSET(0x1E213FA0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_2_OFFSET UNITYSDK_OFFSET(0x1E214010)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET UNITYSDK_OFFSET(0x1E2134D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_1_OFFSET UNITYSDK_OFFSET(0x1E214180)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_2_OFFSET UNITYSDK_OFFSET(0x1E2141F0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET UNITYSDK_OFFSET(0x1E213550)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1E214610)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET UNITYSDK_OFFSET(0x1E213670)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_1_OFFSET UNITYSDK_OFFSET(0x1E213BE0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_2_OFFSET UNITYSDK_OFFSET(0x1E213C50)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_OFFSET UNITYSDK_OFFSET(0x1E2133D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_1_OFFSET UNITYSDK_OFFSET(0x1E213DC0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_2_OFFSET UNITYSDK_OFFSET(0x1E213E30)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_OFFSET UNITYSDK_OFFSET(0x1E213450)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E214FD0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_1_OFFSET UNITYSDK_OFFSET(0x1E214090)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_2_OFFSET UNITYSDK_OFFSET(0x1E214100)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET UNITYSDK_OFFSET(0x1E213510)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_1_OFFSET UNITYSDK_OFFSET(0x1E2142A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_2_OFFSET UNITYSDK_OFFSET(0x1E214310)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDULONG_OFFSET UNITYSDK_OFFSET(0x1E213590)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_1_OFFSET UNITYSDK_OFFSET(0x1E213EB0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_2_OFFSET UNITYSDK_OFFSET(0x1E213F20)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUSHORT_OFFSET UNITYSDK_OFFSET(0x1E213490)
#define FLATBUFFERS_FLATBUFFERBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E212EE0)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATESHAREDSTRING_OFFSET UNITYSDK_OFFSET(0x1E214E20)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1E214640)
#define FLATBUFFERS_FLATBUFFERBUILDER_CREATEUTF8STRING_OFFSET UNITYSDK_OFFSET(0x1E214C70)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDTABLE_OFFSET UNITYSDK_OFFSET(0x1E215000)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1E213820)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_1_OFFSET UNITYSDK_OFFSET(0x1E2159D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_OFFSET UNITYSDK_OFFSET(0x1E215660)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_1_OFFSET UNITYSDK_OFFSET(0x1E215620)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_2_OFFSET UNITYSDK_OFFSET(0x1E2156C0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_3_OFFSET UNITYSDK_OFFSET(0x1E2159C0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x1E215580)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_DATABUFFER_OFFSET UNITYSDK_OFFSET(0x1E215670)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_FORCEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1E212FE0)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E213000)
#define FLATBUFFERS_FLATBUFFERBUILDER_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x1E213060)
#define FLATBUFFERS_FLATBUFFERBUILDER_NESTED_OFFSET UNITYSDK_OFFSET(0x1E213880)
#define FLATBUFFERS_FLATBUFFERBUILDER_NOTNESTED_OFFSET UNITYSDK_OFFSET(0x1E2137B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PAD_OFFSET UNITYSDK_OFFSET(0x1E213030)
#define FLATBUFFERS_FLATBUFFERBUILDER_PREP_OFFSET UNITYSDK_OFFSET(0x1E2130A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTBOOL_OFFSET UNITYSDK_OFFSET(0x1E213180)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTBYTE_OFFSET UNITYSDK_OFFSET(0x1E2131E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E213360)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTFLOAT_OFFSET UNITYSDK_OFFSET(0x1E213330)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTINT_OFFSET UNITYSDK_OFFSET(0x1E213270)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTLONG_OFFSET UNITYSDK_OFFSET(0x1E2132D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSBYTE_OFFSET UNITYSDK_OFFSET(0x1E2131B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSHORT_OFFSET UNITYSDK_OFFSET(0x1E213210)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTUINT_OFFSET UNITYSDK_OFFSET(0x1E2132A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTULONG_OFFSET UNITYSDK_OFFSET(0x1E213300)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTUSHORT_OFFSET UNITYSDK_OFFSET(0x1E213240)
#define FLATBUFFERS_FLATBUFFERBUILDER_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1E2154A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_SET_FORCEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1E212FF0)
#define FLATBUFFERS_FLATBUFFERBUILDER_SIZEDBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E215680)
#define FLATBUFFERS_FLATBUFFERBUILDER_SLOT_OFFSET UNITYSDK_OFFSET(0x1E213A30)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTTABLE_OFFSET UNITYSDK_OFFSET(0x1E213910)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTVECTOR_OFFSET UNITYSDK_OFFSET(0x1E213710)
#define FLATBUFFERS_FLATBUFFERBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E212E40)
#define FLATBUFFERS_FLATBUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E212C40)

namespace FlatBuffers
{
	inline static constexpr unsigned int FlatBufferBuilder_TypeDefinitionIndex = 6726;

	class FlatBufferBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlatBuffers::VectorOffset>* _sharedListsMap; // 0x10
		::FlatBuffers::ByteBuffer* _bb; // 0x18
		::Il2CppArray<::System::Int32>* _vtables; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlatBuffers::StringOffset>* _sharedStringMap; // 0x28
		::Il2CppArray<::System::Int32>* _vtable; // 0x30
		::System::Int32 _space; // 0x38
		::System::Int32 _objectStart; // 0x3C
		::System::Int32 _numVtables; // 0x40
		::System::Int32 _vectorNumElems; // 0x44
		::System::Int32 _vtableSize; // 0x48
		::System::Int32 _minAlign; // 0x4C
		::System::Boolean _ForceDefaults_k__BackingField; // 0x50

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
