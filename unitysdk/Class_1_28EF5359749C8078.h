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

#define CLASS_1_28EF5359749C8078_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3D1590)
#define CLASS_1_28EF5359749C8078_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3D0EA0)
#define CLASS_1_28EF5359749C8078_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3D0F90)
#define CLASS_1_28EF5359749C8078_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3D0F30)
#define CLASS_1_28EF5359749C8078_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3D1090)
#define CLASS_1_28EF5359749C8078_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3D1750)
#define CLASS_1_28EF5359749C8078_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3D16C0)
#define CLASS_1_28EF5359749C8078_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A3D0B50)
#define CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A3D0F00)
#define CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1A3D0F10)
#define CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_3_OFFSET UNITYSDK_OFFSET(0x1A3D0F20)
#define CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A3D0EF0)
#define CLASS_1_28EF5359749C8078_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3D0BB0)
#define CLASS_1_28EF5359749C8078_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3D13F0)
#define CLASS_1_28EF5359749C8078_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3D1450)
#define CLASS_1_28EF5359749C8078__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3D1940)
#define CLASS_1_28EF5359749C8078__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3D0CE0)
#define CLASS_1_28EF5359749C8078__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D0BC0)

inline static constexpr unsigned int Class_1_28EF5359749C8078_TypeDefinitionIndex = 24020;

class Class_1_28EF5359749C8078 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EF5359749C8078_TypeDefinitionIndex)->GetStaticField(0x610C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EF5359749C8078_TypeDefinitionIndex)->GetStaticField(0x610C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EF5359749C8078_TypeDefinitionIndex)->GetStaticField(0x610D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EF5359749C8078_TypeDefinitionIndex)->GetStaticField(0x610D8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_28EF5359749C8078*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_28EF5359749C8078*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28EF5359749C8078_TypeDefinitionIndex)->GetStaticField(0x610E0);
	}
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28EF5359749C8078* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28EF5359749C8078*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_28EF5359749C8078*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_28EF5359749C8078*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28EF5359749C8078* Clone()
	{
		return ((::Class_1_28EF5359749C8078*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_METHOD_1_554199E0076172C5_3_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28EF5359749C8078* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28EF5359749C8078*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28EF5359749C8078* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28EF5359749C8078*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28EF5359749C8078_MERGEFROM_1_OFFSET))(this, a1);
	}
};
