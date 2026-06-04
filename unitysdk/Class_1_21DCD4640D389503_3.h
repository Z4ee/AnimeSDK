#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9BE000)
#define CLASS_1_21DCD4640D389503_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9BD490)
#define CLASS_1_21DCD4640D389503_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9BD870)
#define CLASS_1_21DCD4640D389503_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9BD810)
#define CLASS_1_21DCD4640D389503_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9BDA00)
#define CLASS_1_21DCD4640D389503_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9BE780)
#define CLASS_1_21DCD4640D389503_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9BE6A0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1A9BD5E0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1A9BD640)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x1A9BD6A0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_4_OFFSET UNITYSDK_OFFSET(0x1A9BD700)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_5_OFFSET UNITYSDK_OFFSET(0x1A9BD760)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_6_OFFSET UNITYSDK_OFFSET(0x1A9BD7C0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A9BD580)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1A9BD5D0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1A9BD630)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x1A9BD690)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x1A9BD6F0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x1A9BD750)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_6_OFFSET UNITYSDK_OFFSET(0x1A9BD7B0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A9BD570)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A9BD330)
#define CLASS_1_21DCD4640D389503_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9BD390)
#define CLASS_1_21DCD4640D389503_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9BDDD0)
#define CLASS_1_21DCD4640D389503_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9BDE30)
#define CLASS_1_21DCD4640D389503_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9BEA10)
#define CLASS_1_21DCD4640D389503_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9BD3F0)
#define CLASS_1_21DCD4640D389503_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9BD3A0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_3_TypeDefinitionIndex = 23908;

class Class_1_21DCD4640D389503_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x673B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::System::String* Field_1_8; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::String* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x28
	::System::String* Field_1_12; // 0x30
	::System::String* Field_1_13; // 0x38
	::System::String* Field_1_14; // 0x40
	::System::String* Field_1_15; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_3* Clone()
	{
		return ((::Class_1_21DCD4640D389503_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_6_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
