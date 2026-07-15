#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_21;
class Class_1_0A99AF1699F7F17E_8;
class Class_1_B06D2EC51B693A66;
class Class_1_D8CC61AD64FF9091_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BF2908093F14DD44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC609E0)
#define CLASS_1_BF2908093F14DD44_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC53C00)
#define CLASS_1_BF2908093F14DD44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC604B0)
#define CLASS_1_BF2908093F14DD44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC60480)
#define CLASS_1_BF2908093F14DD44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC541A0)
#define CLASS_1_BF2908093F14DD44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC60B70)
#define CLASS_1_BF2908093F14DD44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC54DC0)
#define CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CC60410)
#define CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1CC60440)
#define CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1CC60460)
#define CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC603F0)
#define CLASS_1_BF2908093F14DD44_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CC60430)
#define CLASS_1_BF2908093F14DD44_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CC603E0)
#define CLASS_1_BF2908093F14DD44_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC60120)
#define CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CC60420)
#define CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1CC60450)
#define CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1CC60470)
#define CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC60400)
#define CLASS_1_BF2908093F14DD44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC60150)
#define CLASS_1_BF2908093F14DD44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC60740)
#define CLASS_1_BF2908093F14DD44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC607A0)
#define CLASS_1_BF2908093F14DD44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC60DD0)
#define CLASS_1_BF2908093F14DD44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC60160)
#define CLASS_1_BF2908093F14DD44__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC54D30)

inline static constexpr unsigned int Class_1_BF2908093F14DD44_TypeDefinitionIndex = 26157;

class Class_1_BF2908093F14DD44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BF2908093F14DD44*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BF2908093F14DD44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2908093F14DD44_TypeDefinitionIndex)->GetStaticField(0x3A500);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2908093F14DD44_TypeDefinitionIndex)->GetStaticField(0x3A508);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2908093F14DD44_TypeDefinitionIndex)->GetStaticField(0x3A510);
	}
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Class_1_B06D2EC51B693A66* Field_1_10; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x20
	::Class_1_075C34D03AFA1215_21* Field_1_12; // 0x28
	::Class_1_0A99AF1699F7F17E_8* Field_1_13; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_14; // 0x38
	::Class_1_D8CC61AD64FF9091_9* Field_1_15; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BF2908093F14DD44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BF2908093F14DD44*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BF2908093F14DD44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BF2908093F14DD44* Clone()
	{
		return ((::Class_1_BF2908093F14DD44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_D8CC61AD64FF9091_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D8CC61AD64FF9091_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D8CC61AD64FF9091_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_9*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_B06D2EC51B693A66* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_B06D2EC51B693A66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_B06D2EC51B693A66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_8* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_0A99AF1699F7F17E_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_0A99AF1699F7F17E_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_8*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_21* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_075C34D03AFA1215_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_075C34D03AFA1215_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BF2908093F14DD44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BF2908093F14DD44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF2908093F14DD44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
