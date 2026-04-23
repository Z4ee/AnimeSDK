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

#define CLASS_1_45BB92167AED63A0_51_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198182A0)
#define CLASS_1_45BB92167AED63A0_51_CLONE_OFFSET UNITYSDK_OFFSET(0x19817E00)
#define CLASS_1_45BB92167AED63A0_51_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19817F10)
#define CLASS_1_45BB92167AED63A0_51_EQUALS_OFFSET UNITYSDK_OFFSET(0x19817E50)
#define CLASS_1_45BB92167AED63A0_51_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19817FC0)
#define CLASS_1_45BB92167AED63A0_51_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19818390)
#define CLASS_1_45BB92167AED63A0_51_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19818330)
#define CLASS_1_45BB92167AED63A0_51_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x19817E40)
#define CLASS_1_45BB92167AED63A0_51_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19817E30)
#define CLASS_1_45BB92167AED63A0_51_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19817C50)
#define CLASS_1_45BB92167AED63A0_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19817C80)
#define CLASS_1_45BB92167AED63A0_51_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198181A0)
#define CLASS_1_45BB92167AED63A0_51_WRITETO_OFFSET UNITYSDK_OFFSET(0x19818200)
#define CLASS_1_45BB92167AED63A0_51__CCTOR_OFFSET UNITYSDK_OFFSET(0x198184C0)
#define CLASS_1_45BB92167AED63A0_51__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19817D20)
#define CLASS_1_45BB92167AED63A0_51__CTOR_OFFSET UNITYSDK_OFFSET(0x19817C90)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_51_TypeDefinitionIndex = 28932;

class Class_1_45BB92167AED63A0_51 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_51_TypeDefinitionIndex)->GetStaticField(0x66630);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_51_TypeDefinitionIndex)->GetStaticField(0x66638);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_51*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_51*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_51_TypeDefinitionIndex)->GetStaticField(0x66640);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_51*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_51*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_51*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_51* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_51* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_51*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_51*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_51_MERGEFROM_1_OFFSET))(this, a1);
	}
};
