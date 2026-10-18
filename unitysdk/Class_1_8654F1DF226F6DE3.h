#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E602330)
#define CLASS_1_8654F1DF226F6DE3_CLONE_OFFSET UNITYSDK_OFFSET(0x1E601CD0)
#define CLASS_1_8654F1DF226F6DE3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E601F60)
#define CLASS_1_8654F1DF226F6DE3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E601E10)
#define CLASS_1_8654F1DF226F6DE3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E602090)
#define CLASS_1_8654F1DF226F6DE3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E602430)
#define CLASS_1_8654F1DF226F6DE3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6023D0)
#define CLASS_1_8654F1DF226F6DE3_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1E601DC0)
#define CLASS_1_8654F1DF226F6DE3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E601D60)
#define CLASS_1_8654F1DF226F6DE3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E601DB0)
#define CLASS_1_8654F1DF226F6DE3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E601D50)
#define CLASS_1_8654F1DF226F6DE3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E601BF0)
#define CLASS_1_8654F1DF226F6DE3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E601C50)
#define CLASS_1_8654F1DF226F6DE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6021D0)
#define CLASS_1_8654F1DF226F6DE3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E602230)
#define CLASS_1_8654F1DF226F6DE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E602620)
#define CLASS_1_8654F1DF226F6DE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E601C80)
#define CLASS_1_8654F1DF226F6DE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E601C60)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_TypeDefinitionIndex = 25237;

class Class_1_8654F1DF226F6DE3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_TypeDefinitionIndex)->GetStaticField(0x46CD0);
	}
	// static const ::System::Int32 PBBIACCKPME = 0x1; // 0x0
	// static const ::System::Int32 FAHFDBHFHEB = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* MDPFLIGGADI; // 0x18
	::System::String* MEODIHMCOPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
