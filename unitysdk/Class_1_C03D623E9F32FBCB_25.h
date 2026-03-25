#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_29;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BA71A0)
#define CLASS_1_C03D623E9F32FBCB_25_CLONE_OFFSET UNITYSDK_OFFSET(0x17BA6E00)
#define CLASS_1_C03D623E9F32FBCB_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BA6FE0)
#define CLASS_1_C03D623E9F32FBCB_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BA6F10)
#define CLASS_1_C03D623E9F32FBCB_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BA7080)
#define CLASS_1_C03D623E9F32FBCB_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BA72C0)
#define CLASS_1_C03D623E9F32FBCB_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BA7200)
#define CLASS_1_C03D623E9F32FBCB_25_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BA6EF0)
#define CLASS_1_C03D623E9F32FBCB_25_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BA6F00)
#define CLASS_1_C03D623E9F32FBCB_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BA6D40)
#define CLASS_1_C03D623E9F32FBCB_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BA70E0)
#define CLASS_1_C03D623E9F32FBCB_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BA7140)
#define CLASS_1_C03D623E9F32FBCB_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BA6D60)
#define CLASS_1_C03D623E9F32FBCB_25__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA6D50)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_25_TypeDefinitionIndex = 24330;

class Class_1_C03D623E9F32FBCB_25 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_120319518E6F6581_29* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_25*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_25* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_CLONE_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_29* Method_1_24748FC20F375725()
	{
		return ((::Class_1_120319518E6F6581_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_120319518E6F6581_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_29*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_25*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_25*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
