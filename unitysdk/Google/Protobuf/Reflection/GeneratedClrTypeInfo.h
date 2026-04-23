#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf { class MessageParser; }
namespace System { class String; }
namespace System { class Type; }

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x1710DDA0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1710DDE0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDENUMS_OFFSET UNITYSDK_OFFSET(0x1710DE10)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1710DE00)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_ONEOFNAMES_OFFSET UNITYSDK_OFFSET(0x1710DDF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1710DDC0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1710DDD0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_SET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x1710DDB0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1710DE20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F1B40)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x170F1990)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedClrTypeInfo_TypeDefinitionIndex = 6343;

	class GeneratedClrTypeInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Google::Protobuf::Extension*>** StaticGet_EmptyExtensions()
		{
			return (::Il2CppArray<::Google::Protobuf::Extension*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedClrTypeInfo_TypeDefinitionIndex)->GetStaticField(0x5850);
		}
		static ::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>** StaticGet_EmptyCodeInfo()
		{
			return (::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedClrTypeInfo_TypeDefinitionIndex)->GetStaticField(0x5858);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EmptyNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedClrTypeInfo_TypeDefinitionIndex)->GetStaticField(0x5860);
		}
		::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>* _NestedTypes_k__BackingField; // 0x10
		::Il2CppArray<::System::Type*>* _NestedEnums_k__BackingField; // 0x18
		::Google::Protobuf::MessageParser* _Parser_k__BackingField; // 0x20
		::System::Type* _ClrType_k__BackingField; // 0x28
		::Il2CppArray<::Google::Protobuf::Extension*>* _Extensions_k__BackingField; // 0x30
		::Il2CppArray<::System::String*>* _PropertyNames_k__BackingField; // 0x38
		::Il2CppArray<::System::String*>* _OneofNames_k__BackingField; // 0x40

		::System::Void _ctor(::System::Type* clrType, ::Google::Protobuf::MessageParser* parser, ::Il2CppArray<::System::String*>* propertyNames, ::Il2CppArray<::System::String*>* oneofNames, ::Il2CppArray<::System::Type*>* nestedEnums, ::Il2CppArray<::Google::Protobuf::Extension*>* extensions, ::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>* nestedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Google::Protobuf::MessageParser*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::Google::Protobuf::Extension*>*, ::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_OFFSET))(this, clrType, parser, propertyNames, oneofNames, nestedEnums, extensions, nestedTypes);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Type*>* nestedEnums, ::Il2CppArray<::Google::Protobuf::Extension*>* extensions, ::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>* nestedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::Google::Protobuf::Extension*>*, ::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CTOR_1_OFFSET))(this, nestedEnums, extensions, nestedTypes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO__CCTOR_OFFSET))();
		}

		::System::Type* get_ClrType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_CLRTYPE_OFFSET))(this);
		}

		::System::Void set_ClrType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_SET_CLRTYPE_OFFSET))(this, value);
		}

		::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PARSER_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_PropertyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_PROPERTYNAMES_OFFSET))(this);
		}

		::Il2CppArray<::Google::Protobuf::Extension*>* get_Extensions()
		{
			return ((::Il2CppArray<::Google::Protobuf::Extension*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_EXTENSIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OneofNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_ONEOFNAMES_OFFSET))(this);
		}

		::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>* get_NestedTypes()
		{
			return ((::Il2CppArray<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDTYPES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* get_NestedEnums()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCLRTYPEINFO_GET_NESTEDENUMS_OFFSET))(this);
		}
	};
}
