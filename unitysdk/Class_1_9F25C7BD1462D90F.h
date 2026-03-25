#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFFE981EB501B7BD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9F25C7BD1462D90F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F3B470)
#define CLASS_1_9F25C7BD1462D90F_CLONE_OFFSET UNITYSDK_OFFSET(0x17F3B010)
#define CLASS_1_9F25C7BD1462D90F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F3B140)
#define CLASS_1_9F25C7BD1462D90F_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F3B070)
#define CLASS_1_9F25C7BD1462D90F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F3B210)
#define CLASS_1_9F25C7BD1462D90F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F3B590)
#define CLASS_1_9F25C7BD1462D90F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F3B510)
#define CLASS_1_9F25C7BD1462D90F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F3B050)
#define CLASS_1_9F25C7BD1462D90F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F3B040)
#define CLASS_1_9F25C7BD1462D90F_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F3B060)
#define CLASS_1_9F25C7BD1462D90F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F3AE90)
#define CLASS_1_9F25C7BD1462D90F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F3B370)
#define CLASS_1_9F25C7BD1462D90F_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F3B3D0)
#define CLASS_1_9F25C7BD1462D90F__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F3B660)
#define CLASS_1_9F25C7BD1462D90F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F3AEF0)
#define CLASS_1_9F25C7BD1462D90F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3AEA0)

inline static constexpr unsigned int Class_1_9F25C7BD1462D90F_TypeDefinitionIndex = 26557;

class Class_1_9F25C7BD1462D90F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F25C7BD1462D90F_TypeDefinitionIndex)->GetStaticField(0x31480);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Class_1_EFFE981EB501B7BD* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9F25C7BD1462D90F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F25C7BD1462D90F*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9F25C7BD1462D90F* Clone()
	{
		return ((::Class_1_9F25C7BD1462D90F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_EFFE981EB501B7BD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EFFE981EB501B7BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EFFE981EB501B7BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFFE981EB501B7BD*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9F25C7BD1462D90F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9F25C7BD1462D90F*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9F25C7BD1462D90F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F25C7BD1462D90F*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F25C7BD1462D90F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
