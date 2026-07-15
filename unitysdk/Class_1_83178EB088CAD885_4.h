#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22B4C7CF09D1BAC1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_83178EB088CAD885_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB22F30)
#define CLASS_1_83178EB088CAD885_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1C577DF0)
#define CLASS_1_83178EB088CAD885_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C578020)
#define CLASS_1_83178EB088CAD885_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C577E90)
#define CLASS_1_83178EB088CAD885_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C578150)
#define CLASS_1_83178EB088CAD885_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB23170)
#define CLASS_1_83178EB088CAD885_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB230C0)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C577E70)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C577E40)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C577C70)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C577E60)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C577E80)
#define CLASS_1_83178EB088CAD885_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C577E50)
#define CLASS_1_83178EB088CAD885_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C577CD0)
#define CLASS_1_83178EB088CAD885_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5781C0)
#define CLASS_1_83178EB088CAD885_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB22DD0)
#define CLASS_1_83178EB088CAD885_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB23360)
#define CLASS_1_83178EB088CAD885_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C577D30)
#define CLASS_1_83178EB088CAD885_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C577CE0)

inline static constexpr unsigned int Class_1_83178EB088CAD885_4_TypeDefinitionIndex = 27979;

class Class_1_83178EB088CAD885_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83178EB088CAD885_4_TypeDefinitionIndex)->GetStaticField(0x61200);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_22B4C7CF09D1BAC1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_22B4C7CF09D1BAC1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83178EB088CAD885_4_TypeDefinitionIndex)->GetStaticField(0x61208);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_22B4C7CF09D1BAC1*>* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_83178EB088CAD885_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_4*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_83178EB088CAD885_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_83178EB088CAD885_4* Clone()
	{
		return ((::Class_1_83178EB088CAD885_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_22B4C7CF09D1BAC1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_22B4C7CF09D1BAC1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_83178EB088CAD885_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_83178EB088CAD885_4*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_83178EB088CAD885_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_4*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_83178EB088CAD885_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
