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

#define CLASS_1_2CC11CDCB897D481_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B645D0)
#define CLASS_1_2CC11CDCB897D481_CLONE_OFFSET UNITYSDK_OFFSET(0x19B64230)
#define CLASS_1_2CC11CDCB897D481_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B643B0)
#define CLASS_1_2CC11CDCB897D481_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B64300)
#define CLASS_1_2CC11CDCB897D481_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B64450)
#define CLASS_1_2CC11CDCB897D481_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B64790)
#define CLASS_1_2CC11CDCB897D481_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B64730)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B642D0)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B642B0)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B64150)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B642E0)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B642C0)
#define CLASS_1_2CC11CDCB897D481_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x19B642F0)
#define CLASS_1_2CC11CDCB897D481_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B64180)
#define CLASS_1_2CC11CDCB897D481_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B644A0)
#define CLASS_1_2CC11CDCB897D481_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B64500)
#define CLASS_1_2CC11CDCB897D481__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B64860)
#define CLASS_1_2CC11CDCB897D481__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B641C0)
#define CLASS_1_2CC11CDCB897D481__CTOR_OFFSET UNITYSDK_OFFSET(0x19B64190)

inline static constexpr unsigned int Class_1_2CC11CDCB897D481_TypeDefinitionIndex = 24924;

class Class_1_2CC11CDCB897D481 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CC11CDCB897D481_TypeDefinitionIndex)->GetStaticField(0x6050);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CC11CDCB897D481_TypeDefinitionIndex)->GetStaticField(0x6058);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2CC11CDCB897D481* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2CC11CDCB897D481* Clone()
	{
		return ((::Class_1_2CC11CDCB897D481*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2CC11CDCB897D481* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2CC11CDCB897D481*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2CC11CDCB897D481* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_MERGEFROM_1_OFFSET))(this, a1);
	}
};
