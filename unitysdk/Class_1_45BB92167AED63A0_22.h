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

#define CLASS_1_45BB92167AED63A0_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9490F0)
#define CLASS_1_45BB92167AED63A0_22_CLONE_OFFSET UNITYSDK_OFFSET(0x1E948C60)
#define CLASS_1_45BB92167AED63A0_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E948DC0)
#define CLASS_1_45BB92167AED63A0_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E948CC0)
#define CLASS_1_45BB92167AED63A0_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E948EB0)
#define CLASS_1_45BB92167AED63A0_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E949230)
#define CLASS_1_45BB92167AED63A0_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9491E0)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E948CA0)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E948C90)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E948B40)
#define CLASS_1_45BB92167AED63A0_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E948CB0)
#define CLASS_1_45BB92167AED63A0_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E948B70)
#define CLASS_1_45BB92167AED63A0_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E948FB0)
#define CLASS_1_45BB92167AED63A0_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E949010)
#define CLASS_1_45BB92167AED63A0_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9493F0)
#define CLASS_1_45BB92167AED63A0_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E948BD0)
#define CLASS_1_45BB92167AED63A0_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1E948B80)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_22_TypeDefinitionIndex = 27063;

class Class_1_45BB92167AED63A0_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LLFMJBMCIHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_22_TypeDefinitionIndex)->GetStaticField(0x38540);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_22_TypeDefinitionIndex)->GetStaticField(0x38548);
	}
	// static const ::System::Int32 OGKEGBEIFFP = 0x5; // 0x0
	// static const ::System::Int32 EEMPBGGOLOO = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 OJGKLENJPDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_22*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_22* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_22*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
