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

#define CLASS_1_5D48F7CA334C7FAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2B6600)
#define CLASS_1_5D48F7CA334C7FAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2B6200)
#define CLASS_1_5D48F7CA334C7FAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2B63B0)
#define CLASS_1_5D48F7CA334C7FAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2B62E0)
#define CLASS_1_5D48F7CA334C7FAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2B6480)
#define CLASS_1_5D48F7CA334C7FAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2B6800)
#define CLASS_1_5D48F7CA334C7FAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2B6750)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A2B62A0)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2B6260)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A2B62C0)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A2B6160)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A2B62B0)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A2B6270)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A2B62D0)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A2B6290)
#define CLASS_1_5D48F7CA334C7FAF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2B6280)
#define CLASS_1_5D48F7CA334C7FAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2B6190)
#define CLASS_1_5D48F7CA334C7FAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2B64D0)
#define CLASS_1_5D48F7CA334C7FAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2B6530)
#define CLASS_1_5D48F7CA334C7FAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2B68E0)
#define CLASS_1_5D48F7CA334C7FAF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2B61B0)
#define CLASS_1_5D48F7CA334C7FAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B61A0)

inline static constexpr unsigned int Class_1_5D48F7CA334C7FAF_TypeDefinitionIndex = 27227;

class Class_1_5D48F7CA334C7FAF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5D48F7CA334C7FAF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5D48F7CA334C7FAF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D48F7CA334C7FAF_TypeDefinitionIndex)->GetStaticField(0x4B960);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Class_1_10568D63349FDCA4* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::Boolean Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5D48F7CA334C7FAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D48F7CA334C7FAF*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5D48F7CA334C7FAF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5D48F7CA334C7FAF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5D48F7CA334C7FAF* Clone()
	{
		return ((::Class_1_5D48F7CA334C7FAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_10568D63349FDCA4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_10568D63349FDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_10568D63349FDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5D48F7CA334C7FAF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5D48F7CA334C7FAF*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5D48F7CA334C7FAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D48F7CA334C7FAF*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D48F7CA334C7FAF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
