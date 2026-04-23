#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AE784B0D4E05F70E_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192CB990)
#define CLASS_1_AE784B0D4E05F70E_1_CLONE_OFFSET UNITYSDK_OFFSET(0x192CB6F0)
#define CLASS_1_AE784B0D4E05F70E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192CB7F0)
#define CLASS_1_AE784B0D4E05F70E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x192CB780)
#define CLASS_1_AE784B0D4E05F70E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192CB850)
#define CLASS_1_AE784B0D4E05F70E_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192CBB90)
#define CLASS_1_AE784B0D4E05F70E_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192CBB50)
#define CLASS_1_AE784B0D4E05F70E_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x192CB770)
#define CLASS_1_AE784B0D4E05F70E_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x192CB750)
#define CLASS_1_AE784B0D4E05F70E_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192CB670)
#define CLASS_1_AE784B0D4E05F70E_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x192CB760)
#define CLASS_1_AE784B0D4E05F70E_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x192CB740)
#define CLASS_1_AE784B0D4E05F70E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192CB6A0)
#define CLASS_1_AE784B0D4E05F70E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192CB8B0)
#define CLASS_1_AE784B0D4E05F70E_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x192CB910)
#define CLASS_1_AE784B0D4E05F70E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x192CBC10)
#define CLASS_1_AE784B0D4E05F70E_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192CB6C0)
#define CLASS_1_AE784B0D4E05F70E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x192CB6B0)

inline static constexpr unsigned int Class_1_AE784B0D4E05F70E_1_TypeDefinitionIndex = 30028;

class Class_1_AE784B0D4E05F70E_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE784B0D4E05F70E_1_TypeDefinitionIndex)->GetStaticField(0x57320);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Int64 Field_1_5; // 0x18
	::System::Int64 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AE784B0D4E05F70E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE784B0D4E05F70E_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AE784B0D4E05F70E_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AE784B0D4E05F70E_1* Clone()
	{
		return ((::Class_1_AE784B0D4E05F70E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AE784B0D4E05F70E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE784B0D4E05F70E_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AE784B0D4E05F70E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE784B0D4E05F70E_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AE784B0D4E05F70E_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
