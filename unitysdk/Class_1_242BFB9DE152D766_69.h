#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F487A56015EDF324_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8FAF80)
#define CLASS_1_242BFB9DE152D766_69_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8FA860)
#define CLASS_1_242BFB9DE152D766_69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8FAA90)
#define CLASS_1_242BFB9DE152D766_69_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8FA920)
#define CLASS_1_242BFB9DE152D766_69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8FAD60)
#define CLASS_1_242BFB9DE152D766_69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8FB100)
#define CLASS_1_242BFB9DE152D766_69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8FAFE0)
#define CLASS_1_242BFB9DE152D766_69_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8FA900)
#define CLASS_1_242BFB9DE152D766_69_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8FA780)
#define CLASS_1_242BFB9DE152D766_69_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8FA910)
#define CLASS_1_242BFB9DE152D766_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8FA7B0)
#define CLASS_1_242BFB9DE152D766_69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8FAE90)
#define CLASS_1_242BFB9DE152D766_69_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8FAEF0)
#define CLASS_1_242BFB9DE152D766_69__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8FB2D0)
#define CLASS_1_242BFB9DE152D766_69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8FA7D0)
#define CLASS_1_242BFB9DE152D766_69__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FA7C0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_69_TypeDefinitionIndex = 31393;

class Class_1_242BFB9DE152D766_69 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_69*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_69*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_69_TypeDefinitionIndex)->GetStaticField(0x30150);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_F487A56015EDF324_18* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_69*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_69*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_69*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_69* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_CLONE_OFFSET))(this);
	}

	::Class_1_F487A56015EDF324_18* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F487A56015EDF324_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F487A56015EDF324_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_18*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_69*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_69*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
