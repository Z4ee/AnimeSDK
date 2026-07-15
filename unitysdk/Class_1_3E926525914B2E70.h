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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_3E926525914B2E70_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF69ED0)
#define CLASS_1_3E926525914B2E70_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF69850)
#define CLASS_1_3E926525914B2E70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF69960)
#define CLASS_1_3E926525914B2E70_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF69930)
#define CLASS_1_3E926525914B2E70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF69AA0)
#define CLASS_1_3E926525914B2E70_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF6A2D0)
#define CLASS_1_3E926525914B2E70_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF6A200)
#define CLASS_1_3E926525914B2E70_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CF69910)
#define CLASS_1_3E926525914B2E70_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF698A0)
#define CLASS_1_3E926525914B2E70_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x1CF698D0)
#define CLASS_1_3E926525914B2E70_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CF69890)
#define CLASS_1_3E926525914B2E70_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CF698E0)
#define CLASS_1_3E926525914B2E70_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF696F0)
#define CLASS_1_3E926525914B2E70_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1CF69900)
#define CLASS_1_3E926525914B2E70_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1CF698F0)
#define CLASS_1_3E926525914B2E70_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CF69920)
#define CLASS_1_3E926525914B2E70_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF698B0)
#define CLASS_1_3E926525914B2E70_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x1CF698C0)
#define CLASS_1_3E926525914B2E70_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CF69880)
#define CLASS_1_3E926525914B2E70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF69720)
#define CLASS_1_3E926525914B2E70_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF69C30)
#define CLASS_1_3E926525914B2E70_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF69C90)
#define CLASS_1_3E926525914B2E70__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF6A460)
#define CLASS_1_3E926525914B2E70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF69780)
#define CLASS_1_3E926525914B2E70__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF69730)

inline static constexpr unsigned int Class_1_3E926525914B2E70_TypeDefinitionIndex = 29399;

class Class_1_3E926525914B2E70 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E926525914B2E70_TypeDefinitionIndex)->GetStaticField(0x32AD0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_3E926525914B2E70*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3E926525914B2E70*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E926525914B2E70_TypeDefinitionIndex)->GetStaticField(0x32AD8);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Proto::ItemList* Field_1_10; // 0x20
	::System::UInt64 Field_1_11; // 0x28
	::System::UInt64 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x38
	::System::UInt32 Field_1_14; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3E926525914B2E70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3E926525914B2E70*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3E926525914B2E70*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3E926525914B2E70* Clone()
	{
		return ((::Class_1_3E926525914B2E70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3E926525914B2E70* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3E926525914B2E70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3E926525914B2E70_MERGEFROM_1_OFFSET))(this, a1);
	}
};
