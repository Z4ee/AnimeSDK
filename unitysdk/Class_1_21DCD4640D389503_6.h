#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A74EE50)
#define CLASS_1_21DCD4640D389503_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A74E340)
#define CLASS_1_21DCD4640D389503_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A74E6C0)
#define CLASS_1_21DCD4640D389503_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A74E690)
#define CLASS_1_21DCD4640D389503_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A74E850)
#define CLASS_1_21DCD4640D389503_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A74F5D0)
#define CLASS_1_21DCD4640D389503_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A74F4F0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1A74E460)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1A74E4C0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x1A74E520)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_4_OFFSET UNITYSDK_OFFSET(0x1A74E580)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_5_OFFSET UNITYSDK_OFFSET(0x1A74E5E0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_6_OFFSET UNITYSDK_OFFSET(0x1A74E640)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A74E400)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1A74E450)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1A74E4B0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x1A74E510)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x1A74E570)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x1A74E5D0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_6_OFFSET UNITYSDK_OFFSET(0x1A74E630)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A74E3F0)
#define CLASS_1_21DCD4640D389503_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A74E210)
#define CLASS_1_21DCD4640D389503_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A74E240)
#define CLASS_1_21DCD4640D389503_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A74EC20)
#define CLASS_1_21DCD4640D389503_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A74EC80)
#define CLASS_1_21DCD4640D389503_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A74F860)
#define CLASS_1_21DCD4640D389503_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A74E2A0)
#define CLASS_1_21DCD4640D389503_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74E250)

inline static constexpr unsigned int Class_1_21DCD4640D389503_6_TypeDefinitionIndex = 23926;

class Class_1_21DCD4640D389503_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_6_TypeDefinitionIndex)->GetStaticField(0xD1B0);
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
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x20
	::System::String* Field_1_11; // 0x28
	::System::String* Field_1_12; // 0x30
	::System::String* Field_1_13; // 0x38
	::System::String* Field_1_14; // 0x40
	::System::String* Field_1_15; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_6*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_6* Clone()
	{
		return ((::Class_1_21DCD4640D389503_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_126AB3935214AA22_6_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_METHOD_1_050E70FEDB783306_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_6*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_6*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
