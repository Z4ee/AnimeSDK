#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_13.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C7683E25DEA7965C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC382F0)
#define CLASS_1_C7683E25DEA7965C_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC37CC0)
#define CLASS_1_C7683E25DEA7965C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC37F10)
#define CLASS_1_C7683E25DEA7965C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC37D20)
#define CLASS_1_C7683E25DEA7965C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC380E0)
#define CLASS_1_C7683E25DEA7965C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC384D0)
#define CLASS_1_C7683E25DEA7965C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC383E0)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DC37CF0)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1DC37D10)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DC37B70)
#define CLASS_1_C7683E25DEA7965C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DC37D00)
#define CLASS_1_C7683E25DEA7965C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC37BA0)
#define CLASS_1_C7683E25DEA7965C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC38170)
#define CLASS_1_C7683E25DEA7965C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC381D0)
#define CLASS_1_C7683E25DEA7965C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC386B0)
#define CLASS_1_C7683E25DEA7965C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC37BF0)
#define CLASS_1_C7683E25DEA7965C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC37BB0)

inline static constexpr unsigned int Class_1_C7683E25DEA7965C_TypeDefinitionIndex = 29851;

class Class_1_C7683E25DEA7965C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7683E25DEA7965C_TypeDefinitionIndex)->GetStaticField(0x47810);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_13>** StaticGet_ABKPFMHNFFH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_71AA90D596A09AC8_13>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7683E25DEA7965C_TypeDefinitionIndex)->GetStaticField(0x47818);
	}
	// static const ::System::Int32 KBMGGGHELJP = 0xC; // 0x0
	// static const ::System::Int32 OCKGGIIFIKP = 0x9; // 0x0
	::Class_1_21DCD4640D389503_16* MNJNMPKLFAI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_13>* GGODOJAJJOH; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C7683E25DEA7965C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C7683E25DEA7965C* Clone()
	{
		return ((::Class_1_C7683E25DEA7965C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_16* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_13>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_71AA90D596A09AC8_13>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C7683E25DEA7965C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7683E25DEA7965C*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C7683E25DEA7965C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
