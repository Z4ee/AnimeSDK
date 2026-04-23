#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_C821CB457FB5EBC6_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C5DBC0)
#define CLASS_1_C821CB457FB5EBC6_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19C5D770)
#define CLASS_1_C821CB457FB5EBC6_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C5D990)
#define CLASS_1_C821CB457FB5EBC6_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C5D8A0)
#define CLASS_1_C821CB457FB5EBC6_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C5DA50)
#define CLASS_1_C821CB457FB5EBC6_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C5DE30)
#define CLASS_1_C821CB457FB5EBC6_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C5DD80)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C5D840)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19C5D880)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C5D820)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C5D680)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19C5D870)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19C5D860)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C5D850)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19C5D890)
#define CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C5D830)
#define CLASS_1_C821CB457FB5EBC6_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C5D6E0)
#define CLASS_1_C821CB457FB5EBC6_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C5DA90)
#define CLASS_1_C821CB457FB5EBC6_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C5DAF0)
#define CLASS_1_C821CB457FB5EBC6_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C5DF20)
#define CLASS_1_C821CB457FB5EBC6_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C5D700)
#define CLASS_1_C821CB457FB5EBC6_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5D6F0)

inline static constexpr unsigned int Class_1_C821CB457FB5EBC6_5_TypeDefinitionIndex = 26443;

class Class_1_C821CB457FB5EBC6_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C821CB457FB5EBC6_5_TypeDefinitionIndex)->GetStaticField(0x5E330);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	::Proto::ItemList* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C821CB457FB5EBC6_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_5*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C821CB457FB5EBC6_5* Clone()
	{
		return ((::Class_1_C821CB457FB5EBC6_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C821CB457FB5EBC6_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_5*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C821CB457FB5EBC6_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_5*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
