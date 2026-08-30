#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_108_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41E7B0)
#define CLASS_1_242BFB9DE152D766_108_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41E130)
#define CLASS_1_242BFB9DE152D766_108_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41E3A0)
#define CLASS_1_242BFB9DE152D766_108_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41E200)
#define CLASS_1_242BFB9DE152D766_108_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41E670)
#define CLASS_1_242BFB9DE152D766_108_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41E910)
#define CLASS_1_242BFB9DE152D766_108_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41E810)
#define CLASS_1_242BFB9DE152D766_108_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E41E1E0)
#define CLASS_1_242BFB9DE152D766_108_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E41E040)
#define CLASS_1_242BFB9DE152D766_108_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E41E1F0)
#define CLASS_1_242BFB9DE152D766_108_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41E0A0)
#define CLASS_1_242BFB9DE152D766_108_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41E6C0)
#define CLASS_1_242BFB9DE152D766_108_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41E720)
#define CLASS_1_242BFB9DE152D766_108__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41EAE0)
#define CLASS_1_242BFB9DE152D766_108__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41E0C0)
#define CLASS_1_242BFB9DE152D766_108__CTOR_OFFSET UNITYSDK_OFFSET(0x1E41E0B0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_108_TypeDefinitionIndex = 34104;

class Class_1_242BFB9DE152D766_108 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_108*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_108*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_108_TypeDefinitionIndex)->GetStaticField(0x5A030);
	}
	// static const ::System::Int32 BMAAAJJCGIG = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_07701BC2FDC5E4E0_6* OBDNOGCHHPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_108* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_108*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_108*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_108*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_108* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_108*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_CLONE_OFFSET))(this);
	}

	::Class_1_07701BC2FDC5E4E0_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_07701BC2FDC5E4E0_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_07701BC2FDC5E4E0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0_6*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_108* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_108*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_108* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_108*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_108_MERGEFROM_1_OFFSET))(this, a1);
	}
};
