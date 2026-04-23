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

#define CLASS_1_4BC858D7C27E10ED_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C40080)
#define CLASS_1_4BC858D7C27E10ED_29_CLONE_OFFSET UNITYSDK_OFFSET(0x19C3FC10)
#define CLASS_1_4BC858D7C27E10ED_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C3FD80)
#define CLASS_1_4BC858D7C27E10ED_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C3FCB0)
#define CLASS_1_4BC858D7C27E10ED_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C3FE20)
#define CLASS_1_4BC858D7C27E10ED_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C40280)
#define CLASS_1_4BC858D7C27E10ED_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C40220)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C3FC90)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C3FC70)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C3FAC0)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19C3FC60)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C3FCA0)
#define CLASS_1_4BC858D7C27E10ED_29_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C3FC80)
#define CLASS_1_4BC858D7C27E10ED_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C3FB20)
#define CLASS_1_4BC858D7C27E10ED_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C3FF20)
#define CLASS_1_4BC858D7C27E10ED_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C3FF80)
#define CLASS_1_4BC858D7C27E10ED_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C40370)
#define CLASS_1_4BC858D7C27E10ED_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C3FB80)
#define CLASS_1_4BC858D7C27E10ED_29__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3FB30)

inline static constexpr unsigned int Class_1_4BC858D7C27E10ED_29_TypeDefinitionIndex = 27388;

class Class_1_4BC858D7C27E10ED_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_29_TypeDefinitionIndex)->GetStaticField(0x5BBA0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_29*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4BC858D7C27E10ED_29_TypeDefinitionIndex)->GetStaticField(0x5BBA8);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4BC858D7C27E10ED_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_29*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_29*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4BC858D7C27E10ED_29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_29* Clone()
	{
		return ((::Class_1_4BC858D7C27E10ED_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4BC858D7C27E10ED_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_29*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4BC858D7C27E10ED_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_29*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4BC858D7C27E10ED_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
