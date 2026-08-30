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

#define CLASS_1_B590C31C505191E5_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E185910)
#define CLASS_1_B590C31C505191E5_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1E185450)
#define CLASS_1_B590C31C505191E5_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1855B0)
#define CLASS_1_B590C31C505191E5_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1854B0)
#define CLASS_1_B590C31C505191E5_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1856B0)
#define CLASS_1_B590C31C505191E5_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1859D0)
#define CLASS_1_B590C31C505191E5_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E185980)
#define CLASS_1_B590C31C505191E5_9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E1854A0)
#define CLASS_1_B590C31C505191E5_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E185330)
#define CLASS_1_B590C31C505191E5_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E185490)
#define CLASS_1_B590C31C505191E5_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E185480)
#define CLASS_1_B590C31C505191E5_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E185360)
#define CLASS_1_B590C31C505191E5_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1857B0)
#define CLASS_1_B590C31C505191E5_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E185810)
#define CLASS_1_B590C31C505191E5_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E185B90)
#define CLASS_1_B590C31C505191E5_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1853C0)
#define CLASS_1_B590C31C505191E5_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E185370)

inline static constexpr unsigned int Class_1_B590C31C505191E5_9_TypeDefinitionIndex = 33986;

class Class_1_B590C31C505191E5_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_9_TypeDefinitionIndex)->GetStaticField(0x25E40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_9_TypeDefinitionIndex)->GetStaticField(0x25E48);
	}
	// static const ::System::Int32 JEDEAHEFIDG = 0x9; // 0x0
	// static const ::System::Int32 GEIJLLIDHFJ = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean KNDCKLFAMIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B590C31C505191E5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_9*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B590C31C505191E5_9* Clone()
	{
		return ((::Class_1_B590C31C505191E5_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B590C31C505191E5_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B590C31C505191E5_9*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B590C31C505191E5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_9*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
