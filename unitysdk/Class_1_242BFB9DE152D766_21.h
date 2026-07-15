#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC36700)
#define CLASS_1_242BFB9DE152D766_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC36060)
#define CLASS_1_242BFB9DE152D766_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC362F0)
#define CLASS_1_242BFB9DE152D766_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC36150)
#define CLASS_1_242BFB9DE152D766_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC365C0)
#define CLASS_1_242BFB9DE152D766_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC36880)
#define CLASS_1_242BFB9DE152D766_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC36760)
#define CLASS_1_242BFB9DE152D766_21_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC36130)
#define CLASS_1_242BFB9DE152D766_21_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC35F50)
#define CLASS_1_242BFB9DE152D766_21_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC36140)
#define CLASS_1_242BFB9DE152D766_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC35FB0)
#define CLASS_1_242BFB9DE152D766_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC36610)
#define CLASS_1_242BFB9DE152D766_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC36670)
#define CLASS_1_242BFB9DE152D766_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC36AA0)
#define CLASS_1_242BFB9DE152D766_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC35FD0)
#define CLASS_1_242BFB9DE152D766_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC35FC0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_21_TypeDefinitionIndex = 26568;

class Class_1_242BFB9DE152D766_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_21_TypeDefinitionIndex)->GetStaticField(0x55B20);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_455008579EB95638* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_21*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_21*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_21* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_CLONE_OFFSET))(this);
	}

	::Class_1_455008579EB95638* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_21*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_21*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
