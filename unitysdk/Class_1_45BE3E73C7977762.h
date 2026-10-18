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

#define CLASS_1_45BE3E73C7977762_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0B440)
#define CLASS_1_45BE3E73C7977762_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0AEF0)
#define CLASS_1_45BE3E73C7977762_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0AF90)
#define CLASS_1_45BE3E73C7977762_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0AF60)
#define CLASS_1_45BE3E73C7977762_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0B0B0)
#define CLASS_1_45BE3E73C7977762_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0B550)
#define CLASS_1_45BE3E73C7977762_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0B4E0)
#define CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EB0AF30)
#define CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EB0AF20)
#define CLASS_1_45BE3E73C7977762_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB0AD30)
#define CLASS_1_45BE3E73C7977762_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EB0AF50)
#define CLASS_1_45BE3E73C7977762_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EB0AF40)
#define CLASS_1_45BE3E73C7977762_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0AD60)
#define CLASS_1_45BE3E73C7977762_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0B280)
#define CLASS_1_45BE3E73C7977762_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0B2E0)
#define CLASS_1_45BE3E73C7977762__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0B660)
#define CLASS_1_45BE3E73C7977762__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0AE00)
#define CLASS_1_45BE3E73C7977762__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0AD70)

inline static constexpr unsigned int Class_1_45BE3E73C7977762_TypeDefinitionIndex = 34291;

class Class_1_45BE3E73C7977762 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FALKBHPCHID()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x5EFB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x5EFB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGNBKOELKLD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x5EFC0);
	}
	// static const ::System::Int32 OIHGFPHOBAK = 0xF; // 0x0
	// static const ::System::Int32 AOCEJHGLMDJ = 0x2; // 0x0
	// static const ::System::Int32 KEPGBDBGCAL = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFMGOBEMFEP; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENOIJJKHJPL; // 0x20
	::System::Boolean EMCMEEEOPOC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BE3E73C7977762* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BE3E73C7977762*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BE3E73C7977762* Clone()
	{
		return ((::Class_1_45BE3E73C7977762*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BE3E73C7977762* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BE3E73C7977762*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BE3E73C7977762* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BE3E73C7977762*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BE3E73C7977762_MERGEFROM_1_OFFSET))(this, a1);
	}
};
