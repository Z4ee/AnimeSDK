#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_23C1B7E6B450FFB8_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19885BA0)
#define CLASS_1_23C1B7E6B450FFB8_4_CLONE_OFFSET UNITYSDK_OFFSET(0x19885660)
#define CLASS_1_23C1B7E6B450FFB8_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198857A0)
#define CLASS_1_23C1B7E6B450FFB8_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x19885740)
#define CLASS_1_23C1B7E6B450FFB8_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19885910)
#define CLASS_1_23C1B7E6B450FFB8_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19885CD0)
#define CLASS_1_23C1B7E6B450FFB8_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19885C60)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198856E0)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x198855A0)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198856F0)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x19885730)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x19885710)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x19885720)
#define CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x19885700)
#define CLASS_1_23C1B7E6B450FFB8_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19885600)
#define CLASS_1_23C1B7E6B450FFB8_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19885A60)
#define CLASS_1_23C1B7E6B450FFB8_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x19885AC0)
#define CLASS_1_23C1B7E6B450FFB8_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19885DF0)
#define CLASS_1_23C1B7E6B450FFB8_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19885620)
#define CLASS_1_23C1B7E6B450FFB8_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19885610)

inline static constexpr unsigned int Class_1_23C1B7E6B450FFB8_4_TypeDefinitionIndex = 24365;

class Class_1_23C1B7E6B450FFB8_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23C1B7E6B450FFB8_4_TypeDefinitionIndex)->GetStaticField(0x4C9E0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Double Field_1_7; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::Double Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_23C1B7E6B450FFB8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_4*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_23C1B7E6B450FFB8_4* Clone()
	{
		return ((::Class_1_23C1B7E6B450FFB8_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_23C1B7E6B450FFB8_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_4*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_23C1B7E6B450FFB8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_4*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
