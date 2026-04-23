#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BBD89639E9FC96D7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19618650)
#define CLASS_1_BBD89639E9FC96D7_CLONE_OFFSET UNITYSDK_OFFSET(0x19617F30)
#define CLASS_1_BBD89639E9FC96D7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19618290)
#define CLASS_1_BBD89639E9FC96D7_EQUALS_OFFSET UNITYSDK_OFFSET(0x196181B0)
#define CLASS_1_BBD89639E9FC96D7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19618350)
#define CLASS_1_BBD89639E9FC96D7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19618B90)
#define CLASS_1_BBD89639E9FC96D7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19618A80)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19618010)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19618030)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19617FF0)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19618100)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19618050)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19617FE0)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19617E30)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19618020)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19618040)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19618000)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x19618110)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19618060)
#define CLASS_1_BBD89639E9FC96D7_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19617FD0)
#define CLASS_1_BBD89639E9FC96D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19617E90)
#define CLASS_1_BBD89639E9FC96D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196184B0)
#define CLASS_1_BBD89639E9FC96D7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19618510)
#define CLASS_1_BBD89639E9FC96D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19618DA0)
#define CLASS_1_BBD89639E9FC96D7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19617EC0)
#define CLASS_1_BBD89639E9FC96D7__CTOR_OFFSET UNITYSDK_OFFSET(0x19617EA0)

inline static constexpr unsigned int Class_1_BBD89639E9FC96D7_TypeDefinitionIndex = 23914;

class Class_1_BBD89639E9FC96D7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BBD89639E9FC96D7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BBD89639E9FC96D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBD89639E9FC96D7_TypeDefinitionIndex)->GetStaticField(0x5D210);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	::System::String* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::String* Field_1_13; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::UInt64 Field_1_3; // 0x30
	::System::UInt32 Field_1_9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BBD89639E9FC96D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BBD89639E9FC96D7*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BBD89639E9FC96D7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BBD89639E9FC96D7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BBD89639E9FC96D7* Clone()
	{
		return ((::Class_1_BBD89639E9FC96D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BBD89639E9FC96D7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BBD89639E9FC96D7*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BBD89639E9FC96D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BBD89639E9FC96D7*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BBD89639E9FC96D7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
