#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_323C5B45895F3E6B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180039C0)
#define CLASS_1_323C5B45895F3E6B_CLONE_OFFSET UNITYSDK_OFFSET(0x18003620)
#define CLASS_1_323C5B45895F3E6B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18003790)
#define CLASS_1_323C5B45895F3E6B_EQUALS_OFFSET UNITYSDK_OFFSET(0x18003680)
#define CLASS_1_323C5B45895F3E6B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18003840)
#define CLASS_1_323C5B45895F3E6B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18003B00)
#define CLASS_1_323C5B45895F3E6B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18003A60)
#define CLASS_1_323C5B45895F3E6B_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x18003670)
#define CLASS_1_323C5B45895F3E6B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18003510)
#define CLASS_1_323C5B45895F3E6B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180038B0)
#define CLASS_1_323C5B45895F3E6B_WRITETO_OFFSET UNITYSDK_OFFSET(0x18003910)
#define CLASS_1_323C5B45895F3E6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18003BE0)
#define CLASS_1_323C5B45895F3E6B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18003570)
#define CLASS_1_323C5B45895F3E6B__CTOR_OFFSET UNITYSDK_OFFSET(0x18003520)

inline static constexpr unsigned int Class_1_323C5B45895F3E6B_TypeDefinitionIndex = 23476;

class Class_1_323C5B45895F3E6B : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_323C5B45895F3E6B_TypeDefinitionIndex)->GetStaticField(0x405F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_323C5B45895F3E6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_323C5B45895F3E6B*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_323C5B45895F3E6B* Clone()
	{
		return ((::Class_1_323C5B45895F3E6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_323C5B45895F3E6B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_323C5B45895F3E6B*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_323C5B45895F3E6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_323C5B45895F3E6B*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
