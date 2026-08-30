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

#define CLASS_1_45BB92167AED63A0_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C5F50)
#define CLASS_1_45BB92167AED63A0_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C5A50)
#define CLASS_1_45BB92167AED63A0_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C5C00)
#define CLASS_1_45BB92167AED63A0_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C5AD0)
#define CLASS_1_45BB92167AED63A0_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C5CF0)
#define CLASS_1_45BB92167AED63A0_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C60D0)
#define CLASS_1_45BB92167AED63A0_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C6080)
#define CLASS_1_45BB92167AED63A0_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E2C5AB0)
#define CLASS_1_45BB92167AED63A0_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E2C5900)
#define CLASS_1_45BB92167AED63A0_14_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E2C5AA0)
#define CLASS_1_45BB92167AED63A0_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E2C5AC0)
#define CLASS_1_45BB92167AED63A0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5960)
#define CLASS_1_45BB92167AED63A0_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C5DF0)
#define CLASS_1_45BB92167AED63A0_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C5E50)
#define CLASS_1_45BB92167AED63A0_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C62A0)
#define CLASS_1_45BB92167AED63A0_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C59C0)
#define CLASS_1_45BB92167AED63A0_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5970)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_14_TypeDefinitionIndex = 26312;

class Class_1_45BB92167AED63A0_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_14*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_14_TypeDefinitionIndex)->GetStaticField(0x41C50);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_14_TypeDefinitionIndex)->GetStaticField(0x41C58);
	}
	// static const ::System::Int32 CPBPPPJBFGH = 0xB; // 0x0
	// static const ::System::Int32 IAGKJCCNIHF = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 OMKCOMCNOFP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_14*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_14* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_14*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_14*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
