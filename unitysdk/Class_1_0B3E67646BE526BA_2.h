#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
class Class_1_3DE734113B1E313B_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0B3E67646BE526BA_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D25D30)
#define CLASS_1_0B3E67646BE526BA_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17D09710)
#define CLASS_1_0B3E67646BE526BA_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D25900)
#define CLASS_1_0B3E67646BE526BA_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D258A0)
#define CLASS_1_0B3E67646BE526BA_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D25A10)
#define CLASS_1_0B3E67646BE526BA_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D25F80)
#define CLASS_1_0B3E67646BE526BA_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D25E80)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D25880)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D25830)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17D25870)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D25890)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D25840)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D25860)
#define CLASS_1_0B3E67646BE526BA_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D25850)
#define CLASS_1_0B3E67646BE526BA_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D095C0)
#define CLASS_1_0B3E67646BE526BA_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D25BA0)
#define CLASS_1_0B3E67646BE526BA_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D25C00)
#define CLASS_1_0B3E67646BE526BA_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D260B0)
#define CLASS_1_0B3E67646BE526BA_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D09620)
#define CLASS_1_0B3E67646BE526BA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17D095D0)

inline static constexpr unsigned int Class_1_0B3E67646BE526BA_2_TypeDefinitionIndex = 27586;

class Class_1_0B3E67646BE526BA_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_32044B0173B87B04_2*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_32044B0173B87B04_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3E67646BE526BA_2_TypeDefinitionIndex)->GetStaticField(0x10BF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32044B0173B87B04_2*>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_3DE734113B1E313B_2* Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0B3E67646BE526BA_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B3E67646BE526BA_2*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0B3E67646BE526BA_2* Clone()
	{
		return ((::Class_1_0B3E67646BE526BA_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_CLONE_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32044B0173B87B04_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32044B0173B87B04_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0B3E67646BE526BA_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0B3E67646BE526BA_2*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0B3E67646BE526BA_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B3E67646BE526BA_2*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0B3E67646BE526BA_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
