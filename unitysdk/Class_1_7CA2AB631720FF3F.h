#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB97E6BA44592C06_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7CA2AB631720FF3F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1961BA20)
#define CLASS_1_7CA2AB631720FF3F_CLONE_OFFSET UNITYSDK_OFFSET(0x1961B260)
#define CLASS_1_7CA2AB631720FF3F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1961B660)
#define CLASS_1_7CA2AB631720FF3F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1961B520)
#define CLASS_1_7CA2AB631720FF3F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1961B780)
#define CLASS_1_7CA2AB631720FF3F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1961BE70)
#define CLASS_1_7CA2AB631720FF3F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1961BCE0)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1961B4E0)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1961B430)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1961B380)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1961B500)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1961B0F0)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1961B4F0)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1961B510)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x1961B440)
#define CLASS_1_7CA2AB631720FF3F_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x1961B390)
#define CLASS_1_7CA2AB631720FF3F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1961B150)
#define CLASS_1_7CA2AB631720FF3F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1961B8D0)
#define CLASS_1_7CA2AB631720FF3F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1961B930)
#define CLASS_1_7CA2AB631720FF3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1961C0A0)
#define CLASS_1_7CA2AB631720FF3F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1961B180)
#define CLASS_1_7CA2AB631720FF3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1961B160)

inline static constexpr unsigned int Class_1_7CA2AB631720FF3F_TypeDefinitionIndex = 24441;

class Class_1_7CA2AB631720FF3F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7CA2AB631720FF3F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7CA2AB631720FF3F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CA2AB631720FF3F_TypeDefinitionIndex)->GetStaticField(0x5D860);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::Class_1_FB97E6BA44592C06_3* Field_1_9; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::UInt32 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7CA2AB631720FF3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7CA2AB631720FF3F*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7CA2AB631720FF3F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7CA2AB631720FF3F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7CA2AB631720FF3F* Clone()
	{
		return ((::Class_1_7CA2AB631720FF3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_FB97E6BA44592C06_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FB97E6BA44592C06_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FB97E6BA44592C06_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_3*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7CA2AB631720FF3F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7CA2AB631720FF3F*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7CA2AB631720FF3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7CA2AB631720FF3F*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7CA2AB631720FF3F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
