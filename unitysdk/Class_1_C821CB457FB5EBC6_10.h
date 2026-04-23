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

#define CLASS_1_C821CB457FB5EBC6_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192FEF00)
#define CLASS_1_C821CB457FB5EBC6_10_CLONE_OFFSET UNITYSDK_OFFSET(0x192FEB10)
#define CLASS_1_C821CB457FB5EBC6_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192FECD0)
#define CLASS_1_C821CB457FB5EBC6_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x192FEC10)
#define CLASS_1_C821CB457FB5EBC6_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192FED90)
#define CLASS_1_C821CB457FB5EBC6_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192FF170)
#define CLASS_1_C821CB457FB5EBC6_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192FF0C0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x192FEBD0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x192FEBF0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192FEB90)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192FEA50)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x192FEBC0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x192FEBB0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x192FEBE0)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x192FEC00)
#define CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192FEBA0)
#define CLASS_1_C821CB457FB5EBC6_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192FEA80)
#define CLASS_1_C821CB457FB5EBC6_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192FEDD0)
#define CLASS_1_C821CB457FB5EBC6_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x192FEE30)
#define CLASS_1_C821CB457FB5EBC6_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x192FF260)
#define CLASS_1_C821CB457FB5EBC6_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192FEAA0)
#define CLASS_1_C821CB457FB5EBC6_10__CTOR_OFFSET UNITYSDK_OFFSET(0x192FEA90)

inline static constexpr unsigned int Class_1_C821CB457FB5EBC6_10_TypeDefinitionIndex = 28387;

class Class_1_C821CB457FB5EBC6_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C821CB457FB5EBC6_10_TypeDefinitionIndex)->GetStaticField(0x5E970);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Proto::ItemList* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C821CB457FB5EBC6_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_10*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_10*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C821CB457FB5EBC6_10* Clone()
	{
		return ((::Class_1_C821CB457FB5EBC6_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C821CB457FB5EBC6_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_10*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C821CB457FB5EBC6_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_10*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
