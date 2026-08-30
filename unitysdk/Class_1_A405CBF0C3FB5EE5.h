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

#define CLASS_1_A405CBF0C3FB5EE5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85CF00)
#define CLASS_1_A405CBF0C3FB5EE5_CLONE_OFFSET UNITYSDK_OFFSET(0x1E85C8B0)
#define CLASS_1_A405CBF0C3FB5EE5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E85CA50)
#define CLASS_1_A405CBF0C3FB5EE5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E85C930)
#define CLASS_1_A405CBF0C3FB5EE5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E85CC00)
#define CLASS_1_A405CBF0C3FB5EE5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85D0D0)
#define CLASS_1_A405CBF0C3FB5EE5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85D020)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E85C8E0)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E85C920)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E85C750)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E85C910)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E85C900)
#define CLASS_1_A405CBF0C3FB5EE5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E85C8F0)
#define CLASS_1_A405CBF0C3FB5EE5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E85C780)
#define CLASS_1_A405CBF0C3FB5EE5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E85CD70)
#define CLASS_1_A405CBF0C3FB5EE5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85CDD0)
#define CLASS_1_A405CBF0C3FB5EE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85D1F0)
#define CLASS_1_A405CBF0C3FB5EE5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E85C7E0)
#define CLASS_1_A405CBF0C3FB5EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85C790)

inline static constexpr unsigned int Class_1_A405CBF0C3FB5EE5_TypeDefinitionIndex = 26119;

class Class_1_A405CBF0C3FB5EE5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ALEJKEIOAAE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A405CBF0C3FB5EE5_TypeDefinitionIndex)->GetStaticField(0x5BCD0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A405CBF0C3FB5EE5_TypeDefinitionIndex)->GetStaticField(0x5BCD8);
	}
	// static const ::System::Int32 DHHMBIGBCEG = 0xB; // 0x0
	// static const ::System::Int32 EBMIJAAKMMH = 0x9; // 0x0
	// static const ::System::Int32 DDJBILIACCH = 0x5; // 0x0
	::Proto::ItemList* JDAFJANAEBG; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDKFHJOFFPM; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::UInt32 GBHALKHPMCE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A405CBF0C3FB5EE5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A405CBF0C3FB5EE5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A405CBF0C3FB5EE5* Clone()
	{
		return ((::Class_1_A405CBF0C3FB5EE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A405CBF0C3FB5EE5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A405CBF0C3FB5EE5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A405CBF0C3FB5EE5*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A405CBF0C3FB5EE5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
