#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21565BDC51733634;
class Class_1_D17272E82AE804C2_33;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D743894CDF214D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7768E0)
#define CLASS_1_20D743894CDF214D_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7761E0)
#define CLASS_1_20D743894CDF214D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C776500)
#define CLASS_1_20D743894CDF214D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7762D0)
#define CLASS_1_20D743894CDF214D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C776730)
#define CLASS_1_20D743894CDF214D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C776A30)
#define CLASS_1_20D743894CDF214D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C776970)
#define CLASS_1_20D743894CDF214D_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C7762B0)
#define CLASS_1_20D743894CDF214D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C776290)
#define CLASS_1_20D743894CDF214D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C7760F0)
#define CLASS_1_20D743894CDF214D_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C7762C0)
#define CLASS_1_20D743894CDF214D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C7762A0)
#define CLASS_1_20D743894CDF214D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C776120)
#define CLASS_1_20D743894CDF214D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7767A0)
#define CLASS_1_20D743894CDF214D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C776800)
#define CLASS_1_20D743894CDF214D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C776BD0)
#define CLASS_1_20D743894CDF214D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C776140)
#define CLASS_1_20D743894CDF214D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C776130)

inline static constexpr unsigned int Class_1_20D743894CDF214D_TypeDefinitionIndex = 24648;

class Class_1_20D743894CDF214D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D743894CDF214D_TypeDefinitionIndex)->GetStaticField(0x56DD0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Class_1_D17272E82AE804C2_33* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_21565BDC51733634* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20D743894CDF214D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20D743894CDF214D* Clone()
	{
		return ((::Class_1_20D743894CDF214D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_33* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_33*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21565BDC51733634* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21565BDC51733634*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21565BDC51733634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21565BDC51733634*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20D743894CDF214D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D743894CDF214D*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20D743894CDF214D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
