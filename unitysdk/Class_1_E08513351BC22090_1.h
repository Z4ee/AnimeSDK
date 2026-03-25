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

#define CLASS_1_E08513351BC22090_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DF95F0)
#define CLASS_1_E08513351BC22090_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17DF9080)
#define CLASS_1_E08513351BC22090_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DF9140)
#define CLASS_1_E08513351BC22090_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DF9110)
#define CLASS_1_E08513351BC22090_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DF9240)
#define CLASS_1_E08513351BC22090_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DF98E0)
#define CLASS_1_E08513351BC22090_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DF9810)
#define CLASS_1_E08513351BC22090_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DF90F0)
#define CLASS_1_E08513351BC22090_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17DF90E0)
#define CLASS_1_E08513351BC22090_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17DF90B0)
#define CLASS_1_E08513351BC22090_1_METHOD_1_6E8EADC4D1FD06E5_OFFSET UNITYSDK_OFFSET(0x17DF90C0)
#define CLASS_1_E08513351BC22090_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DF9100)
#define CLASS_1_E08513351BC22090_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17DF90D0)
#define CLASS_1_E08513351BC22090_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DF8F00)
#define CLASS_1_E08513351BC22090_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DF9430)
#define CLASS_1_E08513351BC22090_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DF9490)
#define CLASS_1_E08513351BC22090_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DF9A10)
#define CLASS_1_E08513351BC22090_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DF8F80)
#define CLASS_1_E08513351BC22090_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF8F10)

inline static constexpr unsigned int Class_1_E08513351BC22090_1_TypeDefinitionIndex = 24277;

class Class_1_E08513351BC22090_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E08513351BC22090_1_TypeDefinitionIndex)->GetStaticField(0x1EF00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E08513351BC22090_1_TypeDefinitionIndex)->GetStaticField(0x1EF08);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Int64 Field_1_8; // 0x28
	::System::UInt32 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E08513351BC22090_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E08513351BC22090_1*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E08513351BC22090_1* Clone()
	{
		return ((::Class_1_E08513351BC22090_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* Method_1_6E8EADC4D1FD06E5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_6E8EADC4D1FD06E5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E08513351BC22090_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E08513351BC22090_1*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E08513351BC22090_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E08513351BC22090_1*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E08513351BC22090_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
