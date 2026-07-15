#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AC2469BFDE8FD83;
class Class_1_CBED1C81B576764D_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2FF821442F9D00B8_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C852B50)
#define CLASS_1_2FF821442F9D00B8_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8523B0)
#define CLASS_1_2FF821442F9D00B8_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8526E0)
#define CLASS_1_2FF821442F9D00B8_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8524B0)
#define CLASS_1_2FF821442F9D00B8_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C852910)
#define CLASS_1_2FF821442F9D00B8_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C852D50)
#define CLASS_1_2FF821442F9D00B8_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C852C60)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C852490)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C852470)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C852450)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8522D0)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8524A0)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C852480)
#define CLASS_1_2FF821442F9D00B8_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C852460)
#define CLASS_1_2FF821442F9D00B8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C852300)
#define CLASS_1_2FF821442F9D00B8_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8529B0)
#define CLASS_1_2FF821442F9D00B8_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C852A10)
#define CLASS_1_2FF821442F9D00B8_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C852F50)
#define CLASS_1_2FF821442F9D00B8_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C852320)
#define CLASS_1_2FF821442F9D00B8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C852310)

inline static constexpr unsigned int Class_1_2FF821442F9D00B8_1_TypeDefinitionIndex = 28112;

class Class_1_2FF821442F9D00B8_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FF821442F9D00B8_1_TypeDefinitionIndex)->GetStaticField(0x398E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_CBED1C81B576764D_1* Field_1_4; // 0x10
	::Class_1_1AC2469BFDE8FD83* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2FF821442F9D00B8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FF821442F9D00B8_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2FF821442F9D00B8_1* Clone()
	{
		return ((::Class_1_2FF821442F9D00B8_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_CLONE_OFFSET))(this);
	}

	::Class_1_CBED1C81B576764D_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CBED1C81B576764D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CBED1C81B576764D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CBED1C81B576764D_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_1AC2469BFDE8FD83* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_1AC2469BFDE8FD83*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_1AC2469BFDE8FD83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AC2469BFDE8FD83*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2FF821442F9D00B8_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2FF821442F9D00B8_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2FF821442F9D00B8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FF821442F9D00B8_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
