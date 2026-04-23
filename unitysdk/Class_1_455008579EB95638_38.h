#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194372B0)
#define CLASS_1_455008579EB95638_38_CLONE_OFFSET UNITYSDK_OFFSET(0x19436DF0)
#define CLASS_1_455008579EB95638_38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19436EC0)
#define CLASS_1_455008579EB95638_38_EQUALS_OFFSET UNITYSDK_OFFSET(0x19436E60)
#define CLASS_1_455008579EB95638_38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19436FA0)
#define CLASS_1_455008579EB95638_38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19437440)
#define CLASS_1_455008579EB95638_38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19437390)
#define CLASS_1_455008579EB95638_38_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19436BD0)
#define CLASS_1_455008579EB95638_38_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19436E50)
#define CLASS_1_455008579EB95638_38_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19436E40)
#define CLASS_1_455008579EB95638_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19436C30)
#define CLASS_1_455008579EB95638_38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19437170)
#define CLASS_1_455008579EB95638_38_WRITETO_OFFSET UNITYSDK_OFFSET(0x194371D0)
#define CLASS_1_455008579EB95638_38__CCTOR_OFFSET UNITYSDK_OFFSET(0x19437560)
#define CLASS_1_455008579EB95638_38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19436CD0)
#define CLASS_1_455008579EB95638_38__CTOR_OFFSET UNITYSDK_OFFSET(0x19436C40)

inline static constexpr unsigned int Class_1_455008579EB95638_38_TypeDefinitionIndex = 27334;

class Class_1_455008579EB95638_38 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_38_TypeDefinitionIndex)->GetStaticField(0x470E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_38*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_38*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_38_TypeDefinitionIndex)->GetStaticField(0x470E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_2*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_38_TypeDefinitionIndex)->GetStaticField(0x470F0);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_2*>* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_38*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_38*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_38*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_38* Clone()
	{
		return ((::Class_1_455008579EB95638_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_38*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_38*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_38_MERGEFROM_1_OFFSET))(this, a1);
	}
};
