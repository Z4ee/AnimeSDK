#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Value; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173C4760)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_CLONE_OFFSET UNITYSDK_OFFSET(0x173C44A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173C45B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_OFFSET UNITYSDK_OFFSET(0x173C4500)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173C4620)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C41D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x173C44F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173C4170)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173C4850)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173C47F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C4350)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173C4670)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_WRITETO_OFFSET UNITYSDK_OFFSET(0x173C46D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C4910)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173C4400)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x173C43B0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 33658;

	class Struct : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_TypeDefinitionIndex)->GetStaticField(0xE40);
		}
		static ::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>** StaticGet__map_fields_codec()
		{
			return (::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_TypeDefinitionIndex)->GetStaticField(0xE48);
		}
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>* fields_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>* get_Fields()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GET_FIELDS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
