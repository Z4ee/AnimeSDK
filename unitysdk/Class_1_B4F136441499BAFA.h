#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_21;
class Class_1_7BFB07C3AB2D97E4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B4F136441499BAFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A76A990)
#define CLASS_1_B4F136441499BAFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A76A400)
#define CLASS_1_B4F136441499BAFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A76A670)
#define CLASS_1_B4F136441499BAFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A76A560)
#define CLASS_1_B4F136441499BAFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A76A750)
#define CLASS_1_B4F136441499BAFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A76ABA0)
#define CLASS_1_B4F136441499BAFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A76AA20)
#define CLASS_1_B4F136441499BAFA_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A76A540)
#define CLASS_1_B4F136441499BAFA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A76A520)
#define CLASS_1_B4F136441499BAFA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A76A2A0)
#define CLASS_1_B4F136441499BAFA_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A76A550)
#define CLASS_1_B4F136441499BAFA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A76A530)
#define CLASS_1_B4F136441499BAFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A76A300)
#define CLASS_1_B4F136441499BAFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A76A8B0)
#define CLASS_1_B4F136441499BAFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A76A910)
#define CLASS_1_B4F136441499BAFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A76ADD0)
#define CLASS_1_B4F136441499BAFA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A76A320)
#define CLASS_1_B4F136441499BAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76A310)

inline static constexpr unsigned int Class_1_B4F136441499BAFA_TypeDefinitionIndex = 25648;

class Class_1_B4F136441499BAFA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F136441499BAFA_TypeDefinitionIndex)->GetStaticField(0x44D40);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_7BFB07C3AB2D97E4* Field_1_4; // 0x18
	::Class_1_075C34D03AFA1215_21* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4F136441499BAFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B4F136441499BAFA* Clone()
	{
		return ((::Class_1_B4F136441499BAFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_CLONE_OFFSET))(this);
	}

	::Class_1_7BFB07C3AB2D97E4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7BFB07C3AB2D97E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7BFB07C3AB2D97E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_21* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_075C34D03AFA1215_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_075C34D03AFA1215_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B4F136441499BAFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B4F136441499BAFA*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B4F136441499BAFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
