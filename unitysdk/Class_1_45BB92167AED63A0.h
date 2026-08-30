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

#define CLASS_1_45BB92167AED63A0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44CB10)
#define CLASS_1_45BB92167AED63A0_CLONE_OFFSET UNITYSDK_OFFSET(0x1E44C540)
#define CLASS_1_45BB92167AED63A0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44C700)
#define CLASS_1_45BB92167AED63A0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44C5B0)
#define CLASS_1_45BB92167AED63A0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E44C810)
#define CLASS_1_45BB92167AED63A0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44CC40)
#define CLASS_1_45BB92167AED63A0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44CBE0)
#define CLASS_1_45BB92167AED63A0_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E44C350)
#define CLASS_1_45BB92167AED63A0_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E44C5A0)
#define CLASS_1_45BB92167AED63A0_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E44C590)
#define CLASS_1_45BB92167AED63A0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44C3B0)
#define CLASS_1_45BB92167AED63A0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44C9D0)
#define CLASS_1_45BB92167AED63A0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44CA30)
#define CLASS_1_45BB92167AED63A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44CD80)
#define CLASS_1_45BB92167AED63A0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44C450)
#define CLASS_1_45BB92167AED63A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E44C3C0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_TypeDefinitionIndex = 24787;

class Class_1_45BB92167AED63A0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_TypeDefinitionIndex)->GetStaticField(0x401A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HAIKNOLDMMF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_TypeDefinitionIndex)->GetStaticField(0x401A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EIAHOCECCNK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_TypeDefinitionIndex)->GetStaticField(0x401B0);
	}
	// static const ::System::Int32 CJCIBNGNGNC = 0x1; // 0x0
	// static const ::System::Int32 CHOCGECCOAD = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDDPICFEDDB; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGONJHMIAAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0* Clone()
	{
		return ((::Class_1_45BB92167AED63A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
