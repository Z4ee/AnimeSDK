#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3F29D70BF135C948_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A3D2A0)
#define CLASS_1_3F29D70BF135C948_CLONE_OFFSET UNITYSDK_OFFSET(0x19A3CE30)
#define CLASS_1_3F29D70BF135C948_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A3CED0)
#define CLASS_1_3F29D70BF135C948_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A3CEA0)
#define CLASS_1_3F29D70BF135C948_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A3CF90)
#define CLASS_1_3F29D70BF135C948_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A3D3B0)
#define CLASS_1_3F29D70BF135C948_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A3D340)
#define CLASS_1_3F29D70BF135C948_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19A3CE90)
#define CLASS_1_3F29D70BF135C948_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19A3CE80)
#define CLASS_1_3F29D70BF135C948_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A3CC70)
#define CLASS_1_3F29D70BF135C948_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A3CE70)
#define CLASS_1_3F29D70BF135C948_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A3CE60)
#define CLASS_1_3F29D70BF135C948_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A3CCA0)
#define CLASS_1_3F29D70BF135C948_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A3D170)
#define CLASS_1_3F29D70BF135C948_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A3D1D0)
#define CLASS_1_3F29D70BF135C948__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A3D4C0)
#define CLASS_1_3F29D70BF135C948__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A3CD40)
#define CLASS_1_3F29D70BF135C948__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3CCB0)

inline static constexpr unsigned int Class_1_3F29D70BF135C948_TypeDefinitionIndex = 32357;

class Class_1_3F29D70BF135C948 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F29D70BF135C948_TypeDefinitionIndex)->GetStaticField(0x4B7D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_3F29D70BF135C948*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3F29D70BF135C948*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F29D70BF135C948_TypeDefinitionIndex)->GetStaticField(0x4B7D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F29D70BF135C948_TypeDefinitionIndex)->GetStaticField(0x4B7E0);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3F29D70BF135C948* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F29D70BF135C948*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3F29D70BF135C948*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3F29D70BF135C948*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3F29D70BF135C948* Clone()
	{
		return ((::Class_1_3F29D70BF135C948*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3F29D70BF135C948* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3F29D70BF135C948*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3F29D70BF135C948* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F29D70BF135C948*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3F29D70BF135C948_MERGEFROM_1_OFFSET))(this, a1);
	}
};
