#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_18;
class Class_1_3AD2528CD53B1639_2;
class Class_1_EF2D3B79941AF6F8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_72C360ACBC9311DF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A410580)
#define CLASS_1_72C360ACBC9311DF_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4100C0)
#define CLASS_1_72C360ACBC9311DF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4102B0)
#define CLASS_1_72C360ACBC9311DF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A410170)
#define CLASS_1_72C360ACBC9311DF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4103E0)
#define CLASS_1_72C360ACBC9311DF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A410830)
#define CLASS_1_72C360ACBC9311DF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4106C0)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A410110)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A410130)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1A410150)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A4100F0)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A40FF70)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A410120)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A410140)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1A410160)
#define CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A410100)
#define CLASS_1_72C360ACBC9311DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A40FFA0)
#define CLASS_1_72C360ACBC9311DF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A410450)
#define CLASS_1_72C360ACBC9311DF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4104B0)
#define CLASS_1_72C360ACBC9311DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A410990)
#define CLASS_1_72C360ACBC9311DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A40FFC0)
#define CLASS_1_72C360ACBC9311DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40FFB0)

inline static constexpr unsigned int Class_1_72C360ACBC9311DF_TypeDefinitionIndex = 25158;

class Class_1_72C360ACBC9311DF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_72C360ACBC9311DF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_72C360ACBC9311DF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72C360ACBC9311DF_TypeDefinitionIndex)->GetStaticField(0x63B10);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Class_1_21DCD4640D389503_18* Field_1_5; // 0x10
	::Class_1_3AD2528CD53B1639_2* Field_1_6; // 0x18
	::Class_1_EF2D3B79941AF6F8* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x28
	::System::UInt32 Field_1_9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_72C360ACBC9311DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72C360ACBC9311DF*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_72C360ACBC9311DF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_72C360ACBC9311DF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_72C360ACBC9311DF* Clone()
	{
		return ((::Class_1_72C360ACBC9311DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_CLONE_OFFSET))(this);
	}

	::Class_1_EF2D3B79941AF6F8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EF2D3B79941AF6F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EF2D3B79941AF6F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_18* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_3AD2528CD53B1639_2* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_3AD2528CD53B1639_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_3AD2528CD53B1639_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_72C360ACBC9311DF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72C360ACBC9311DF*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_72C360ACBC9311DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72C360ACBC9311DF*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72C360ACBC9311DF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
