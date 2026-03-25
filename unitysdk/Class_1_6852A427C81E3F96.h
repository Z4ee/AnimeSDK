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

#define CLASS_1_6852A427C81E3F96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DA7790)
#define CLASS_1_6852A427C81E3F96_CLONE_OFFSET UNITYSDK_OFFSET(0x17DA72F0)
#define CLASS_1_6852A427C81E3F96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DA7460)
#define CLASS_1_6852A427C81E3F96_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DA7370)
#define CLASS_1_6852A427C81E3F96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DA7530)
#define CLASS_1_6852A427C81E3F96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DA78F0)
#define CLASS_1_6852A427C81E3F96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DA7840)
#define CLASS_1_6852A427C81E3F96_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17DA7360)
#define CLASS_1_6852A427C81E3F96_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17DA7330)
#define CLASS_1_6852A427C81E3F96_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17DA7320)
#define CLASS_1_6852A427C81E3F96_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17DA7350)
#define CLASS_1_6852A427C81E3F96_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17DA7340)
#define CLASS_1_6852A427C81E3F96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DA71D0)
#define CLASS_1_6852A427C81E3F96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DA7660)
#define CLASS_1_6852A427C81E3F96_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DA76C0)
#define CLASS_1_6852A427C81E3F96__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DA7A10)
#define CLASS_1_6852A427C81E3F96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DA7230)
#define CLASS_1_6852A427C81E3F96__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA71E0)

inline static constexpr unsigned int Class_1_6852A427C81E3F96_TypeDefinitionIndex = 24091;

class Class_1_6852A427C81E3F96 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6852A427C81E3F96_TypeDefinitionIndex)->GetStaticField(0x18520);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6852A427C81E3F96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6852A427C81E3F96* Clone()
	{
		return ((::Class_1_6852A427C81E3F96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6852A427C81E3F96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6852A427C81E3F96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6852A427C81E3F96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
