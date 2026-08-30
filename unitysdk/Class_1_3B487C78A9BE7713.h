#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3B487C78A9BE7713_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE0AF20)
#define CLASS_1_3B487C78A9BE7713_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE0AB30)
#define CLASS_1_3B487C78A9BE7713_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE0ACB0)
#define CLASS_1_3B487C78A9BE7713_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE0AB70)
#define CLASS_1_3B487C78A9BE7713_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE0ADD0)
#define CLASS_1_3B487C78A9BE7713_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE0B060)
#define CLASS_1_3B487C78A9BE7713_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE0AFC0)
#define CLASS_1_3B487C78A9BE7713_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1DE0AB60)
#define CLASS_1_3B487C78A9BE7713_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE0AA20)
#define CLASS_1_3B487C78A9BE7713_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE0AA50)
#define CLASS_1_3B487C78A9BE7713_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE0AE40)
#define CLASS_1_3B487C78A9BE7713_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE0AEA0)
#define CLASS_1_3B487C78A9BE7713__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B230)
#define CLASS_1_3B487C78A9BE7713__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE0AAA0)
#define CLASS_1_3B487C78A9BE7713__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0AA60)

inline static constexpr unsigned int Class_1_3B487C78A9BE7713_TypeDefinitionIndex = 30714;

class Class_1_3B487C78A9BE7713 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_01618AD0437C8486_2>** StaticGet_OBAMOJMBJGO()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_01618AD0437C8486_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713_TypeDefinitionIndex)->GetStaticField(0x26960);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713_TypeDefinitionIndex)->GetStaticField(0x26968);
	}
	// static const ::System::Int32 NDFKNLMALKD = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_01618AD0437C8486_2>* FPIPJOCMDOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3B487C78A9BE7713* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B487C78A9BE7713*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3B487C78A9BE7713* Clone()
	{
		return ((::Class_1_3B487C78A9BE7713*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_01618AD0437C8486_2>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_01618AD0437C8486_2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3B487C78A9BE7713* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3B487C78A9BE7713*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3B487C78A9BE7713* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B487C78A9BE7713*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_MERGEFROM_1_OFFSET))(this, a1);
	}
};
