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
namespace System { class String; }

#define CLASS_1_DD86BEE7FF755B17_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9DD110)
#define CLASS_1_DD86BEE7FF755B17_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9DCC70)
#define CLASS_1_DD86BEE7FF755B17_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9DCDD0)
#define CLASS_1_DD86BEE7FF755B17_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9DCCD0)
#define CLASS_1_DD86BEE7FF755B17_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9DCEC0)
#define CLASS_1_DD86BEE7FF755B17_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9DD2A0)
#define CLASS_1_DD86BEE7FF755B17_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9DD250)
#define CLASS_1_DD86BEE7FF755B17_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1D9DCCC0)
#define CLASS_1_DD86BEE7FF755B17_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D9DCCA0)
#define CLASS_1_DD86BEE7FF755B17_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9DCB50)
#define CLASS_1_DD86BEE7FF755B17_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1D9DCCB0)
#define CLASS_1_DD86BEE7FF755B17_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9DCB80)
#define CLASS_1_DD86BEE7FF755B17_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9DCFD0)
#define CLASS_1_DD86BEE7FF755B17_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9DD030)
#define CLASS_1_DD86BEE7FF755B17_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD450)
#define CLASS_1_DD86BEE7FF755B17_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9DCBE0)
#define CLASS_1_DD86BEE7FF755B17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DCB90)

inline static constexpr unsigned int Class_1_DD86BEE7FF755B17_1_TypeDefinitionIndex = 33485;

class Class_1_DD86BEE7FF755B17_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DD86BEE7FF755B17_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DD86BEE7FF755B17_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD86BEE7FF755B17_1_TypeDefinitionIndex)->GetStaticField(0x145C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD86BEE7FF755B17_1_TypeDefinitionIndex)->GetStaticField(0x145C8);
	}
	// static const ::System::Int32 IPAMJEJOGBG = 0x6; // 0x0
	// static const ::System::Int32 GEMDHFJFBHD = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt64 JEHBHEOHGLN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DD86BEE7FF755B17_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD86BEE7FF755B17_1*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DD86BEE7FF755B17_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DD86BEE7FF755B17_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DD86BEE7FF755B17_1* Clone()
	{
		return ((::Class_1_DD86BEE7FF755B17_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DD86BEE7FF755B17_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DD86BEE7FF755B17_1*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DD86BEE7FF755B17_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD86BEE7FF755B17_1*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DD86BEE7FF755B17_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
