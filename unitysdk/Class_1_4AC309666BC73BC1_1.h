#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8271AFF79E02658D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4AC309666BC73BC1_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1965EA60)
#define CLASS_1_4AC309666BC73BC1_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1965E620)
#define CLASS_1_4AC309666BC73BC1_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1965E850)
#define CLASS_1_4AC309666BC73BC1_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1965E760)
#define CLASS_1_4AC309666BC73BC1_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1965E910)
#define CLASS_1_4AC309666BC73BC1_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1965EBE0)
#define CLASS_1_4AC309666BC73BC1_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1965EB40)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1965E740)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1965E700)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1965E500)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1965E750)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1965E710)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1965E730)
#define CLASS_1_4AC309666BC73BC1_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1965E720)
#define CLASS_1_4AC309666BC73BC1_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1965E560)
#define CLASS_1_4AC309666BC73BC1_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1965E960)
#define CLASS_1_4AC309666BC73BC1_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1965E9C0)
#define CLASS_1_4AC309666BC73BC1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1965ECB0)
#define CLASS_1_4AC309666BC73BC1_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1965E580)
#define CLASS_1_4AC309666BC73BC1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1965E570)

inline static constexpr unsigned int Class_1_4AC309666BC73BC1_1_TypeDefinitionIndex = 27432;

class Class_1_4AC309666BC73BC1_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AC309666BC73BC1_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AC309666BC73BC1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AC309666BC73BC1_1_TypeDefinitionIndex)->GetStaticField(0x7090);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_8271AFF79E02658D* Field_1_3; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::Boolean Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AC309666BC73BC1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AC309666BC73BC1_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AC309666BC73BC1_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AC309666BC73BC1_1* Clone()
	{
		return ((::Class_1_4AC309666BC73BC1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_CLONE_OFFSET))(this);
	}

	::Class_1_8271AFF79E02658D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8271AFF79E02658D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8271AFF79E02658D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AC309666BC73BC1_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AC309666BC73BC1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AC309666BC73BC1_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
