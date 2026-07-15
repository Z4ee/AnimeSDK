#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CCEDA50)
#define CLASS_1_8654F1DF226F6DE3_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1CCED500)
#define CLASS_1_8654F1DF226F6DE3_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CCED700)
#define CLASS_1_8654F1DF226F6DE3_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCED5D0)
#define CLASS_1_8654F1DF226F6DE3_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCED8A0)
#define CLASS_1_8654F1DF226F6DE3_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CCEDB00)
#define CLASS_1_8654F1DF226F6DE3_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CCEDAC0)
#define CLASS_1_8654F1DF226F6DE3_6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CCED580)
#define CLASS_1_8654F1DF226F6DE3_6_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CCED570)
#define CLASS_1_8654F1DF226F6DE3_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CCED440)
#define CLASS_1_8654F1DF226F6DE3_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CCED4A0)
#define CLASS_1_8654F1DF226F6DE3_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCED960)
#define CLASS_1_8654F1DF226F6DE3_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CCED9C0)
#define CLASS_1_8654F1DF226F6DE3_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEDC90)
#define CLASS_1_8654F1DF226F6DE3_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCED4C0)
#define CLASS_1_8654F1DF226F6DE3_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCED4B0)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_6_TypeDefinitionIndex = 28476;

class Class_1_8654F1DF226F6DE3_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_6_TypeDefinitionIndex)->GetStaticField(0x1B210);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_6*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_6* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_6*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_6*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
