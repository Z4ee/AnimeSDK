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

#define CLASS_1_45BB92167AED63A0_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC6BC30)
#define CLASS_1_45BB92167AED63A0_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC6B730)
#define CLASS_1_45BB92167AED63A0_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC6B8E0)
#define CLASS_1_45BB92167AED63A0_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC6B7B0)
#define CLASS_1_45BB92167AED63A0_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC6B9D0)
#define CLASS_1_45BB92167AED63A0_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC6BDB0)
#define CLASS_1_45BB92167AED63A0_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC6BD60)
#define CLASS_1_45BB92167AED63A0_17_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DC6B790)
#define CLASS_1_45BB92167AED63A0_17_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DC6B5E0)
#define CLASS_1_45BB92167AED63A0_17_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DC6B780)
#define CLASS_1_45BB92167AED63A0_17_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DC6B7A0)
#define CLASS_1_45BB92167AED63A0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B640)
#define CLASS_1_45BB92167AED63A0_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC6BAD0)
#define CLASS_1_45BB92167AED63A0_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC6BB30)
#define CLASS_1_45BB92167AED63A0_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC6BF80)
#define CLASS_1_45BB92167AED63A0_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC6B6A0)
#define CLASS_1_45BB92167AED63A0_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B650)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_17_TypeDefinitionIndex = 26455;

class Class_1_45BB92167AED63A0_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_17*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_17_TypeDefinitionIndex)->GetStaticField(0x557A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMODMLGBAPL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_17_TypeDefinitionIndex)->GetStaticField(0x557A8);
	}
	// static const ::System::Int32 DLKCAAKGAJG = 0xD; // 0x0
	// static const ::System::Int32 EDGGGCNOFHI = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAFIFNEDHFF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 ABPDPMHFFNN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_17*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_17* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
