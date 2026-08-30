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

#define CLASS_1_C062240120B347B5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA17D60)
#define CLASS_1_C062240120B347B5_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA17840)
#define CLASS_1_C062240120B347B5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA17A00)
#define CLASS_1_C062240120B347B5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA178B0)
#define CLASS_1_C062240120B347B5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA17B10)
#define CLASS_1_C062240120B347B5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA17E90)
#define CLASS_1_C062240120B347B5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA17E30)
#define CLASS_1_C062240120B347B5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EA176A0)
#define CLASS_1_C062240120B347B5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EA17890)
#define CLASS_1_C062240120B347B5_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1EA178A0)
#define CLASS_1_C062240120B347B5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA17700)
#define CLASS_1_C062240120B347B5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA17C20)
#define CLASS_1_C062240120B347B5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA17C80)
#define CLASS_1_C062240120B347B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA180B0)
#define CLASS_1_C062240120B347B5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA17780)
#define CLASS_1_C062240120B347B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA17710)

inline static constexpr unsigned int Class_1_C062240120B347B5_TypeDefinitionIndex = 25330;

class Class_1_C062240120B347B5 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_DEHOIJAAJKH()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_TypeDefinitionIndex)->GetStaticField(0x35FD0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IJECGKIBIGA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_TypeDefinitionIndex)->GetStaticField(0x35FD8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C062240120B347B5_TypeDefinitionIndex)->GetStaticField(0x35FE0);
	}
	// static const ::System::Int32 MKPLPCJHDIH = 0x1; // 0x0
	// static const ::System::Int32 HJFIGCJNFND = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDBAJAMDGNA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OIFFIODHPMK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C062240120B347B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C062240120B347B5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C062240120B347B5* Clone()
	{
		return ((::Class_1_C062240120B347B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C062240120B347B5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C062240120B347B5*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C062240120B347B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C062240120B347B5*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C062240120B347B5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
