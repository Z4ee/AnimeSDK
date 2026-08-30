#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A29C0)
#define CLASS_1_9BA36423EA524C40_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A22C0)
#define CLASS_1_9BA36423EA524C40_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A2550)
#define CLASS_1_9BA36423EA524C40_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A23B0)
#define CLASS_1_9BA36423EA524C40_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A2820)
#define CLASS_1_9BA36423EA524C40_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A2AF0)
#define CLASS_1_9BA36423EA524C40_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A2A20)
#define CLASS_1_9BA36423EA524C40_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E0A2390)
#define CLASS_1_9BA36423EA524C40_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0A21B0)
#define CLASS_1_9BA36423EA524C40_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E0A23A0)
#define CLASS_1_9BA36423EA524C40_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2210)
#define CLASS_1_9BA36423EA524C40_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A28D0)
#define CLASS_1_9BA36423EA524C40_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A2930)
#define CLASS_1_9BA36423EA524C40_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2CC0)
#define CLASS_1_9BA36423EA524C40_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A2230)
#define CLASS_1_9BA36423EA524C40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2220)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_1_TypeDefinitionIndex = 25409;

class Class_1_9BA36423EA524C40_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_1_TypeDefinitionIndex)->GetStaticField(0xD6A0);
	}
	// static const ::System::Int32 IKHAIHFIMBI = 0x1; // 0x0
	::Class_1_F3CA30716D4FAF92_2* BAKJGGCPGHE; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_1*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_1* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_CLONE_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F3CA30716D4FAF92_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F3CA30716D4FAF92_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_2*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_1*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_1*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
