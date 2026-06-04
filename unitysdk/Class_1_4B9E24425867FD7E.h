#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_19;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4B9E24425867FD7E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A639E20)
#define CLASS_1_4B9E24425867FD7E_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6398B0)
#define CLASS_1_4B9E24425867FD7E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6399F0)
#define CLASS_1_4B9E24425867FD7E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A639990)
#define CLASS_1_4B9E24425867FD7E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A639B00)
#define CLASS_1_4B9E24425867FD7E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A63A000)
#define CLASS_1_4B9E24425867FD7E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A639F70)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A639690)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A639930)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1A639940)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_AA645B8654F862A0_OFFSET UNITYSDK_OFFSET(0x1A639920)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A639910)
#define CLASS_1_4B9E24425867FD7E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A639900)
#define CLASS_1_4B9E24425867FD7E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6396F0)
#define CLASS_1_4B9E24425867FD7E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A639C80)
#define CLASS_1_4B9E24425867FD7E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A639CE0)
#define CLASS_1_4B9E24425867FD7E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63A2A0)
#define CLASS_1_4B9E24425867FD7E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A639790)
#define CLASS_1_4B9E24425867FD7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A639700)

inline static constexpr unsigned int Class_1_4B9E24425867FD7E_TypeDefinitionIndex = 24024;

class Class_1_4B9E24425867FD7E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4B9E24425867FD7E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4B9E24425867FD7E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B9E24425867FD7E_TypeDefinitionIndex)->GetStaticField(0x26920);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_D17272E82AE804C2_19*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B9E24425867FD7E_TypeDefinitionIndex)->GetStaticField(0x26928);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_19*>* Field_1_6; // 0x18
	::Google::Protobuf::ByteString* Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4B9E24425867FD7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B9E24425867FD7E*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4B9E24425867FD7E*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4B9E24425867FD7E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4B9E24425867FD7E* Clone()
	{
		return ((::Class_1_4B9E24425867FD7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_19*>* Method_1_AA645B8654F862A0()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::Class_1_D17272E82AE804C2_19*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_AA645B8654F862A0_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4B9E24425867FD7E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4B9E24425867FD7E*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4B9E24425867FD7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B9E24425867FD7E*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4B9E24425867FD7E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
