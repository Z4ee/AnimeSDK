#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C062240120B347B5_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E114190)
#define CLASS_1_C062240120B347B5_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E113C70)
#define CLASS_1_C062240120B347B5_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E113E30)
#define CLASS_1_C062240120B347B5_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E113CE0)
#define CLASS_1_C062240120B347B5_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E113F40)
#define CLASS_1_C062240120B347B5_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1142C0)
#define CLASS_1_C062240120B347B5_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E114260)
#define CLASS_1_C062240120B347B5_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E113AD0)
#define CLASS_1_C062240120B347B5_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E113CC0)
#define CLASS_1_C062240120B347B5_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1E113CD0)
#define CLASS_1_C062240120B347B5_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E113B30)
#define CLASS_1_C062240120B347B5_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E114050)
#define CLASS_1_C062240120B347B5_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1140B0)
#define CLASS_1_C062240120B347B5_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1144E0)
#define CLASS_1_C062240120B347B5_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E113BB0)
#define CLASS_1_C062240120B347B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E113B40)

inline static constexpr unsigned int Class_1_C062240120B347B5_1_TypeDefinitionIndex = 27824;

class Class_1_C062240120B347B5_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CFDJMLIGEAF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_1_TypeDefinitionIndex)->GetStaticField(0x415D0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_LJOLGENMNNI()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_1_TypeDefinitionIndex)->GetStaticField(0x415D8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_1_TypeDefinitionIndex)->GetStaticField(0x415E0);
	}
	// static const ::System::Int32 ALGBCHNCBEG = 0xD; // 0x0
	// static const ::System::Int32 CDBMBHGJCAA = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FNAPKPOJHFB; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IMIMICPCLNC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C062240120B347B5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5_1*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C062240120B347B5_1* Clone()
	{
		return ((::Class_1_C062240120B347B5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C062240120B347B5_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C062240120B347B5_1*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C062240120B347B5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5_1*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
