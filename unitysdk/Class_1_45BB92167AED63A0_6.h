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

#define CLASS_1_45BB92167AED63A0_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6E0E20)
#define CLASS_1_45BB92167AED63A0_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6E0920)
#define CLASS_1_45BB92167AED63A0_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6E0A70)
#define CLASS_1_45BB92167AED63A0_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6E0990)
#define CLASS_1_45BB92167AED63A0_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6E0B20)
#define CLASS_1_45BB92167AED63A0_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6E0F50)
#define CLASS_1_45BB92167AED63A0_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6E0EF0)
#define CLASS_1_45BB92167AED63A0_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6E0740)
#define CLASS_1_45BB92167AED63A0_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A6E0980)
#define CLASS_1_45BB92167AED63A0_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A6E0970)
#define CLASS_1_45BB92167AED63A0_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6E07A0)
#define CLASS_1_45BB92167AED63A0_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6E0CE0)
#define CLASS_1_45BB92167AED63A0_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6E0D40)
#define CLASS_1_45BB92167AED63A0_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6E1090)
#define CLASS_1_45BB92167AED63A0_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6E0840)
#define CLASS_1_45BB92167AED63A0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E07B0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_6_TypeDefinitionIndex = 24102;

class Class_1_45BB92167AED63A0_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_6_TypeDefinitionIndex)->GetStaticField(0x18730);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_6_TypeDefinitionIndex)->GetStaticField(0x18738);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_6_TypeDefinitionIndex)->GetStaticField(0x18740);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_6*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_6* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_6*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_6*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
