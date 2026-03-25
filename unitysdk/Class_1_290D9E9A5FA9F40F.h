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

#define CLASS_1_290D9E9A5FA9F40F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18004A60)
#define CLASS_1_290D9E9A5FA9F40F_CLONE_OFFSET UNITYSDK_OFFSET(0x18004570)
#define CLASS_1_290D9E9A5FA9F40F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18004700)
#define CLASS_1_290D9E9A5FA9F40F_EQUALS_OFFSET UNITYSDK_OFFSET(0x18004610)
#define CLASS_1_290D9E9A5FA9F40F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180047E0)
#define CLASS_1_290D9E9A5FA9F40F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18004CB0)
#define CLASS_1_290D9E9A5FA9F40F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18004BF0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180045E0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180045A0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18004600)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x180045D0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x180045C0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180045F0)
#define CLASS_1_290D9E9A5FA9F40F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180045B0)
#define CLASS_1_290D9E9A5FA9F40F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18004440)
#define CLASS_1_290D9E9A5FA9F40F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18004900)
#define CLASS_1_290D9E9A5FA9F40F_WRITETO_OFFSET UNITYSDK_OFFSET(0x18004960)
#define CLASS_1_290D9E9A5FA9F40F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18004DE0)
#define CLASS_1_290D9E9A5FA9F40F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180044A0)
#define CLASS_1_290D9E9A5FA9F40F__CTOR_OFFSET UNITYSDK_OFFSET(0x18004450)

inline static constexpr unsigned int Class_1_290D9E9A5FA9F40F_TypeDefinitionIndex = 23580;

class Class_1_290D9E9A5FA9F40F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_290D9E9A5FA9F40F_TypeDefinitionIndex)->GetStaticField(0x40670);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Proto::ItemList* Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_290D9E9A5FA9F40F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_290D9E9A5FA9F40F* Clone()
	{
		return ((::Class_1_290D9E9A5FA9F40F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_290D9E9A5FA9F40F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_290D9E9A5FA9F40F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_290D9E9A5FA9F40F*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_290D9E9A5FA9F40F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
