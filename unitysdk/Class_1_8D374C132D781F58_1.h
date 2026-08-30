#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8D374C132D781F58_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A01C0)
#define CLASS_1_8D374C132D781F58_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69FA10)
#define CLASS_1_8D374C132D781F58_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69FCC0)
#define CLASS_1_8D374C132D781F58_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69FBC0)
#define CLASS_1_8D374C132D781F58_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69FE30)
#define CLASS_1_8D374C132D781F58_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A0320)
#define CLASS_1_8D374C132D781F58_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A02B0)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1E69FB10)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1E69FB70)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E69FAB0)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E69FB00)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1E69FB60)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E69FAA0)
#define CLASS_1_8D374C132D781F58_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E69F910)
#define CLASS_1_8D374C132D781F58_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69F970)
#define CLASS_1_8D374C132D781F58_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69FFF0)
#define CLASS_1_8D374C132D781F58_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A0050)
#define CLASS_1_8D374C132D781F58_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A05D0)
#define CLASS_1_8D374C132D781F58_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69F9B0)
#define CLASS_1_8D374C132D781F58_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69F980)

inline static constexpr unsigned int Class_1_8D374C132D781F58_1_TypeDefinitionIndex = 25380;

class Class_1_8D374C132D781F58_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8D374C132D781F58_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8D374C132D781F58_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D374C132D781F58_1_TypeDefinitionIndex)->GetStaticField(0x22B30);
	}
	// static const ::System::Int32 KEPOPADMGOJ = 0x1; // 0x0
	// static const ::System::Int32 HKFLOEHACBM = 0x2; // 0x0
	// static const ::System::Int32 JHIBBDFFPEG = 0x3; // 0x0
	::System::String* FNPNENCECGM; // 0x10
	::System::String* EJAJMIKEDBC; // 0x18
	::System::String* JLPEJDAGGMO; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8D374C132D781F58_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D374C132D781F58_1*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8D374C132D781F58_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8D374C132D781F58_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8D374C132D781F58_1* Clone()
	{
		return ((::Class_1_8D374C132D781F58_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8D374C132D781F58_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8D374C132D781F58_1*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8D374C132D781F58_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D374C132D781F58_1*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8D374C132D781F58_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
