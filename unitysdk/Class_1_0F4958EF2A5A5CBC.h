#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A186446E06353A9_1;
class Class_1_D17272E82AE804C2_784;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0F4958EF2A5A5CBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19290F50)
#define CLASS_1_0F4958EF2A5A5CBC_CLONE_OFFSET UNITYSDK_OFFSET(0x192909B0)
#define CLASS_1_0F4958EF2A5A5CBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19290CF0)
#define CLASS_1_0F4958EF2A5A5CBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x19290BE0)
#define CLASS_1_0F4958EF2A5A5CBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19290DD0)
#define CLASS_1_0F4958EF2A5A5CBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19291150)
#define CLASS_1_0F4958EF2A5A5CBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19290FE0)
#define CLASS_1_0F4958EF2A5A5CBC_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19290BC0)
#define CLASS_1_0F4958EF2A5A5CBC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19290BA0)
#define CLASS_1_0F4958EF2A5A5CBC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19290780)
#define CLASS_1_0F4958EF2A5A5CBC_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19290BD0)
#define CLASS_1_0F4958EF2A5A5CBC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19290BB0)
#define CLASS_1_0F4958EF2A5A5CBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192907E0)
#define CLASS_1_0F4958EF2A5A5CBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19290E70)
#define CLASS_1_0F4958EF2A5A5CBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x19290ED0)
#define CLASS_1_0F4958EF2A5A5CBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19291210)
#define CLASS_1_0F4958EF2A5A5CBC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19290800)
#define CLASS_1_0F4958EF2A5A5CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x192907F0)

inline static constexpr unsigned int Class_1_0F4958EF2A5A5CBC_TypeDefinitionIndex = 30968;

class Class_1_0F4958EF2A5A5CBC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0F4958EF2A5A5CBC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0F4958EF2A5A5CBC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F4958EF2A5A5CBC_TypeDefinitionIndex)->GetStaticField(0x30560);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Class_1_2A186446E06353A9_1* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_D17272E82AE804C2_784* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0F4958EF2A5A5CBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F4958EF2A5A5CBC*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0F4958EF2A5A5CBC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0F4958EF2A5A5CBC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0F4958EF2A5A5CBC* Clone()
	{
		return ((::Class_1_0F4958EF2A5A5CBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_784* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_784*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_784* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_784*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_2A186446E06353A9_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_2A186446E06353A9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_2A186446E06353A9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A186446E06353A9_1*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0F4958EF2A5A5CBC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0F4958EF2A5A5CBC*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0F4958EF2A5A5CBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F4958EF2A5A5CBC*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0F4958EF2A5A5CBC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
