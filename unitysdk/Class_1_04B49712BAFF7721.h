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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_04B49712BAFF7721_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB5DB00)
#define CLASS_1_04B49712BAFF7721_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB5D500)
#define CLASS_1_04B49712BAFF7721_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB5D620)
#define CLASS_1_04B49712BAFF7721_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB5D5C0)
#define CLASS_1_04B49712BAFF7721_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB5D800)
#define CLASS_1_04B49712BAFF7721_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB5DDB0)
#define CLASS_1_04B49712BAFF7721_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB5DCC0)
#define CLASS_1_04B49712BAFF7721_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CB5D5A0)
#define CLASS_1_04B49712BAFF7721_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CB5D550)
#define CLASS_1_04B49712BAFF7721_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CB5D330)
#define CLASS_1_04B49712BAFF7721_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1CB5D580)
#define CLASS_1_04B49712BAFF7721_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1CB5D570)
#define CLASS_1_04B49712BAFF7721_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CB5D5B0)
#define CLASS_1_04B49712BAFF7721_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CB5D560)
#define CLASS_1_04B49712BAFF7721_METHOD_1_79BDCBF9AC4A54C3_OFFSET UNITYSDK_OFFSET(0x1CB5D590)
#define CLASS_1_04B49712BAFF7721_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB5D390)
#define CLASS_1_04B49712BAFF7721_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB5D8E0)
#define CLASS_1_04B49712BAFF7721_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB5D940)
#define CLASS_1_04B49712BAFF7721__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB5DF10)
#define CLASS_1_04B49712BAFF7721__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB5D3F0)
#define CLASS_1_04B49712BAFF7721__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5D3A0)

inline static constexpr unsigned int Class_1_04B49712BAFF7721_TypeDefinitionIndex = 26869;

class Class_1_04B49712BAFF7721 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Proto::ItemList*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Proto::ItemList*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04B49712BAFF7721_TypeDefinitionIndex)->GetStaticField(0x21DB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_04B49712BAFF7721*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_04B49712BAFF7721*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04B49712BAFF7721_TypeDefinitionIndex)->GetStaticField(0x21DB8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>* Field_1_7; // 0x18
	::Proto::ItemList* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_04B49712BAFF7721* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04B49712BAFF7721*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_04B49712BAFF7721*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_04B49712BAFF7721*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_04B49712BAFF7721* Clone()
	{
		return ((::Class_1_04B49712BAFF7721*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>* Method_1_79BDCBF9AC4A54C3()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_79BDCBF9AC4A54C3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_04B49712BAFF7721* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_04B49712BAFF7721*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_04B49712BAFF7721* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04B49712BAFF7721*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_04B49712BAFF7721_MERGEFROM_1_OFFSET))(this, a1);
	}
};
