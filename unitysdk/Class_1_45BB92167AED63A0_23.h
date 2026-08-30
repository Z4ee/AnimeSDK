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

#define CLASS_1_45BB92167AED63A0_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA8F0B0)
#define CLASS_1_45BB92167AED63A0_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA8EBA0)
#define CLASS_1_45BB92167AED63A0_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA8ED50)
#define CLASS_1_45BB92167AED63A0_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA8EC20)
#define CLASS_1_45BB92167AED63A0_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA8EE40)
#define CLASS_1_45BB92167AED63A0_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA8F230)
#define CLASS_1_45BB92167AED63A0_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA8F1E0)
#define CLASS_1_45BB92167AED63A0_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DA8EC00)
#define CLASS_1_45BB92167AED63A0_23_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DA8EA50)
#define CLASS_1_45BB92167AED63A0_23_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DA8EBF0)
#define CLASS_1_45BB92167AED63A0_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DA8EC10)
#define CLASS_1_45BB92167AED63A0_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA8EAB0)
#define CLASS_1_45BB92167AED63A0_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA8EF40)
#define CLASS_1_45BB92167AED63A0_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA8EFA0)
#define CLASS_1_45BB92167AED63A0_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA8F410)
#define CLASS_1_45BB92167AED63A0_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA8EB10)
#define CLASS_1_45BB92167AED63A0_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8EAC0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_23_TypeDefinitionIndex = 26678;

class Class_1_45BB92167AED63A0_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_23*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_23_TypeDefinitionIndex)->GetStaticField(0x1B850);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KFNNGCEBINO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_23_TypeDefinitionIndex)->GetStaticField(0x1B858);
	}
	// static const ::System::Int32 GGPJMDJHGOK = 0x5; // 0x0
	// static const ::System::Int32 OJBCBIEJBOJ = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLBJJNGOIDA; // 0x18
	::System::UInt32 BPHAEJMMPGF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_23*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_23*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_23* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_23*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_23*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
