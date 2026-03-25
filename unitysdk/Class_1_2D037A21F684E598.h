#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_2D037A21F684E598_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AAA2B0)
#define CLASS_1_2D037A21F684E598_CLONE_OFFSET UNITYSDK_OFFSET(0x17AA9E60)
#define CLASS_1_2D037A21F684E598_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AA9FC0)
#define CLASS_1_2D037A21F684E598_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AA9EC0)
#define CLASS_1_2D037A21F684E598_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AAA090)
#define CLASS_1_2D037A21F684E598_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AAA3E0)
#define CLASS_1_2D037A21F684E598_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AAA340)
#define CLASS_1_2D037A21F684E598_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x17AA9EB0)
#define CLASS_1_2D037A21F684E598_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17AA9EA0)
#define CLASS_1_2D037A21F684E598_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17AA9E90)
#define CLASS_1_2D037A21F684E598_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AA9D80)
#define CLASS_1_2D037A21F684E598_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AAA180)
#define CLASS_1_2D037A21F684E598_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AAA1E0)
#define CLASS_1_2D037A21F684E598__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AAA4A0)
#define CLASS_1_2D037A21F684E598__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AA9DD0)
#define CLASS_1_2D037A21F684E598__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA9D90)

inline static constexpr unsigned int Class_1_2D037A21F684E598_TypeDefinitionIndex = 25144;

class Class_1_2D037A21F684E598 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D037A21F684E598_TypeDefinitionIndex)->GetStaticField(0x20E60);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_5; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2D037A21F684E598* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D037A21F684E598*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2D037A21F684E598* Clone()
	{
		return ((::Class_1_2D037A21F684E598*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2D037A21F684E598* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2D037A21F684E598*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2D037A21F684E598* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D037A21F684E598*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D037A21F684E598_MERGEFROM_1_OFFSET))(this, a1);
	}
};
