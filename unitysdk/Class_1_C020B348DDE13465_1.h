#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C020B348DDE13465_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E5B6F0)
#define CLASS_1_C020B348DDE13465_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E5B2C0)
#define CLASS_1_C020B348DDE13465_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E5B410)
#define CLASS_1_C020B348DDE13465_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E5B340)
#define CLASS_1_C020B348DDE13465_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E5B4A0)
#define CLASS_1_C020B348DDE13465_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E5B8C0)
#define CLASS_1_C020B348DDE13465_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E5B870)
#define CLASS_1_C020B348DDE13465_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17E5B330)
#define CLASS_1_C020B348DDE13465_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E5B310)
#define CLASS_1_C020B348DDE13465_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17E5B320)
#define CLASS_1_C020B348DDE13465_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E5B1D0)
#define CLASS_1_C020B348DDE13465_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E5B5B0)
#define CLASS_1_C020B348DDE13465_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E5B610)
#define CLASS_1_C020B348DDE13465_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5B9A0)
#define CLASS_1_C020B348DDE13465_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E5B230)
#define CLASS_1_C020B348DDE13465_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5B1E0)

inline static constexpr unsigned int Class_1_C020B348DDE13465_1_TypeDefinitionIndex = 27128;

class Class_1_C020B348DDE13465_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C020B348DDE13465_1_TypeDefinitionIndex)->GetStaticField(0x246C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::System::UInt64 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C020B348DDE13465_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C020B348DDE13465_1*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C020B348DDE13465_1* Clone()
	{
		return ((::Class_1_C020B348DDE13465_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C020B348DDE13465_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C020B348DDE13465_1*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C020B348DDE13465_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C020B348DDE13465_1*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C020B348DDE13465_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
