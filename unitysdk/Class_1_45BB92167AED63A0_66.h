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

#define CLASS_1_45BB92167AED63A0_66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0DB80)
#define CLASS_1_45BB92167AED63A0_66_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE0D5B0)
#define CLASS_1_45BB92167AED63A0_66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0D770)
#define CLASS_1_45BB92167AED63A0_66_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0D620)
#define CLASS_1_45BB92167AED63A0_66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0D880)
#define CLASS_1_45BB92167AED63A0_66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0DCB0)
#define CLASS_1_45BB92167AED63A0_66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0DC50)
#define CLASS_1_45BB92167AED63A0_66_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE0D3C0)
#define CLASS_1_45BB92167AED63A0_66_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1DE0D610)
#define CLASS_1_45BB92167AED63A0_66_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DE0D600)
#define CLASS_1_45BB92167AED63A0_66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D420)
#define CLASS_1_45BB92167AED63A0_66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0DA40)
#define CLASS_1_45BB92167AED63A0_66_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0DAA0)
#define CLASS_1_45BB92167AED63A0_66__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0DDF0)
#define CLASS_1_45BB92167AED63A0_66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE0D4C0)
#define CLASS_1_45BB92167AED63A0_66__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D430)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_66_TypeDefinitionIndex = 31014;

class Class_1_45BB92167AED63A0_66 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HGIPALFPGOG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_66_TypeDefinitionIndex)->GetStaticField(0x12370);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GIEAFENMDAO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_66_TypeDefinitionIndex)->GetStaticField(0x12378);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_66*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_66_TypeDefinitionIndex)->GetStaticField(0x12380);
	}
	// static const ::System::Int32 PGNPGPPHPAM = 0x9; // 0x0
	// static const ::System::Int32 CMGDNDJFMKC = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPKGDIKMLOI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHJCGOPKLON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_66*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_66*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_66*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_66* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_66*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_66*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
