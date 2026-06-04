#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf::Reflection { class DescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class ExtensionCollection; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace Google::Protobuf::Reflection { class MessageDescriptor_FieldCollection; }
namespace Google::Protobuf::Reflection { class OneofDescriptor; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CREATEJSONFIELDMAP_OFFSET UNITYSDK_OFFSET(0x17E70480)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x17E630C0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FINDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x17E70A40)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x17E70930)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x17E709D0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ENUMTYPES_OFFSET UNITYSDK_OFFSET(0x17E70A20)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x17E70A00)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x17E709F0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWELLKNOWNTYPE_OFFSET UNITYSDK_OFFSET(0x17E3F560)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWRAPPERTYPE_OFFSET UNITYSDK_OFFSET(0x17E42C80)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17E5BD20)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x17E70A10)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ONEOFS_OFFSET UNITYSDK_OFFSET(0x17E70A30)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E709E0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x17E709C0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E70A70)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E64340)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor_TypeDefinitionIndex = 5549;

	class MessageDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_WellKnownTypeNames()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor_TypeDefinitionIndex)->GetStaticField(0x3E7C0);
		}
		::Google::Protobuf::MessageParser* _Parser_k__BackingField; // 0x28
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* fieldsInNumberOrder; // 0x30
		::Google::Protobuf::Reflection::MessageDescriptor_FieldCollection* _Fields_k__BackingField; // 0x38
		::System::Type* _ClrType_k__BackingField; // 0x40
		::System::Collections::Generic::IDictionary_2<::System::String*, ::Google::Protobuf::Reflection::FieldDescriptor*>* jsonFieldMap; // 0x48
		::Google::Protobuf::Reflection::ExtensionCollection* _Extensions_k__BackingField; // 0x50
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>* _EnumTypes_k__BackingField; // 0x58
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* fieldsInDeclarationOrder; // 0x60
		::Google::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x68
		::Google::Protobuf::Reflection::DescriptorProto* _Proto_k__BackingField; // 0x70
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>* _NestedTypes_k__BackingField; // 0x78
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::OneofDescriptor*>* _Oneofs_k__BackingField; // 0x80

		::System::Void _ctor(::Google::Protobuf::Reflection::DescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::Google::Protobuf::Reflection::MessageDescriptor* a3, ::System::Int32 a4, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CCTOR_OFFSET))();
		}

		static ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::String*, ::Google::Protobuf::Reflection::FieldDescriptor*>* CreateJsonFieldMap(::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* a1)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::String*, ::Google::Protobuf::Reflection::FieldDescriptor*>*(*)(::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CREATEJSONFIELDMAP_OFFSET))(a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Reflection::DescriptorProto* get_Proto()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::Type* get_ClrType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_CLRTYPE_OFFSET))(this);
		}

		::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PARSER_OFFSET))(this);
		}

		::System::Boolean get_IsWellKnownType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWELLKNOWNTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsWrapperType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWRAPPERTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageDescriptor_FieldCollection* get_Fields()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor_FieldCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_FIELDS_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionCollection* get_Extensions()
		{
			return ((::Google::Protobuf::Reflection::ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_EXTENSIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>* get_NestedTypes()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MessageDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NESTEDTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>* get_EnumTypes()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ENUMTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::OneofDescriptor*>* get_Oneofs()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::OneofDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ONEOFS_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* FindFieldByNumber(::System::Int32 a1)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FINDFIELDBYNUMBER_OFFSET))(this, a1);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
