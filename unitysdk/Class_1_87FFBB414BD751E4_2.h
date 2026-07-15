#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87FFBB414BD751E4_2_Enum_3_FCBB2C507E9B21A3_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_87FFBB414BD751E4_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA27B70)
#define CLASS_1_87FFBB414BD751E4_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA274E0)
#define CLASS_1_87FFBB414BD751E4_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA275B0)
#define CLASS_1_87FFBB414BD751E4_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA27550)
#define CLASS_1_87FFBB414BD751E4_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA27840)
#define CLASS_1_87FFBB414BD751E4_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA27E20)
#define CLASS_1_87FFBB414BD751E4_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA27CF0)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CA273E0)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1CA27530)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA271F0)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1CA27430)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x1CA273A0)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CA27540)
#define CLASS_1_87FFBB414BD751E4_2_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1CA274B0)
#define CLASS_1_87FFBB414BD751E4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA27250)
#define CLASS_1_87FFBB414BD751E4_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA27980)
#define CLASS_1_87FFBB414BD751E4_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA279E0)
#define CLASS_1_87FFBB414BD751E4_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA28000)
#define CLASS_1_87FFBB414BD751E4_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA27270)
#define CLASS_1_87FFBB414BD751E4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA27260)

inline static constexpr unsigned int Class_1_87FFBB414BD751E4_2_TypeDefinitionIndex = 28840;

class Class_1_87FFBB414BD751E4_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_87FFBB414BD751E4_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_87FFBB414BD751E4_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87FFBB414BD751E4_2_TypeDefinitionIndex)->GetStaticField(0x33790);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::System::Object* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_87FFBB414BD751E4_2_Enum_3_FCBB2C507E9B21A3_24 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_87FFBB414BD751E4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87FFBB414BD751E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_87FFBB414BD751E4_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_87FFBB414BD751E4_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_87FFBB414BD751E4_2* Clone()
	{
		return ((::Class_1_87FFBB414BD751E4_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_71F0872EB31B61BD_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_87FFBB414BD751E4_2_Enum_3_FCBB2C507E9B21A3_24 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_87FFBB414BD751E4_2_Enum_3_FCBB2C507E9B21A3_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_87FFBB414BD751E4_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_87FFBB414BD751E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_87FFBB414BD751E4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87FFBB414BD751E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_87FFBB414BD751E4_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
