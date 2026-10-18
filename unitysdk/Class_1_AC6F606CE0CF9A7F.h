#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F11CBE4D3C7DF06D_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC6F606CE0CF9A7F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD0C00)
#define CLASS_1_AC6F606CE0CF9A7F_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD05C0)
#define CLASS_1_AC6F606CE0CF9A7F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD07C0)
#define CLASS_1_AC6F606CE0CF9A7F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD0620)
#define CLASS_1_AC6F606CE0CF9A7F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD0960)
#define CLASS_1_AC6F606CE0CF9A7F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD0D20)
#define CLASS_1_AC6F606CE0CF9A7F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD0CA0)
#define CLASS_1_AC6F606CE0CF9A7F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EAD0600)
#define CLASS_1_AC6F606CE0CF9A7F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EAD05F0)
#define CLASS_1_AC6F606CE0CF9A7F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EAD0410)
#define CLASS_1_AC6F606CE0CF9A7F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EAD0610)
#define CLASS_1_AC6F606CE0CF9A7F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0440)
#define CLASS_1_AC6F606CE0CF9A7F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD0AC0)
#define CLASS_1_AC6F606CE0CF9A7F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD0B20)
#define CLASS_1_AC6F606CE0CF9A7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0EF0)
#define CLASS_1_AC6F606CE0CF9A7F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD04A0)
#define CLASS_1_AC6F606CE0CF9A7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0450)

inline static constexpr unsigned int Class_1_AC6F606CE0CF9A7F_TypeDefinitionIndex = 33093;

class Class_1_AC6F606CE0CF9A7F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AC6F606CE0CF9A7F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AC6F606CE0CF9A7F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6F606CE0CF9A7F_TypeDefinitionIndex)->GetStaticField(0x62CD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PKCGJNOAPBE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC6F606CE0CF9A7F_TypeDefinitionIndex)->GetStaticField(0x62CD8);
	}
	// static const ::System::Int32 AEBDCJLPGOA = 0x9; // 0x0
	// static const ::System::Int32 GOGLCJEPJBB = 0xC; // 0x0
	::Class_1_F11CBE4D3C7DF06D_3* FIIMNKHCEMN; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODOKFLGMOEK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC6F606CE0CF9A7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6F606CE0CF9A7F*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AC6F606CE0CF9A7F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AC6F606CE0CF9A7F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC6F606CE0CF9A7F* Clone()
	{
		return ((::Class_1_AC6F606CE0CF9A7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_F11CBE4D3C7DF06D_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F11CBE4D3C7DF06D_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F11CBE4D3C7DF06D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_3*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC6F606CE0CF9A7F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC6F606CE0CF9A7F*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC6F606CE0CF9A7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6F606CE0CF9A7F*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC6F606CE0CF9A7F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
