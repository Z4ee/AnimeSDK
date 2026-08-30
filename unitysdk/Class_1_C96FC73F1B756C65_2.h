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

#define CLASS_1_C96FC73F1B756C65_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B9BE0)
#define CLASS_1_C96FC73F1B756C65_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B9700)
#define CLASS_1_C96FC73F1B756C65_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B9810)
#define CLASS_1_C96FC73F1B756C65_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B9780)
#define CLASS_1_C96FC73F1B756C65_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B9920)
#define CLASS_1_C96FC73F1B756C65_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B9D30)
#define CLASS_1_C96FC73F1B756C65_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B9CD0)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0B9750)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E0B9770)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0B95D0)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E0B9760)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E0B9740)
#define CLASS_1_C96FC73F1B756C65_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E0B9730)
#define CLASS_1_C96FC73F1B756C65_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B9600)
#define CLASS_1_C96FC73F1B756C65_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B9A20)
#define CLASS_1_C96FC73F1B756C65_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B9A80)
#define CLASS_1_C96FC73F1B756C65_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B9E00)
#define CLASS_1_C96FC73F1B756C65_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B9660)
#define CLASS_1_C96FC73F1B756C65_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B9610)

inline static constexpr unsigned int Class_1_C96FC73F1B756C65_2_TypeDefinitionIndex = 32942;

class Class_1_C96FC73F1B756C65_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96FC73F1B756C65_2_TypeDefinitionIndex)->GetStaticField(0x62DF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JLLFAGBEJPB()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C96FC73F1B756C65_2_TypeDefinitionIndex)->GetStaticField(0x62DF8);
	}
	// static const ::System::Int32 JOIMLOCMAMK = 0x5; // 0x0
	// static const ::System::Int32 ICKDAJBKAIM = 0xB; // 0x0
	// static const ::System::Int32 GDBFGJNNEKP = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEEBADOPGMB; // 0x18
	::System::UInt32 HIKLJGLJLIC; // 0x20
	::System::Boolean OMNLDFMILAK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C96FC73F1B756C65_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C96FC73F1B756C65_2*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C96FC73F1B756C65_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C96FC73F1B756C65_2* Clone()
	{
		return ((::Class_1_C96FC73F1B756C65_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C96FC73F1B756C65_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C96FC73F1B756C65_2*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C96FC73F1B756C65_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C96FC73F1B756C65_2*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C96FC73F1B756C65_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
