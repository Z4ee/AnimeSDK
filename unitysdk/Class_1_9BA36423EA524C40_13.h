#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_42;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E264CC0)
#define CLASS_1_9BA36423EA524C40_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1E264680)
#define CLASS_1_9BA36423EA524C40_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2648B0)
#define CLASS_1_9BA36423EA524C40_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E264740)
#define CLASS_1_9BA36423EA524C40_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E264B80)
#define CLASS_1_9BA36423EA524C40_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E264E00)
#define CLASS_1_9BA36423EA524C40_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E264D20)
#define CLASS_1_9BA36423EA524C40_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E264720)
#define CLASS_1_9BA36423EA524C40_13_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2645A0)
#define CLASS_1_9BA36423EA524C40_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E264730)
#define CLASS_1_9BA36423EA524C40_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2645D0)
#define CLASS_1_9BA36423EA524C40_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E264BD0)
#define CLASS_1_9BA36423EA524C40_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E264C30)
#define CLASS_1_9BA36423EA524C40_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E264FE0)
#define CLASS_1_9BA36423EA524C40_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2645F0)
#define CLASS_1_9BA36423EA524C40_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2645E0)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_13_TypeDefinitionIndex = 34455;

class Class_1_9BA36423EA524C40_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_13*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_13_TypeDefinitionIndex)->GetStaticField(0x39310);
	}
	// static const ::System::Int32 EAHAEFHMLHD = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_21DCD4640D389503_42* NIBJKKOGKAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_13*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_13*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_13* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_42* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_13*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_13*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
