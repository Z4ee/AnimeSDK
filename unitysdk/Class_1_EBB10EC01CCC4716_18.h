#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6E8AC0)
#define CLASS_1_EBB10EC01CCC4716_18_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6E85D0)
#define CLASS_1_EBB10EC01CCC4716_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6E8800)
#define CLASS_1_EBB10EC01CCC4716_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6E8730)
#define CLASS_1_EBB10EC01CCC4716_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6E8890)
#define CLASS_1_EBB10EC01CCC4716_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6E8F30)
#define CLASS_1_EBB10EC01CCC4716_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6E8EC0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A6E86B0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A6E86D0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A6E8710)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6E8650)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1A6E8700)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6E8510)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A6E86C0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A6E86E0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A6E8720)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6E8660)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1A6E86A0)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A6E8680)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1A6E8690)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A6E8670)
#define CLASS_1_EBB10EC01CCC4716_18_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A6E86F0)
#define CLASS_1_EBB10EC01CCC4716_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6E8570)
#define CLASS_1_EBB10EC01CCC4716_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6E88E0)
#define CLASS_1_EBB10EC01CCC4716_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6E8940)
#define CLASS_1_EBB10EC01CCC4716_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6E9030)
#define CLASS_1_EBB10EC01CCC4716_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6E8590)
#define CLASS_1_EBB10EC01CCC4716_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E8580)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_18_TypeDefinitionIndex = 33155;

class Class_1_EBB10EC01CCC4716_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_18*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_18_TypeDefinitionIndex)->GetStaticField(0x18ED0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::System::UInt32 Field_1_9; // 0x18
	::System::Int32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_11; // 0x20
	::System::Int32 Field_1_12; // 0x24
	::System::UInt64 Field_1_13; // 0x28
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_18* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
