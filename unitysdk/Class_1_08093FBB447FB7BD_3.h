#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_973F1F5DEEACFA6C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_08093FBB447FB7BD_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7ADF80)
#define CLASS_1_08093FBB447FB7BD_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7ADC30)
#define CLASS_1_08093FBB447FB7BD_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7ADDA0)
#define CLASS_1_08093FBB447FB7BD_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7ADCF0)
#define CLASS_1_08093FBB447FB7BD_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7ADE50)
#define CLASS_1_08093FBB447FB7BD_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7AE0D0)
#define CLASS_1_08093FBB447FB7BD_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7AE050)
#define CLASS_1_08093FBB447FB7BD_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7ADCD0)
#define CLASS_1_08093FBB447FB7BD_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A7ADCB0)
#define CLASS_1_08093FBB447FB7BD_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7ADB70)
#define CLASS_1_08093FBB447FB7BD_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7ADCE0)
#define CLASS_1_08093FBB447FB7BD_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A7ADCC0)
#define CLASS_1_08093FBB447FB7BD_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7ADBA0)
#define CLASS_1_08093FBB447FB7BD_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7ADEA0)
#define CLASS_1_08093FBB447FB7BD_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7ADF00)
#define CLASS_1_08093FBB447FB7BD_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7AE270)
#define CLASS_1_08093FBB447FB7BD_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7ADBC0)
#define CLASS_1_08093FBB447FB7BD_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ADBB0)

inline static constexpr unsigned int Class_1_08093FBB447FB7BD_3_TypeDefinitionIndex = 24816;

class Class_1_08093FBB447FB7BD_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_08093FBB447FB7BD_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_08093FBB447FB7BD_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_08093FBB447FB7BD_3_TypeDefinitionIndex)->GetStaticField(0x4A0F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_973F1F5DEEACFA6C* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_08093FBB447FB7BD_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08093FBB447FB7BD_3*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_08093FBB447FB7BD_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_08093FBB447FB7BD_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_08093FBB447FB7BD_3* Clone()
	{
		return ((::Class_1_08093FBB447FB7BD_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_CLONE_OFFSET))(this);
	}

	::Class_1_973F1F5DEEACFA6C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_973F1F5DEEACFA6C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_973F1F5DEEACFA6C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_08093FBB447FB7BD_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_08093FBB447FB7BD_3*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_08093FBB447FB7BD_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08093FBB447FB7BD_3*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_08093FBB447FB7BD_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
