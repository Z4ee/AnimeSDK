#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9E417278351157F_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF3150)
#define CLASS_1_C9E417278351157F_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF2D30)
#define CLASS_1_C9E417278351157F_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF2F00)
#define CLASS_1_C9E417278351157F_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF2DF0)
#define CLASS_1_C9E417278351157F_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF2FD0)
#define CLASS_1_C9E417278351157F_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF32F0)
#define CLASS_1_C9E417278351157F_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF32B0)
#define CLASS_1_C9E417278351157F_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DFF2DD0)
#define CLASS_1_C9E417278351157F_13_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DFF2C70)
#define CLASS_1_C9E417278351157F_13_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1DFF2DC0)
#define CLASS_1_C9E417278351157F_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DFF2DE0)
#define CLASS_1_C9E417278351157F_13_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1DFF2DB0)
#define CLASS_1_C9E417278351157F_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2CD0)
#define CLASS_1_C9E417278351157F_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF3010)
#define CLASS_1_C9E417278351157F_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF3070)
#define CLASS_1_C9E417278351157F_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF3470)
#define CLASS_1_C9E417278351157F_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF2CF0)
#define CLASS_1_C9E417278351157F_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2CE0)

inline static constexpr unsigned int Class_1_C9E417278351157F_13_TypeDefinitionIndex = 34184;

class Class_1_C9E417278351157F_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_13*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9E417278351157F_13_TypeDefinitionIndex)->GetStaticField(0x5D250);
	}
	// static const ::System::Int32 BDDGFOPHBML = 0x2; // 0x0
	// static const ::System::Int32 EBDOFPJAANE = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 AOOAEAADNGO; // 0x18
	::System::Int64 HHCEMNIBHIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9E417278351157F_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_13*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9E417278351157F_13* Clone()
	{
		return ((::Class_1_C9E417278351157F_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9E417278351157F_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9E417278351157F_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9E417278351157F_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
