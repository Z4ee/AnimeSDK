#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6BD41257D23618B4_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194A7AD0)
#define CLASS_1_6BD41257D23618B4_9_CLONE_OFFSET UNITYSDK_OFFSET(0x194A7800)
#define CLASS_1_6BD41257D23618B4_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194A7930)
#define CLASS_1_6BD41257D23618B4_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x194A78B0)
#define CLASS_1_6BD41257D23618B4_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194A79A0)
#define CLASS_1_6BD41257D23618B4_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194A7C40)
#define CLASS_1_6BD41257D23618B4_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194A7BF0)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x194A7890)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x194A7870)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x194A7770)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x194A78A0)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x194A7880)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x194A7860)
#define CLASS_1_6BD41257D23618B4_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x194A7850)
#define CLASS_1_6BD41257D23618B4_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194A77A0)
#define CLASS_1_6BD41257D23618B4_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194A79D0)
#define CLASS_1_6BD41257D23618B4_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x194A7A30)
#define CLASS_1_6BD41257D23618B4_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A7CE0)
#define CLASS_1_6BD41257D23618B4_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194A77C0)
#define CLASS_1_6BD41257D23618B4_9__CTOR_OFFSET UNITYSDK_OFFSET(0x194A77B0)

inline static constexpr unsigned int Class_1_6BD41257D23618B4_9_TypeDefinitionIndex = 28014;

class Class_1_6BD41257D23618B4_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BD41257D23618B4_9_TypeDefinitionIndex)->GetStaticField(0x4F680);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6BD41257D23618B4_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_9*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6BD41257D23618B4_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6BD41257D23618B4_9* Clone()
	{
		return ((::Class_1_6BD41257D23618B4_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6BD41257D23618B4_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BD41257D23618B4_9*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6BD41257D23618B4_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_9*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BD41257D23618B4_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
