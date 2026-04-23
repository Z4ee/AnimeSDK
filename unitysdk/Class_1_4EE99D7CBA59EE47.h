#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4EE99D7CBA59EE47_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1994B7A0)
#define CLASS_1_4EE99D7CBA59EE47_CLONE_OFFSET UNITYSDK_OFFSET(0x1994B340)
#define CLASS_1_4EE99D7CBA59EE47_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1994B550)
#define CLASS_1_4EE99D7CBA59EE47_EQUALS_OFFSET UNITYSDK_OFFSET(0x1994B480)
#define CLASS_1_4EE99D7CBA59EE47_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1994B5E0)
#define CLASS_1_4EE99D7CBA59EE47_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1994B9C0)
#define CLASS_1_4EE99D7CBA59EE47_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1994B930)
#define CLASS_1_4EE99D7CBA59EE47_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1994B460)
#define CLASS_1_4EE99D7CBA59EE47_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1994B3B0)
#define CLASS_1_4EE99D7CBA59EE47_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1994B280)
#define CLASS_1_4EE99D7CBA59EE47_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1994B470)
#define CLASS_1_4EE99D7CBA59EE47_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x1994B3C0)
#define CLASS_1_4EE99D7CBA59EE47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1994B2E0)
#define CLASS_1_4EE99D7CBA59EE47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1994B6B0)
#define CLASS_1_4EE99D7CBA59EE47_WRITETO_OFFSET UNITYSDK_OFFSET(0x1994B710)
#define CLASS_1_4EE99D7CBA59EE47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1994BAC0)
#define CLASS_1_4EE99D7CBA59EE47__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1994B300)
#define CLASS_1_4EE99D7CBA59EE47__CTOR_OFFSET UNITYSDK_OFFSET(0x1994B2F0)

inline static constexpr unsigned int Class_1_4EE99D7CBA59EE47_TypeDefinitionIndex = 23980;

class Class_1_4EE99D7CBA59EE47 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EE99D7CBA59EE47_TypeDefinitionIndex)->GetStaticField(0x5F280);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4EE99D7CBA59EE47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4EE99D7CBA59EE47*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4EE99D7CBA59EE47* Clone()
	{
		return ((::Class_1_4EE99D7CBA59EE47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4EE99D7CBA59EE47* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4EE99D7CBA59EE47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4EE99D7CBA59EE47_MERGEFROM_1_OFFSET))(this, a1);
	}
};
