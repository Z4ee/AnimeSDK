#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8CC61AD64FF9091_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CAE3E70)
#define CLASS_1_D8CC61AD64FF9091_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1CAE38C0)
#define CLASS_1_D8CC61AD64FF9091_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CAE3B00)
#define CLASS_1_D8CC61AD64FF9091_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAE3980)
#define CLASS_1_D8CC61AD64FF9091_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAE3C80)
#define CLASS_1_D8CC61AD64FF9091_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CAE3FD0)
#define CLASS_1_D8CC61AD64FF9091_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CAE3F40)
#define CLASS_1_D8CC61AD64FF9091_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CAE3960)
#define CLASS_1_D8CC61AD64FF9091_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CAE3940)
#define CLASS_1_D8CC61AD64FF9091_11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CAE3800)
#define CLASS_1_D8CC61AD64FF9091_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CAE3970)
#define CLASS_1_D8CC61AD64FF9091_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CAE3950)
#define CLASS_1_D8CC61AD64FF9091_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CAE3830)
#define CLASS_1_D8CC61AD64FF9091_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAE3D30)
#define CLASS_1_D8CC61AD64FF9091_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CAE3D90)
#define CLASS_1_D8CC61AD64FF9091_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAE4190)
#define CLASS_1_D8CC61AD64FF9091_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAE3850)
#define CLASS_1_D8CC61AD64FF9091_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE3840)

inline static constexpr unsigned int Class_1_D8CC61AD64FF9091_11_TypeDefinitionIndex = 26311;

class Class_1_D8CC61AD64FF9091_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_11*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8CC61AD64FF9091_11_TypeDefinitionIndex)->GetStaticField(0x59B50);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Class_1_7F6A638FBAAEC90B_5* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8CC61AD64FF9091_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_11*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D8CC61AD64FF9091_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_11* Clone()
	{
		return ((::Class_1_D8CC61AD64FF9091_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_CLONE_OFFSET))(this);
	}

	::Class_1_7F6A638FBAAEC90B_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7F6A638FBAAEC90B_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7F6A638FBAAEC90B_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_5*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8CC61AD64FF9091_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_11*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8CC61AD64FF9091_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_11*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8CC61AD64FF9091_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
