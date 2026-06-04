#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_23C1B7E6B450FFB8_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A845620)
#define CLASS_1_23C1B7E6B450FFB8_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A845220)
#define CLASS_1_23C1B7E6B450FFB8_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A845360)
#define CLASS_1_23C1B7E6B450FFB8_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A845300)
#define CLASS_1_23C1B7E6B450FFB8_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A845460)
#define CLASS_1_23C1B7E6B450FFB8_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8457A0)
#define CLASS_1_23C1B7E6B450FFB8_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A845750)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A8452C0)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A8452A0)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A845160)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A8452D0)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A8452B0)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A8452F0)
#define CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A8452E0)
#define CLASS_1_23C1B7E6B450FFB8_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8451C0)
#define CLASS_1_23C1B7E6B450FFB8_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A845500)
#define CLASS_1_23C1B7E6B450FFB8_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A845560)
#define CLASS_1_23C1B7E6B450FFB8_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A845940)
#define CLASS_1_23C1B7E6B450FFB8_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8451E0)
#define CLASS_1_23C1B7E6B450FFB8_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8451D0)

inline static constexpr unsigned int Class_1_23C1B7E6B450FFB8_8_TypeDefinitionIndex = 27845;

class Class_1_23C1B7E6B450FFB8_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23C1B7E6B450FFB8_8_TypeDefinitionIndex)->GetStaticField(0x1A420);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::Double Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_23C1B7E6B450FFB8_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_23C1B7E6B450FFB8_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_23C1B7E6B450FFB8_8* Clone()
	{
		return ((::Class_1_23C1B7E6B450FFB8_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_23C1B7E6B450FFB8_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_23C1B7E6B450FFB8_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23C1B7E6B450FFB8_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
