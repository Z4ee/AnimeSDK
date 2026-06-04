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

#define CLASS_1_C821CB457FB5EBC6_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0AB2D0)
#define CLASS_1_C821CB457FB5EBC6_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0AAE80)
#define CLASS_1_C821CB457FB5EBC6_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0AB0A0)
#define CLASS_1_C821CB457FB5EBC6_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0AAFB0)
#define CLASS_1_C821CB457FB5EBC6_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0AB160)
#define CLASS_1_C821CB457FB5EBC6_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0AB540)
#define CLASS_1_C821CB457FB5EBC6_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0AB490)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A0AAF50)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A0AAF70)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A0AAF30)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A0AAD90)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A0AAFA0)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A0AAF90)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A0AAF60)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A0AAF80)
#define CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A0AAF40)
#define CLASS_1_C821CB457FB5EBC6_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0AADF0)
#define CLASS_1_C821CB457FB5EBC6_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0AB1A0)
#define CLASS_1_C821CB457FB5EBC6_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0AB200)
#define CLASS_1_C821CB457FB5EBC6_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0AB630)
#define CLASS_1_C821CB457FB5EBC6_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0AAE10)
#define CLASS_1_C821CB457FB5EBC6_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AAE00)

inline static constexpr unsigned int Class_1_C821CB457FB5EBC6_6_TypeDefinitionIndex = 26414;

class Class_1_C821CB457FB5EBC6_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C821CB457FB5EBC6_6_TypeDefinitionIndex)->GetStaticField(0x15DF0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C821CB457FB5EBC6_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_6*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C821CB457FB5EBC6_6* Clone()
	{
		return ((::Class_1_C821CB457FB5EBC6_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C821CB457FB5EBC6_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_6*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C821CB457FB5EBC6_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_6*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
