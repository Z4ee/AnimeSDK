#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class MessageParser; }
namespace System { class String; }
namespace System { class Type; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x1F9A24D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDENUMS_OFFSET UNITYSDK_OFFSET(0x1F9A2530)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1F9A2520)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_ONEOFNAMES_OFFSET UNITYSDK_OFFSET(0x1F9A2510)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F9A24F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1F9A2500)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_SET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x1F9A24E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9A26C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9A2690)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A2540)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedClrTypeInfo_TypeDefinitionIndex = 29175;

	class GeneratedClrTypeInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedClrTypeInfo_TypeDefinitionIndex)->GetStaticField(0x24620);
		}
		static ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>** StaticGet_EmptyCodeInfo()
		{
			return (::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedClrTypeInfo_TypeDefinitionIndex)->GetStaticField(0x24628);
		}
		::Il2CppArray<::System::String*>* _PropertyNames_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _OneofNames_k__BackingField; // 0x18
		::Il2CppArray<::System::Type*>* _NestedEnums_k__BackingField; // 0x20
		::System::Type* _ClrType_k__BackingField; // 0x28
		::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>* _NestedTypes_k__BackingField; // 0x30
		::MiHoYo::SDK::Protobuf::MessageParser* _Parser_k__BackingField; // 0x38

		::System::Void _ctor(::System::Type* clrType, ::MiHoYo::SDK::Protobuf::MessageParser* parser, ::Il2CppArray<::System::String*>* propertyNames, ::Il2CppArray<::System::String*>* oneofNames, ::Il2CppArray<::System::Type*>* nestedEnums, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>* nestedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::MiHoYo::SDK::Protobuf::MessageParser*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_OFFSET))(this, clrType, parser, propertyNames, oneofNames, nestedEnums, nestedTypes);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Type*>* nestedEnums, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>* nestedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_1_OFFSET))(this, nestedEnums, nestedTypes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CCTOR_OFFSET))();
		}

		::System::Type* get_ClrType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_CLRTYPE_OFFSET))(this);
		}

		::System::Void set_ClrType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_SET_CLRTYPE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::MessageParser* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PARSER_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_PropertyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PROPERTYNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OneofNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_ONEOFNAMES_OFFSET))(this);
		}

		::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>* get_NestedTypes()
		{
			return ((::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDTYPES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* get_NestedEnums()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDENUMS_OFFSET))(this);
		}
	};
}
