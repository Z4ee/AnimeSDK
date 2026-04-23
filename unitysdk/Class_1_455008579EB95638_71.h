#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE6CD7C4A65B646F_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_71_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195961A0)
#define CLASS_1_455008579EB95638_71_CLONE_OFFSET UNITYSDK_OFFSET(0x19595D00)
#define CLASS_1_455008579EB95638_71_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19595E80)
#define CLASS_1_455008579EB95638_71_EQUALS_OFFSET UNITYSDK_OFFSET(0x19595D80)
#define CLASS_1_455008579EB95638_71_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19595F50)
#define CLASS_1_455008579EB95638_71_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19596390)
#define CLASS_1_455008579EB95638_71_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19596280)
#define CLASS_1_455008579EB95638_71_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19595D50)
#define CLASS_1_455008579EB95638_71_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19595B50)
#define CLASS_1_455008579EB95638_71_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19595D70)
#define CLASS_1_455008579EB95638_71_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19595D60)
#define CLASS_1_455008579EB95638_71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19595BB0)
#define CLASS_1_455008579EB95638_71_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19596070)
#define CLASS_1_455008579EB95638_71_WRITETO_OFFSET UNITYSDK_OFFSET(0x195960D0)
#define CLASS_1_455008579EB95638_71__CCTOR_OFFSET UNITYSDK_OFFSET(0x19596500)
#define CLASS_1_455008579EB95638_71__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19595C10)
#define CLASS_1_455008579EB95638_71__CTOR_OFFSET UNITYSDK_OFFSET(0x19595BC0)

inline static constexpr unsigned int Class_1_455008579EB95638_71_TypeDefinitionIndex = 29829;

class Class_1_455008579EB95638_71 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_71*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_71*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_71_TypeDefinitionIndex)->GetStaticField(0x4F150);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_71_TypeDefinitionIndex)->GetStaticField(0x4F158);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_FE6CD7C4A65B646F_6* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_71*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_71*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_71*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_71* Clone()
	{
		return ((::Class_1_455008579EB95638_71*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_CLONE_OFFSET))(this);
	}

	::Class_1_FE6CD7C4A65B646F_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FE6CD7C4A65B646F_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FE6CD7C4A65B646F_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_6*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_71*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_71*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_71_MERGEFROM_1_OFFSET))(this, a1);
	}
};
