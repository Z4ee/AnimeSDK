#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_136;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_83178EB088CAD885_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8721D0)
#define CLASS_1_83178EB088CAD885_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1C871C30)
#define CLASS_1_83178EB088CAD885_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C871E60)
#define CLASS_1_83178EB088CAD885_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C871CD0)
#define CLASS_1_83178EB088CAD885_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C871F90)
#define CLASS_1_83178EB088CAD885_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C872410)
#define CLASS_1_83178EB088CAD885_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C872360)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C871CB0)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C871C80)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C871AB0)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C871CA0)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C871CC0)
#define CLASS_1_83178EB088CAD885_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C871C90)
#define CLASS_1_83178EB088CAD885_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C871B10)
#define CLASS_1_83178EB088CAD885_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C872000)
#define CLASS_1_83178EB088CAD885_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C872060)
#define CLASS_1_83178EB088CAD885_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C872600)
#define CLASS_1_83178EB088CAD885_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C871B70)
#define CLASS_1_83178EB088CAD885_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1C871B20)

inline static constexpr unsigned int Class_1_83178EB088CAD885_14_TypeDefinitionIndex = 33196;

class Class_1_83178EB088CAD885_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83178EB088CAD885_14_TypeDefinitionIndex)->GetStaticField(0x19BA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_136*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_136*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83178EB088CAD885_14_TypeDefinitionIndex)->GetStaticField(0x19BA8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_136*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_83178EB088CAD885_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_14*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_83178EB088CAD885_14* Clone()
	{
		return ((::Class_1_83178EB088CAD885_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_136*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_136*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_83178EB088CAD885_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83178EB088CAD885_14*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_83178EB088CAD885_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_14*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
