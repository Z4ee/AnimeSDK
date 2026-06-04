#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

class Class_1_3C6018135E54E36D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2F77DCFC258E0400_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8FDDA0)
#define CLASS_1_2F77DCFC258E0400_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8FD8D0)
#define CLASS_1_2F77DCFC258E0400_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8FDA50)
#define CLASS_1_2F77DCFC258E0400_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8FD950)
#define CLASS_1_2F77DCFC258E0400_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8FDB20)
#define CLASS_1_2F77DCFC258E0400_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8FE070)
#define CLASS_1_2F77DCFC258E0400_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8FDFC0)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1A8FD910)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A8FD930)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A8FD7B0)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A8FD940)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A8FD920)
#define CLASS_1_2F77DCFC258E0400_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A8FD900)
#define CLASS_1_2F77DCFC258E0400_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8FD7E0)
#define CLASS_1_2F77DCFC258E0400_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8FDC20)
#define CLASS_1_2F77DCFC258E0400_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8FDC80)
#define CLASS_1_2F77DCFC258E0400__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8FE250)
#define CLASS_1_2F77DCFC258E0400__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8FD830)
#define CLASS_1_2F77DCFC258E0400__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FD7F0)

inline static constexpr unsigned int Class_1_2F77DCFC258E0400_TypeDefinitionIndex = 31579;

class Class_1_2F77DCFC258E0400 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F77DCFC258E0400_TypeDefinitionIndex)->GetStaticField(0xF830);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2F77DCFC258E0400*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2F77DCFC258E0400*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F77DCFC258E0400_TypeDefinitionIndex)->GetStaticField(0xF838);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Field_1_6; // 0x18
	::Enum_3_96F6662CA3713095_25 Field_1_7; // 0x20
	::System::UInt64 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2F77DCFC258E0400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F77DCFC258E0400*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2F77DCFC258E0400*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2F77DCFC258E0400*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2F77DCFC258E0400* Clone()
	{
		return ((::Class_1_2F77DCFC258E0400*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2F77DCFC258E0400* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2F77DCFC258E0400*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2F77DCFC258E0400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F77DCFC258E0400*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2F77DCFC258E0400_MERGEFROM_1_OFFSET))(this, a1);
	}
};
