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

#define CLASS_1_2BFA2CD339E4FBC7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198BB1E0)
#define CLASS_1_2BFA2CD339E4FBC7_CLONE_OFFSET UNITYSDK_OFFSET(0x198BADF0)
#define CLASS_1_2BFA2CD339E4FBC7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198BAF00)
#define CLASS_1_2BFA2CD339E4FBC7_EQUALS_OFFSET UNITYSDK_OFFSET(0x198BAEA0)
#define CLASS_1_2BFA2CD339E4FBC7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198BAFD0)
#define CLASS_1_2BFA2CD339E4FBC7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198BB430)
#define CLASS_1_2BFA2CD339E4FBC7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x198BB3B0)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x198BAE70)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198BAE40)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x198BAC40)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x198BAE80)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198BAE50)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x198BAE60)
#define CLASS_1_2BFA2CD339E4FBC7_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x198BAE90)
#define CLASS_1_2BFA2CD339E4FBC7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198BACA0)
#define CLASS_1_2BFA2CD339E4FBC7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198BB030)
#define CLASS_1_2BFA2CD339E4FBC7_WRITETO_OFFSET UNITYSDK_OFFSET(0x198BB090)
#define CLASS_1_2BFA2CD339E4FBC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x198BB590)
#define CLASS_1_2BFA2CD339E4FBC7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198BAD20)
#define CLASS_1_2BFA2CD339E4FBC7__CTOR_OFFSET UNITYSDK_OFFSET(0x198BACB0)

inline static constexpr unsigned int Class_1_2BFA2CD339E4FBC7_TypeDefinitionIndex = 24267;

class Class_1_2BFA2CD339E4FBC7 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BFA2CD339E4FBC7_TypeDefinitionIndex)->GetStaticField(0x21F20);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BFA2CD339E4FBC7_TypeDefinitionIndex)->GetStaticField(0x21F28);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2BFA2CD339E4FBC7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2BFA2CD339E4FBC7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BFA2CD339E4FBC7_TypeDefinitionIndex)->GetStaticField(0x21F30);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2BFA2CD339E4FBC7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2BFA2CD339E4FBC7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2BFA2CD339E4FBC7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2BFA2CD339E4FBC7* Clone()
	{
		return ((::Class_1_2BFA2CD339E4FBC7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2BFA2CD339E4FBC7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2BFA2CD339E4FBC7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2BFA2CD339E4FBC7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
