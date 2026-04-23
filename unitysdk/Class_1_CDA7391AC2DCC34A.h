#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CDA7391AC2DCC34A_Enum_3_060898AA908AAA4E_20.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_CDA7391AC2DCC34A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192B7560)
#define CLASS_1_CDA7391AC2DCC34A_CLONE_OFFSET UNITYSDK_OFFSET(0x192B6E50)
#define CLASS_1_CDA7391AC2DCC34A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192B6ED0)
#define CLASS_1_CDA7391AC2DCC34A_EQUALS_OFFSET UNITYSDK_OFFSET(0x192B6EA0)
#define CLASS_1_CDA7391AC2DCC34A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192B7210)
#define CLASS_1_CDA7391AC2DCC34A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192B7A00)
#define CLASS_1_CDA7391AC2DCC34A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192B77C0)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x192B6E80)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192B6A80)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x192B6DA0)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x192B6CF0)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_7E46B904D08C26AC_OFFSET UNITYSDK_OFFSET(0x192B6C90)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x192B6E90)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_ECF173E3C678F858_OFFSET UNITYSDK_OFFSET(0x192B6CD0)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x192B6E20)
#define CLASS_1_CDA7391AC2DCC34A_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x192B6D70)
#define CLASS_1_CDA7391AC2DCC34A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192B6AB0)
#define CLASS_1_CDA7391AC2DCC34A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192B7330)
#define CLASS_1_CDA7391AC2DCC34A_WRITETO_OFFSET UNITYSDK_OFFSET(0x192B7390)
#define CLASS_1_CDA7391AC2DCC34A__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B7B40)
#define CLASS_1_CDA7391AC2DCC34A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192B6AD0)
#define CLASS_1_CDA7391AC2DCC34A__CTOR_OFFSET UNITYSDK_OFFSET(0x192B6AC0)

inline static constexpr unsigned int Class_1_CDA7391AC2DCC34A_TypeDefinitionIndex = 32214;

class Class_1_CDA7391AC2DCC34A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_CDA7391AC2DCC34A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CDA7391AC2DCC34A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDA7391AC2DCC34A_TypeDefinitionIndex)->GetStaticField(0x42810);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_5; // 0x18
	::Class_1_CDA7391AC2DCC34A_Enum_3_060898AA908AAA4E_20 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CDA7391AC2DCC34A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDA7391AC2DCC34A*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CDA7391AC2DCC34A*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CDA7391AC2DCC34A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CDA7391AC2DCC34A* Clone()
	{
		return ((::Class_1_CDA7391AC2DCC34A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_CLONE_OFFSET))(this);
	}

	::Proto::SceneEntityInfo* Method_1_7E46B904D08C26AC()
	{
		return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_7E46B904D08C26AC_OFFSET))(this);
	}

	::System::Void Method_1_ECF173E3C678F858(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_ECF173E3C678F858_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_CDA7391AC2DCC34A_Enum_3_060898AA908AAA4E_20 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_CDA7391AC2DCC34A_Enum_3_060898AA908AAA4E_20(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CDA7391AC2DCC34A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CDA7391AC2DCC34A*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CDA7391AC2DCC34A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDA7391AC2DCC34A*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CDA7391AC2DCC34A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
