#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18240B30)
#define CLASS_1_99BD961747420BEB_59_CLONE_OFFSET UNITYSDK_OFFSET(0x18240660)
#define CLASS_1_99BD961747420BEB_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182407E0)
#define CLASS_1_99BD961747420BEB_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x182406E0)
#define CLASS_1_99BD961747420BEB_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182408B0)
#define CLASS_1_99BD961747420BEB_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18240CD0)
#define CLASS_1_99BD961747420BEB_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18240C10)
#define CLASS_1_99BD961747420BEB_59_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x182406C0)
#define CLASS_1_99BD961747420BEB_59_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x182406B0)
#define CLASS_1_99BD961747420BEB_59_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182406D0)
#define CLASS_1_99BD961747420BEB_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18240530)
#define CLASS_1_99BD961747420BEB_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182409F0)
#define CLASS_1_99BD961747420BEB_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x18240A50)
#define CLASS_1_99BD961747420BEB_59__CCTOR_OFFSET UNITYSDK_OFFSET(0x18240DC0)
#define CLASS_1_99BD961747420BEB_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18240590)
#define CLASS_1_99BD961747420BEB_59__CTOR_OFFSET UNITYSDK_OFFSET(0x18240540)

inline static constexpr unsigned int Class_1_99BD961747420BEB_59_TypeDefinitionIndex = 27599;

class Class_1_99BD961747420BEB_59 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_59_TypeDefinitionIndex)->GetStaticField(0x15C90);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Class_1_32044B0173B87B04_2* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_59*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_59* Clone()
	{
		return ((::Class_1_99BD961747420BEB_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_32044B0173B87B04_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_32044B0173B87B04_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_59*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_59*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
