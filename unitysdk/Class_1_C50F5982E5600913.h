#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_21DCD4640D389503_13;
class Class_1_93AA40F7202497D0_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C50F5982E5600913_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A967FF0)
#define CLASS_1_C50F5982E5600913_CLONE_OFFSET UNITYSDK_OFFSET(0x1A967B30)
#define CLASS_1_C50F5982E5600913_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A967D40)
#define CLASS_1_C50F5982E5600913_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A967BE0)
#define CLASS_1_C50F5982E5600913_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A967E60)
#define CLASS_1_C50F5982E5600913_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A968210)
#define CLASS_1_C50F5982E5600913_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9680B0)
#define CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A967BA0)
#define CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1A967BC0)
#define CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A967B80)
#define CLASS_1_C50F5982E5600913_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A967910)
#define CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A967BB0)
#define CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1A967BD0)
#define CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A967B90)
#define CLASS_1_C50F5982E5600913_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A967970)
#define CLASS_1_C50F5982E5600913_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A967EE0)
#define CLASS_1_C50F5982E5600913_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A967F40)
#define CLASS_1_C50F5982E5600913__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9684D0)
#define CLASS_1_C50F5982E5600913__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A967990)
#define CLASS_1_C50F5982E5600913__CTOR_OFFSET UNITYSDK_OFFSET(0x1A967980)

inline static constexpr unsigned int Class_1_C50F5982E5600913_TypeDefinitionIndex = 24347;

class Class_1_C50F5982E5600913 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C50F5982E5600913*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C50F5982E5600913*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C50F5982E5600913_TypeDefinitionIndex)->GetStaticField(0x4030);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Class_1_21DCD4640D389503_13* Field_1_4; // 0x10
	::Class_1_0C36FD2A7876DF8E* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20
	::Class_1_93AA40F7202497D0_1* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C50F5982E5600913*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C50F5982E5600913*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C50F5982E5600913* Clone()
	{
		return ((::Class_1_C50F5982E5600913*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_13* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_13*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_93AA40F7202497D0_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_93AA40F7202497D0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_93AA40F7202497D0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_1*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_0C36FD2A7876DF8E* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_0C36FD2A7876DF8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C50F5982E5600913_MERGEFROM_1_OFFSET))(this, a1);
	}
};
