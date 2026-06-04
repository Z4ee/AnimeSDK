#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F138DBFC3396EA15_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A549A30)
#define CLASS_1_F138DBFC3396EA15_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5494B0)
#define CLASS_1_F138DBFC3396EA15_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5496D0)
#define CLASS_1_F138DBFC3396EA15_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A549620)
#define CLASS_1_F138DBFC3396EA15_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5497A0)
#define CLASS_1_F138DBFC3396EA15_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A549EB0)
#define CLASS_1_F138DBFC3396EA15_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A549E30)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A549540)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A549560)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A549520)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A5495B0)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A5495A0)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1A549610)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A549400)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A549550)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A549570)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A549530)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A549590)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A549580)
#define CLASS_1_F138DBFC3396EA15_4_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A549600)
#define CLASS_1_F138DBFC3396EA15_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A549430)
#define CLASS_1_F138DBFC3396EA15_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A549880)
#define CLASS_1_F138DBFC3396EA15_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5498E0)
#define CLASS_1_F138DBFC3396EA15_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A549FC0)
#define CLASS_1_F138DBFC3396EA15_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A549450)
#define CLASS_1_F138DBFC3396EA15_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A549440)

inline static constexpr unsigned int Class_1_F138DBFC3396EA15_4_TypeDefinitionIndex = 32362;

class Class_1_F138DBFC3396EA15_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F138DBFC3396EA15_4_TypeDefinitionIndex)->GetStaticField(0x11670);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::System::String* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::Int32 Field_1_10; // 0x24
	::System::UInt64 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F138DBFC3396EA15_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_4*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F138DBFC3396EA15_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F138DBFC3396EA15_4* Clone()
	{
		return ((::Class_1_F138DBFC3396EA15_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F138DBFC3396EA15_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F138DBFC3396EA15_4*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F138DBFC3396EA15_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F138DBFC3396EA15_4*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F138DBFC3396EA15_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
