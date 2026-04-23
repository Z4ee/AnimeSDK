#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7028611E9315E2C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A7F150)
#define CLASS_1_E7028611E9315E2C_CLONE_OFFSET UNITYSDK_OFFSET(0x19A7ED60)
#define CLASS_1_E7028611E9315E2C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A7EF00)
#define CLASS_1_E7028611E9315E2C_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A7EDE0)
#define CLASS_1_E7028611E9315E2C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A7EFB0)
#define CLASS_1_E7028611E9315E2C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A7F2E0)
#define CLASS_1_E7028611E9315E2C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A7F260)
#define CLASS_1_E7028611E9315E2C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A7EDB0)
#define CLASS_1_E7028611E9315E2C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A7EBE0)
#define CLASS_1_E7028611E9315E2C_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x19A7EDD0)
#define CLASS_1_E7028611E9315E2C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A7EDC0)
#define CLASS_1_E7028611E9315E2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A7EC40)
#define CLASS_1_E7028611E9315E2C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A7F020)
#define CLASS_1_E7028611E9315E2C_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A7F080)
#define CLASS_1_E7028611E9315E2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A7F3C0)
#define CLASS_1_E7028611E9315E2C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A7ECA0)
#define CLASS_1_E7028611E9315E2C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7EC50)

inline static constexpr unsigned int Class_1_E7028611E9315E2C_TypeDefinitionIndex = 27517;

class Class_1_E7028611E9315E2C : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7028611E9315E2C_TypeDefinitionIndex)->GetStaticField(0x51E40);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_E7028611E9315E2C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E7028611E9315E2C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7028611E9315E2C_TypeDefinitionIndex)->GetStaticField(0x51E48);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7028611E9315E2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7028611E9315E2C*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E7028611E9315E2C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E7028611E9315E2C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7028611E9315E2C* Clone()
	{
		return ((::Class_1_E7028611E9315E2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7028611E9315E2C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7028611E9315E2C*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7028611E9315E2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7028611E9315E2C*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7028611E9315E2C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
