#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10568D63349FDCA4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EEEF09F79EF958D3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FF91A0)
#define CLASS_1_EEEF09F79EF958D3_CLONE_OFFSET UNITYSDK_OFFSET(0x19FF8E30)
#define CLASS_1_EEEF09F79EF958D3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FF8FB0)
#define CLASS_1_EEEF09F79EF958D3_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FF8EF0)
#define CLASS_1_EEEF09F79EF958D3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FF9060)
#define CLASS_1_EEEF09F79EF958D3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FF9320)
#define CLASS_1_EEEF09F79EF958D3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FF9280)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19FF8E90)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19FF8EB0)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19FF8D90)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19FF8EA0)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19FF8EC0)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19FF8EE0)
#define CLASS_1_EEEF09F79EF958D3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19FF8ED0)
#define CLASS_1_EEEF09F79EF958D3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FF8DC0)
#define CLASS_1_EEEF09F79EF958D3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FF90A0)
#define CLASS_1_EEEF09F79EF958D3_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FF9100)
#define CLASS_1_EEEF09F79EF958D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF9500)
#define CLASS_1_EEEF09F79EF958D3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FF8DE0)
#define CLASS_1_EEEF09F79EF958D3__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF8DD0)

inline static constexpr unsigned int Class_1_EEEF09F79EF958D3_TypeDefinitionIndex = 27229;

class Class_1_EEEF09F79EF958D3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EEEF09F79EF958D3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EEEF09F79EF958D3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EEEF09F79EF958D3_TypeDefinitionIndex)->GetStaticField(0x282B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Class_1_10568D63349FDCA4* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::Boolean Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EEEF09F79EF958D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EEEF09F79EF958D3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EEEF09F79EF958D3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EEEF09F79EF958D3* Clone()
	{
		return ((::Class_1_EEEF09F79EF958D3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_10568D63349FDCA4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_10568D63349FDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_10568D63349FDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EEEF09F79EF958D3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EEEF09F79EF958D3*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EEEF09F79EF958D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EEEF09F79EF958D3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
