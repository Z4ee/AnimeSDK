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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_3FBC3A9231495828_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C43B80)
#define CLASS_1_3FBC3A9231495828_CLONE_OFFSET UNITYSDK_OFFSET(0x19C436F0)
#define CLASS_1_3FBC3A9231495828_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C43860)
#define CLASS_1_3FBC3A9231495828_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C43770)
#define CLASS_1_3FBC3A9231495828_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C43930)
#define CLASS_1_3FBC3A9231495828_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C43CF0)
#define CLASS_1_3FBC3A9231495828_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C43C40)
#define CLASS_1_3FBC3A9231495828_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19C43740)
#define CLASS_1_3FBC3A9231495828_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C43590)
#define CLASS_1_3FBC3A9231495828_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19C43730)
#define CLASS_1_3FBC3A9231495828_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19C43720)
#define CLASS_1_3FBC3A9231495828_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19C43760)
#define CLASS_1_3FBC3A9231495828_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19C43750)
#define CLASS_1_3FBC3A9231495828_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C435C0)
#define CLASS_1_3FBC3A9231495828_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C43A50)
#define CLASS_1_3FBC3A9231495828_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C43AB0)
#define CLASS_1_3FBC3A9231495828__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C43E10)
#define CLASS_1_3FBC3A9231495828__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C43620)
#define CLASS_1_3FBC3A9231495828__CTOR_OFFSET UNITYSDK_OFFSET(0x19C435D0)

inline static constexpr unsigned int Class_1_3FBC3A9231495828_TypeDefinitionIndex = 26210;

class Class_1_3FBC3A9231495828 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FBC3A9231495828_TypeDefinitionIndex)->GetStaticField(0x5C510);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_3FBC3A9231495828*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3FBC3A9231495828*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FBC3A9231495828_TypeDefinitionIndex)->GetStaticField(0x5C518);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Proto::ItemList* Field_1_3; // 0x20
	::System::Boolean Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3FBC3A9231495828* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3FBC3A9231495828*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3FBC3A9231495828*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3FBC3A9231495828*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3FBC3A9231495828* Clone()
	{
		return ((::Class_1_3FBC3A9231495828*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3FBC3A9231495828* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3FBC3A9231495828*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3FBC3A9231495828* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3FBC3A9231495828*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3FBC3A9231495828_MERGEFROM_1_OFFSET))(this, a1);
	}
};
