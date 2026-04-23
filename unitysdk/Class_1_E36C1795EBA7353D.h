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

#define CLASS_1_E36C1795EBA7353D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19426CD0)
#define CLASS_1_E36C1795EBA7353D_CLONE_OFFSET UNITYSDK_OFFSET(0x194268A0)
#define CLASS_1_E36C1795EBA7353D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19426A80)
#define CLASS_1_E36C1795EBA7353D_EQUALS_OFFSET UNITYSDK_OFFSET(0x194269B0)
#define CLASS_1_E36C1795EBA7353D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19426B50)
#define CLASS_1_E36C1795EBA7353D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19426EE0)
#define CLASS_1_E36C1795EBA7353D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19426E30)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19426990)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19426950)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x194267D0)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19426940)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19426930)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x194269A0)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19426960)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19426980)
#define CLASS_1_E36C1795EBA7353D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19426970)
#define CLASS_1_E36C1795EBA7353D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19426800)
#define CLASS_1_E36C1795EBA7353D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19426BA0)
#define CLASS_1_E36C1795EBA7353D_WRITETO_OFFSET UNITYSDK_OFFSET(0x19426C00)
#define CLASS_1_E36C1795EBA7353D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19426FE0)
#define CLASS_1_E36C1795EBA7353D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19426820)
#define CLASS_1_E36C1795EBA7353D__CTOR_OFFSET UNITYSDK_OFFSET(0x19426810)

inline static constexpr unsigned int Class_1_E36C1795EBA7353D_TypeDefinitionIndex = 26340;

class Class_1_E36C1795EBA7353D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E36C1795EBA7353D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E36C1795EBA7353D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E36C1795EBA7353D_TypeDefinitionIndex)->GetStaticField(0x45990);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Proto::ItemList* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::Boolean Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E36C1795EBA7353D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E36C1795EBA7353D*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E36C1795EBA7353D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E36C1795EBA7353D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E36C1795EBA7353D* Clone()
	{
		return ((::Class_1_E36C1795EBA7353D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E36C1795EBA7353D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E36C1795EBA7353D*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E36C1795EBA7353D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E36C1795EBA7353D*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E36C1795EBA7353D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
