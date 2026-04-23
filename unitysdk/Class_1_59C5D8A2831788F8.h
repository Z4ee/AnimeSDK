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

#define CLASS_1_59C5D8A2831788F8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194149D0)
#define CLASS_1_59C5D8A2831788F8_CLONE_OFFSET UNITYSDK_OFFSET(0x19414610)
#define CLASS_1_59C5D8A2831788F8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194146E0)
#define CLASS_1_59C5D8A2831788F8_EQUALS_OFFSET UNITYSDK_OFFSET(0x194146B0)
#define CLASS_1_59C5D8A2831788F8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194147C0)
#define CLASS_1_59C5D8A2831788F8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19414C70)
#define CLASS_1_59C5D8A2831788F8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19414BE0)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19414670)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19414690)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19414640)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x194144F0)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19414680)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x194146A0)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19414650)
#define CLASS_1_59C5D8A2831788F8_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x19414660)
#define CLASS_1_59C5D8A2831788F8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19414520)
#define CLASS_1_59C5D8A2831788F8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19414840)
#define CLASS_1_59C5D8A2831788F8_WRITETO_OFFSET UNITYSDK_OFFSET(0x194148A0)
#define CLASS_1_59C5D8A2831788F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19414D60)
#define CLASS_1_59C5D8A2831788F8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19414570)
#define CLASS_1_59C5D8A2831788F8__CTOR_OFFSET UNITYSDK_OFFSET(0x19414530)

inline static constexpr unsigned int Class_1_59C5D8A2831788F8_TypeDefinitionIndex = 32206;

class Class_1_59C5D8A2831788F8 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59C5D8A2831788F8_TypeDefinitionIndex)->GetStaticField(0x43FD0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_59C5D8A2831788F8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_59C5D8A2831788F8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59C5D8A2831788F8_TypeDefinitionIndex)->GetStaticField(0x43FD8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_6; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_59C5D8A2831788F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59C5D8A2831788F8*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_59C5D8A2831788F8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_59C5D8A2831788F8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_59C5D8A2831788F8* Clone()
	{
		return ((::Class_1_59C5D8A2831788F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_59C5D8A2831788F8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_59C5D8A2831788F8*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_59C5D8A2831788F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59C5D8A2831788F8*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_59C5D8A2831788F8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
