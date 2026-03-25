#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_290D9E9A5FA9F40F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181490C0)
#define CLASS_1_290D9E9A5FA9F40F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18148C40)
#define CLASS_1_290D9E9A5FA9F40F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18148DA0)
#define CLASS_1_290D9E9A5FA9F40F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18148CC0)
#define CLASS_1_290D9E9A5FA9F40F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18148E80)
#define CLASS_1_290D9E9A5FA9F40F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18149280)
#define CLASS_1_290D9E9A5FA9F40F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181491D0)
#define CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18148C70)
#define CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18148C90)
#define CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x18148CB0)
#define CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x18148CA0)
#define CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18148C80)
#define CLASS_1_290D9E9A5FA9F40F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18148B20)
#define CLASS_1_290D9E9A5FA9F40F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18148F90)
#define CLASS_1_290D9E9A5FA9F40F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18148FF0)
#define CLASS_1_290D9E9A5FA9F40F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x181493A0)
#define CLASS_1_290D9E9A5FA9F40F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18148B80)
#define CLASS_1_290D9E9A5FA9F40F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18148B30)

inline static constexpr unsigned int Class_1_290D9E9A5FA9F40F_1_TypeDefinitionIndex = 25640;

class Class_1_290D9E9A5FA9F40F_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_290D9E9A5FA9F40F_1_TypeDefinitionIndex)->GetStaticField(0x4F30);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::Proto::ItemList* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_290D9E9A5FA9F40F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F_1*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_290D9E9A5FA9F40F_1* Clone()
	{
		return ((::Class_1_290D9E9A5FA9F40F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_290D9E9A5FA9F40F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F_1*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_290D9E9A5FA9F40F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F_1*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
