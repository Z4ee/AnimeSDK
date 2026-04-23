#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_806;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197BC920)
#define CLASS_1_355A2207C3B7A99D_94_CLONE_OFFSET UNITYSDK_OFFSET(0x197BC5B0)
#define CLASS_1_355A2207C3B7A99D_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197BC760)
#define CLASS_1_355A2207C3B7A99D_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x197BC690)
#define CLASS_1_355A2207C3B7A99D_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197BC800)
#define CLASS_1_355A2207C3B7A99D_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197BCA10)
#define CLASS_1_355A2207C3B7A99D_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197BC980)
#define CLASS_1_355A2207C3B7A99D_94_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x197BC670)
#define CLASS_1_355A2207C3B7A99D_94_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197BC4B0)
#define CLASS_1_355A2207C3B7A99D_94_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x197BC680)
#define CLASS_1_355A2207C3B7A99D_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197BC510)
#define CLASS_1_355A2207C3B7A99D_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197BC860)
#define CLASS_1_355A2207C3B7A99D_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x197BC8C0)
#define CLASS_1_355A2207C3B7A99D_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x197BCAA0)
#define CLASS_1_355A2207C3B7A99D_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197BC530)
#define CLASS_1_355A2207C3B7A99D_94__CTOR_OFFSET UNITYSDK_OFFSET(0x197BC520)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_94_TypeDefinitionIndex = 31145;

class Class_1_355A2207C3B7A99D_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_94*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_94_TypeDefinitionIndex)->GetStaticField(0x60490);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Class_1_D17272E82AE804C2_806* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_94*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_94*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_94*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_94* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_806* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_806*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_806* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_806*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_94*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_94*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
