#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F29182263AEF4E21_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_51_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8C5FA0)
#define CLASS_1_242BFB9DE152D766_51_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8C5900)
#define CLASS_1_242BFB9DE152D766_51_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8C5B90)
#define CLASS_1_242BFB9DE152D766_51_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8C59F0)
#define CLASS_1_242BFB9DE152D766_51_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8C5E60)
#define CLASS_1_242BFB9DE152D766_51_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8C6090)
#define CLASS_1_242BFB9DE152D766_51_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8C6000)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8C59D0)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8C57F0)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8C59E0)
#define CLASS_1_242BFB9DE152D766_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8C5850)
#define CLASS_1_242BFB9DE152D766_51_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8C5EB0)
#define CLASS_1_242BFB9DE152D766_51_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8C5F10)
#define CLASS_1_242BFB9DE152D766_51__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8C6230)
#define CLASS_1_242BFB9DE152D766_51__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8C5870)
#define CLASS_1_242BFB9DE152D766_51__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C5860)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_51_TypeDefinitionIndex = 30423;

class Class_1_242BFB9DE152D766_51 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_51_TypeDefinitionIndex)->GetStaticField(0x4CA30);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_F29182263AEF4E21_3* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_51* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_CLONE_OFFSET))(this);
	}

	::Class_1_F29182263AEF4E21_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F29182263AEF4E21_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F29182263AEF4E21_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F29182263AEF4E21_3*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_MERGEFROM_1_OFFSET))(this, a1);
	}
};
