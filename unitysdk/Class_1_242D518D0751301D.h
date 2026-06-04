#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/System/Object.h"

class Class_1_496DDD2F6FDC28F1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242D518D0751301D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FDEBE0)
#define CLASS_1_242D518D0751301D_CLONE_OFFSET UNITYSDK_OFFSET(0x19FDE720)
#define CLASS_1_242D518D0751301D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FDE810)
#define CLASS_1_242D518D0751301D_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FDE7E0)
#define CLASS_1_242D518D0751301D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FDE900)
#define CLASS_1_242D518D0751301D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FDEF10)
#define CLASS_1_242D518D0751301D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FDEE40)
#define CLASS_1_242D518D0751301D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19FDE780)
#define CLASS_1_242D518D0751301D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19FDE760)
#define CLASS_1_242D518D0751301D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19FDE7D0)
#define CLASS_1_242D518D0751301D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19FDE5C0)
#define CLASS_1_242D518D0751301D_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19FDE750)
#define CLASS_1_242D518D0751301D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19FDE790)
#define CLASS_1_242D518D0751301D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19FDE770)
#define CLASS_1_242D518D0751301D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19FDE7C0)
#define CLASS_1_242D518D0751301D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19FDE7B0)
#define CLASS_1_242D518D0751301D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19FDE7A0)
#define CLASS_1_242D518D0751301D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FDE5F0)
#define CLASS_1_242D518D0751301D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FDEA00)
#define CLASS_1_242D518D0751301D_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FDEA60)
#define CLASS_1_242D518D0751301D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FDF030)
#define CLASS_1_242D518D0751301D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FDE650)
#define CLASS_1_242D518D0751301D__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDE600)

inline static constexpr unsigned int Class_1_242D518D0751301D_TypeDefinitionIndex = 27326;

class Class_1_242D518D0751301D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242D518D0751301D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242D518D0751301D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242D518D0751301D_TypeDefinitionIndex)->GetStaticField(0x26730);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_496DDD2F6FDC28F1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_496DDD2F6FDC28F1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242D518D0751301D_TypeDefinitionIndex)->GetStaticField(0x26738);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_496DDD2F6FDC28F1*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::Enum_3_71AA90D596A09AC8_1 Field_1_10; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::Boolean Field_1_12; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242D518D0751301D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242D518D0751301D*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242D518D0751301D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242D518D0751301D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242D518D0751301D* Clone()
	{
		return ((::Class_1_242D518D0751301D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_496DDD2F6FDC28F1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_496DDD2F6FDC28F1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_1))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242D518D0751301D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242D518D0751301D*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242D518D0751301D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242D518D0751301D*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242D518D0751301D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
