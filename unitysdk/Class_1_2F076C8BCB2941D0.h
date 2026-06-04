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

#define CLASS_1_2F076C8BCB2941D0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2F5790)
#define CLASS_1_2F076C8BCB2941D0_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2F5370)
#define CLASS_1_2F076C8BCB2941D0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2F5540)
#define CLASS_1_2F076C8BCB2941D0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2F5460)
#define CLASS_1_2F076C8BCB2941D0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2F55E0)
#define CLASS_1_2F076C8BCB2941D0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2F5910)
#define CLASS_1_2F076C8BCB2941D0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2F58B0)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2F5440)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A2F5260)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A2F5450)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A2F5420)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1A2F5430)
#define CLASS_1_2F076C8BCB2941D0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2F5410)
#define CLASS_1_2F076C8BCB2941D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2F52C0)
#define CLASS_1_2F076C8BCB2941D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2F5630)
#define CLASS_1_2F076C8BCB2941D0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2F5690)
#define CLASS_1_2F076C8BCB2941D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F5B00)
#define CLASS_1_2F076C8BCB2941D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2F5300)
#define CLASS_1_2F076C8BCB2941D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F52D0)

inline static constexpr unsigned int Class_1_2F076C8BCB2941D0_TypeDefinitionIndex = 31298;

class Class_1_2F076C8BCB2941D0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2F076C8BCB2941D0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2F076C8BCB2941D0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F076C8BCB2941D0_TypeDefinitionIndex)->GetStaticField(0x50A50);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F076C8BCB2941D0_TypeDefinitionIndex)->GetStaticField(0x50A58);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2F076C8BCB2941D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F076C8BCB2941D0*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2F076C8BCB2941D0*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2F076C8BCB2941D0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2F076C8BCB2941D0* Clone()
	{
		return ((::Class_1_2F076C8BCB2941D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2F076C8BCB2941D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2F076C8BCB2941D0*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2F076C8BCB2941D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F076C8BCB2941D0*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2F076C8BCB2941D0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
