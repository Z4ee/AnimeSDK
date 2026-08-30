#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E248EC0)
#define CLASS_1_242BFB9DE152D766_68_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2487F0)
#define CLASS_1_242BFB9DE152D766_68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E248A60)
#define CLASS_1_242BFB9DE152D766_68_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2488C0)
#define CLASS_1_242BFB9DE152D766_68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E248D30)
#define CLASS_1_242BFB9DE152D766_68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E248FB0)
#define CLASS_1_242BFB9DE152D766_68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E248F20)
#define CLASS_1_242BFB9DE152D766_68_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E2488A0)
#define CLASS_1_242BFB9DE152D766_68_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E248700)
#define CLASS_1_242BFB9DE152D766_68_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E2488B0)
#define CLASS_1_242BFB9DE152D766_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E248760)
#define CLASS_1_242BFB9DE152D766_68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E248DD0)
#define CLASS_1_242BFB9DE152D766_68_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E248E30)
#define CLASS_1_242BFB9DE152D766_68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E249160)
#define CLASS_1_242BFB9DE152D766_68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E248780)
#define CLASS_1_242BFB9DE152D766_68__CTOR_OFFSET UNITYSDK_OFFSET(0x1E248770)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_68_TypeDefinitionIndex = 32000;

class Class_1_242BFB9DE152D766_68 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_68*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_68_TypeDefinitionIndex)->GetStaticField(0x15F70);
	}
	// static const ::System::Int32 EOPEFMJDFKC = 0x3; // 0x0
	::Class_1_C3162D2F7EA647B9* PHBFHCCKHIC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_68*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_68*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_68* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_CLONE_OFFSET))(this);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_68*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_68*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
