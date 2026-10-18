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

#define CLASS_1_45BE3E73C7977762_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADDDB0)
#define CLASS_1_45BE3E73C7977762_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADD860)
#define CLASS_1_45BE3E73C7977762_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADD900)
#define CLASS_1_45BE3E73C7977762_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADD8D0)
#define CLASS_1_45BE3E73C7977762_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADDA20)
#define CLASS_1_45BE3E73C7977762_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADDEC0)
#define CLASS_1_45BE3E73C7977762_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADDE50)
#define CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EADD8A0)
#define CLASS_1_45BE3E73C7977762_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EADD890)
#define CLASS_1_45BE3E73C7977762_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EADD6A0)
#define CLASS_1_45BE3E73C7977762_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EADD8C0)
#define CLASS_1_45BE3E73C7977762_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EADD8B0)
#define CLASS_1_45BE3E73C7977762_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADD6D0)
#define CLASS_1_45BE3E73C7977762_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADDBF0)
#define CLASS_1_45BE3E73C7977762_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADDC50)
#define CLASS_1_45BE3E73C7977762__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADDFD0)
#define CLASS_1_45BE3E73C7977762__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADD770)
#define CLASS_1_45BE3E73C7977762__CTOR_OFFSET UNITYSDK_OFFSET(0x1EADD6E0)

inline static constexpr unsigned int Class_1_45BE3E73C7977762_TypeDefinitionIndex = 34291;

class Class_1_45BE3E73C7977762 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FALKBHPCHID()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x63830);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BE3E73C7977762*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x63838);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGNBKOELKLD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BE3E73C7977762_TypeDefinitionIndex)->GetStaticField(0x63840);
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
