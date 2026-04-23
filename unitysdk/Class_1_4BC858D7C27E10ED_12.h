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

#define CLASS_1_4BC858D7C27E10ED_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19959DA0)
#define CLASS_1_4BC858D7C27E10ED_12_CLONE_OFFSET UNITYSDK_OFFSET(0x19959820)
#define CLASS_1_4BC858D7C27E10ED_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19959930)
#define CLASS_1_4BC858D7C27E10ED_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x199598D0)
#define CLASS_1_4BC858D7C27E10ED_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199599F0)
#define CLASS_1_4BC858D7C27E10ED_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19959FB0)
#define CLASS_1_4BC858D7C27E10ED_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19959F40)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19959890)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19959870)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19959630)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x199598C0)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x199598B0)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x199598A0)
#define CLASS_1_4BC858D7C27E10ED_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19959880)
#define CLASS_1_4BC858D7C27E10ED_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19959690)
#define CLASS_1_4BC858D7C27E10ED_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19959BE0)
#define CLASS_1_4BC858D7C27E10ED_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x19959C40)
#define CLASS_1_4BC858D7C27E10ED_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1995A100)
#define CLASS_1_4BC858D7C27E10ED_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19959730)
#define CLASS_1_4BC858D7C27E10ED_12__CTOR_OFFSET UNITYSDK_OFFSET(0x199596A0)

inline static constexpr unsigned int Class_1_4BC858D7C27E10ED_12_TypeDefinitionIndex = 25496;

class Class_1_4BC858D7C27E10ED_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_12_TypeDefinitionIndex)->GetStaticField(0x604A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_12_TypeDefinitionIndex)->GetStaticField(0x604A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_12_TypeDefinitionIndex)->GetStaticField(0x604B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4BC858D7C27E10ED_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_12*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_12* Clone()
	{
		return ((::Class_1_4BC858D7C27E10ED_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4BC858D7C27E10ED_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_12*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4BC858D7C27E10ED_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_12*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
