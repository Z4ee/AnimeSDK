#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_273;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_E08513351BC22090_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18000AD0)
#define CLASS_1_E08513351BC22090_CLONE_OFFSET UNITYSDK_OFFSET(0x180005A0)
#define CLASS_1_E08513351BC22090_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18000660)
#define CLASS_1_E08513351BC22090_EQUALS_OFFSET UNITYSDK_OFFSET(0x18000630)
#define CLASS_1_E08513351BC22090_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18000760)
#define CLASS_1_E08513351BC22090_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18000E30)
#define CLASS_1_E08513351BC22090_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18000D20)
#define CLASS_1_E08513351BC22090_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18000610)
#define CLASS_1_E08513351BC22090_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x180005F0)
#define CLASS_1_E08513351BC22090_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x180005D0)
#define CLASS_1_E08513351BC22090_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x18000600)
#define CLASS_1_E08513351BC22090_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18000620)
#define CLASS_1_E08513351BC22090_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x180005E0)
#define CLASS_1_E08513351BC22090_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18000450)
#define CLASS_1_E08513351BC22090_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18000920)
#define CLASS_1_E08513351BC22090_WRITETO_OFFSET UNITYSDK_OFFSET(0x18000980)
#define CLASS_1_E08513351BC22090__CCTOR_OFFSET UNITYSDK_OFFSET(0x18000F60)
#define CLASS_1_E08513351BC22090__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180004C0)
#define CLASS_1_E08513351BC22090__CTOR_OFFSET UNITYSDK_OFFSET(0x18000460)

inline static constexpr unsigned int Class_1_E08513351BC22090_TypeDefinitionIndex = 24275;

class Class_1_E08513351BC22090 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_273*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_273*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E08513351BC22090_TypeDefinitionIndex)->GetStaticField(0x3A0A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E08513351BC22090_TypeDefinitionIndex)->GetStaticField(0x3A0A8);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::Int64 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E08513351BC22090* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E08513351BC22090*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E08513351BC22090* Clone()
	{
		return ((::Class_1_E08513351BC22090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_273*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E08513351BC22090* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E08513351BC22090*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E08513351BC22090* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E08513351BC22090*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_MERGEFROM_1_OFFSET))(this, a1);
	}
};
