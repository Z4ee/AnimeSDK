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
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_B628BD6117888CBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E512520)
#define CLASS_1_B628BD6117888CBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E512060)
#define CLASS_1_B628BD6117888CBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E512200)
#define CLASS_1_B628BD6117888CBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5120C0)
#define CLASS_1_B628BD6117888CBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E512320)
#define CLASS_1_B628BD6117888CBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E512660)
#define CLASS_1_B628BD6117888CBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5125C0)
#define CLASS_1_B628BD6117888CBA_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1E512090)
#define CLASS_1_B628BD6117888CBA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E511F50)
#define CLASS_1_B628BD6117888CBA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E5120B0)
#define CLASS_1_B628BD6117888CBA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E5120A0)
#define CLASS_1_B628BD6117888CBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E511F80)
#define CLASS_1_B628BD6117888CBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E512390)
#define CLASS_1_B628BD6117888CBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5123F0)
#define CLASS_1_B628BD6117888CBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E512820)
#define CLASS_1_B628BD6117888CBA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E511FD0)
#define CLASS_1_B628BD6117888CBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E511F90)

inline static constexpr unsigned int Class_1_B628BD6117888CBA_TypeDefinitionIndex = 29673;

class Class_1_B628BD6117888CBA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B628BD6117888CBA*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B628BD6117888CBA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B628BD6117888CBA_TypeDefinitionIndex)->GetStaticField(0x5D840);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_KMKECFIHFFA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B628BD6117888CBA_TypeDefinitionIndex)->GetStaticField(0x5D848);
	}
	// static const ::System::Int32 KHCEJKGGIGN = 0xF; // 0x0
	// static const ::System::Int32 ACAHFGLCIBE = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* OEPIMOOJHAM; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean OLHDBJLDJEJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B628BD6117888CBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B628BD6117888CBA*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B628BD6117888CBA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B628BD6117888CBA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B628BD6117888CBA* Clone()
	{
		return ((::Class_1_B628BD6117888CBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B628BD6117888CBA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B628BD6117888CBA*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B628BD6117888CBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B628BD6117888CBA*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B628BD6117888CBA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
