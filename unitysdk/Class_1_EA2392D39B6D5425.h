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
namespace Proto { class GachaCeilingAvatar; }
namespace System { class String; }

#define CLASS_1_EA2392D39B6D5425_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A44A4A0)
#define CLASS_1_EA2392D39B6D5425_CLONE_OFFSET UNITYSDK_OFFSET(0x1A44A000)
#define CLASS_1_EA2392D39B6D5425_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A44A180)
#define CLASS_1_EA2392D39B6D5425_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A44A080)
#define CLASS_1_EA2392D39B6D5425_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A44A250)
#define CLASS_1_EA2392D39B6D5425_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A44A660)
#define CLASS_1_EA2392D39B6D5425_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A44A5B0)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A44A050)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A449EE0)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A44A060)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A44A040)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A44A030)
#define CLASS_1_EA2392D39B6D5425_METHOD_1_F05E2AE4258237EE_OFFSET UNITYSDK_OFFSET(0x1A44A070)
#define CLASS_1_EA2392D39B6D5425_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A449F10)
#define CLASS_1_EA2392D39B6D5425_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A44A340)
#define CLASS_1_EA2392D39B6D5425_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A44A3A0)
#define CLASS_1_EA2392D39B6D5425__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A44A840)
#define CLASS_1_EA2392D39B6D5425__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A449F60)
#define CLASS_1_EA2392D39B6D5425__CTOR_OFFSET UNITYSDK_OFFSET(0x1A449F20)

inline static constexpr unsigned int Class_1_EA2392D39B6D5425_TypeDefinitionIndex = 27345;

class Class_1_EA2392D39B6D5425 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA2392D39B6D5425_TypeDefinitionIndex)->GetStaticField(0x65E80);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA2392D39B6D5425*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA2392D39B6D5425*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA2392D39B6D5425_TypeDefinitionIndex)->GetStaticField(0x65E88);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA2392D39B6D5425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA2392D39B6D5425*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA2392D39B6D5425*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA2392D39B6D5425*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA2392D39B6D5425* Clone()
	{
		return ((::Class_1_EA2392D39B6D5425*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* Method_1_F05E2AE4258237EE()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_METHOD_1_F05E2AE4258237EE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA2392D39B6D5425* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA2392D39B6D5425*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA2392D39B6D5425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA2392D39B6D5425*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA2392D39B6D5425_MERGEFROM_1_OFFSET))(this, a1);
	}
};
