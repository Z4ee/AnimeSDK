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
namespace System { class String; }

#define CLASS_1_BF56B935FC9D217B_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30AB60)
#define CLASS_1_BF56B935FC9D217B_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B2580)
#define CLASS_1_BF56B935FC9D217B_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30A8C0)
#define CLASS_1_BF56B935FC9D217B_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30A740)
#define CLASS_1_BF56B935FC9D217B_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30A9E0)
#define CLASS_1_BF56B935FC9D217B_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30ACA0)
#define CLASS_1_BF56B935FC9D217B_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30AC00)
#define CLASS_1_BF56B935FC9D217B_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E5B2440)
#define CLASS_1_BF56B935FC9D217B_1_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1E30A730)
#define CLASS_1_BF56B935FC9D217B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B24A0)
#define CLASS_1_BF56B935FC9D217B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30AA50)
#define CLASS_1_BF56B935FC9D217B_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30AAB0)
#define CLASS_1_BF56B935FC9D217B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30AE60)
#define CLASS_1_BF56B935FC9D217B_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B24F0)
#define CLASS_1_BF56B935FC9D217B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B24B0)

inline static constexpr unsigned int Class_1_BF56B935FC9D217B_1_TypeDefinitionIndex = 31517;

class Class_1_BF56B935FC9D217B_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF56B935FC9D217B_1_TypeDefinitionIndex)->GetStaticField(0x22A60);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_LOLKEKDMBHC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF56B935FC9D217B_1_TypeDefinitionIndex)->GetStaticField(0x22A68);
	}
	// static const ::System::Int32 DCLKJKLKOGF = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* FLAMEAGFLPG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BF56B935FC9D217B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF56B935FC9D217B_1*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BF56B935FC9D217B_1* Clone()
	{
		return ((::Class_1_BF56B935FC9D217B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BF56B935FC9D217B_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BF56B935FC9D217B_1*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BF56B935FC9D217B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF56B935FC9D217B_1*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
