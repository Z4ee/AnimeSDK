#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FB97E6BA44592C06_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197F8E80)
#define CLASS_1_FB97E6BA44592C06_3_CLONE_OFFSET UNITYSDK_OFFSET(0x197F86C0)
#define CLASS_1_FB97E6BA44592C06_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197F8A90)
#define CLASS_1_FB97E6BA44592C06_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x197F8960)
#define CLASS_1_FB97E6BA44592C06_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197F8B90)
#define CLASS_1_FB97E6BA44592C06_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197F92F0)
#define CLASS_1_FB97E6BA44592C06_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197F9180)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x197F8800)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x197F88B0)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x197F8750)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197F85C0)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x197F8810)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_2_OFFSET UNITYSDK_OFFSET(0x197F88C0)
#define CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x197F8760)
#define CLASS_1_FB97E6BA44592C06_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197F8620)
#define CLASS_1_FB97E6BA44592C06_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197F8D50)
#define CLASS_1_FB97E6BA44592C06_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x197F8DB0)
#define CLASS_1_FB97E6BA44592C06_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F95D0)
#define CLASS_1_FB97E6BA44592C06_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197F8660)
#define CLASS_1_FB97E6BA44592C06_3__CTOR_OFFSET UNITYSDK_OFFSET(0x197F8630)

inline static constexpr unsigned int Class_1_FB97E6BA44592C06_3_TypeDefinitionIndex = 24439;

class Class_1_FB97E6BA44592C06_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB97E6BA44592C06_3_TypeDefinitionIndex)->GetStaticField(0x64860);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_7; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FB97E6BA44592C06_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_3*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FB97E6BA44592C06_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FB97E6BA44592C06_3* Clone()
	{
		return ((::Class_1_FB97E6BA44592C06_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_METHOD_1_9CE3056B66B7573D_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FB97E6BA44592C06_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB97E6BA44592C06_3*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FB97E6BA44592C06_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB97E6BA44592C06_3*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FB97E6BA44592C06_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
