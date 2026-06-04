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

#define CLASS_1_4AF9832A6EE2A67F_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A4297A0)
#define CLASS_1_4AF9832A6EE2A67F_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4294C0)
#define CLASS_1_4AF9832A6EE2A67F_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4295F0)
#define CLASS_1_4AF9832A6EE2A67F_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A429550)
#define CLASS_1_4AF9832A6EE2A67F_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A429680)
#define CLASS_1_4AF9832A6EE2A67F_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A429860)
#define CLASS_1_4AF9832A6EE2A67F_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A429810)
#define CLASS_1_4AF9832A6EE2A67F_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A4293E0)
#define CLASS_1_4AF9832A6EE2A67F_4_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1A429540)
#define CLASS_1_4AF9832A6EE2A67F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A429410)
#define CLASS_1_4AF9832A6EE2A67F_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4296C0)
#define CLASS_1_4AF9832A6EE2A67F_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A429720)
#define CLASS_1_4AF9832A6EE2A67F_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4299F0)
#define CLASS_1_4AF9832A6EE2A67F_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A429450)
#define CLASS_1_4AF9832A6EE2A67F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A429420)

inline static constexpr unsigned int Class_1_4AF9832A6EE2A67F_4_TypeDefinitionIndex = 31404;

class Class_1_4AF9832A6EE2A67F_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_4_TypeDefinitionIndex)->GetStaticField(0x649A0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_4_TypeDefinitionIndex)->GetStaticField(0x649A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AF9832A6EE2A67F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_4*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AF9832A6EE2A67F_4* Clone()
	{
		return ((::Class_1_4AF9832A6EE2A67F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AF9832A6EE2A67F_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_4*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AF9832A6EE2A67F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_4*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
