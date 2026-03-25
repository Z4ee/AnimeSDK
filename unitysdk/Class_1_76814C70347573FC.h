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

#define CLASS_1_76814C70347573FC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BE51B0)
#define CLASS_1_76814C70347573FC_CLONE_OFFSET UNITYSDK_OFFSET(0x17BE4CA0)
#define CLASS_1_76814C70347573FC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BE4DB0)
#define CLASS_1_76814C70347573FC_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BE4D80)
#define CLASS_1_76814C70347573FC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BE4EB0)
#define CLASS_1_76814C70347573FC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BE55C0)
#define CLASS_1_76814C70347573FC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BE54F0)
#define CLASS_1_76814C70347573FC_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17BE4D60)
#define CLASS_1_76814C70347573FC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BE4D40)
#define CLASS_1_76814C70347573FC_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17BE4D20)
#define CLASS_1_76814C70347573FC_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17BE4CE0)
#define CLASS_1_76814C70347573FC_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17BE4D30)
#define CLASS_1_76814C70347573FC_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17BE4D00)
#define CLASS_1_76814C70347573FC_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17BE4CF0)
#define CLASS_1_76814C70347573FC_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17BE4D70)
#define CLASS_1_76814C70347573FC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BE4D50)
#define CLASS_1_76814C70347573FC_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17BE4D10)
#define CLASS_1_76814C70347573FC_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17BE4CD0)
#define CLASS_1_76814C70347573FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BE4B60)
#define CLASS_1_76814C70347573FC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BE5000)
#define CLASS_1_76814C70347573FC_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BE5060)
#define CLASS_1_76814C70347573FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BE5740)
#define CLASS_1_76814C70347573FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BE4BC0)
#define CLASS_1_76814C70347573FC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE4B70)

inline static constexpr unsigned int Class_1_76814C70347573FC_TypeDefinitionIndex = 25379;

class Class_1_76814C70347573FC : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76814C70347573FC_TypeDefinitionIndex)->GetStaticField(0x23FB0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Proto::ItemList* Field_1_4; // 0x20
	::System::UInt64 Field_1_2; // 0x28
	::System::UInt32 Field_1_13; // 0x30
	::System::UInt32 Field_1_11; // 0x34
	::System::UInt64 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_76814C70347573FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76814C70347573FC*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_76814C70347573FC* Clone()
	{
		return ((::Class_1_76814C70347573FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_76814C70347573FC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_76814C70347573FC*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_76814C70347573FC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76814C70347573FC*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76814C70347573FC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
