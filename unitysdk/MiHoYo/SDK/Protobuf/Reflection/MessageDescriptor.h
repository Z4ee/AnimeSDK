#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf { class MessageParser; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class ReadOnlyDictionary_2; }
namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor_FieldCollection; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptor; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CREATEJSONFIELDMAP_OFFSET UNITYSDK_OFFSET(0x1FC1D850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1FC1DF00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FINDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1FC1DED0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_CLRTYPE_OFFSET UNITYSDK_OFFSET(0x1FC1DCA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x1FC1DEA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWELLKNOWNTYPE_OFFSET UNITYSDK_OFFSET(0x1FC1DCC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWRAPPERTYPE_OFFSET UNITYSDK_OFFSET(0x1FC1DDC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC1DC70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1FC1DEB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ONEOFS_OFFSET UNITYSDK_OFFSET(0x1FC1DEC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FC1DCB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1FC1DC90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1E7C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1D4C0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor_TypeDefinitionIndex = 29179;

	class MessageDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_WellKnownTypeNames()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageDescriptor_TypeDefinitionIndex)->GetStaticField(0x24520);
		}
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fieldsInNumberOrder; // 0x28
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* _NestedTypes_k__BackingField; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* _Proto_k__BackingField; // 0x40
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor_FieldCollection* _Fields_k__BackingField; // 0x48
		::System::Collections::Generic::IDictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* jsonFieldMap; // 0x50
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*>* _Oneofs_k__BackingField; // 0x58
		::System::Type* _ClrType_k__BackingField; // 0x60
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*>* _EnumTypes_k__BackingField; // 0x68
		::MiHoYo::SDK::Protobuf::MessageParser* _Parser_k__BackingField; // 0x70
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fieldsInDeclarationOrder; // 0x78

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 typeIndex, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, typeIndex, generatedCodeInfo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Collections::ReadOnlyDictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* CreateJsonFieldMap(::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fields)
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::ReadOnlyDictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*(*)(::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CREATEJSONFIELDMAP_OFFSET))(fields);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* get_Proto()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::Type* get_ClrType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_CLRTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::MessageParser* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_PARSER_OFFSET))(this);
		}

		::System::Boolean get_IsWellKnownType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWELLKNOWNTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsWrapperType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ISWRAPPERTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor_FieldCollection* get_Fields()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor_FieldCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_FIELDS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>* get_NestedTypes()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_NESTEDTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*>* get_Oneofs()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_GET_ONEOFS_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* FindFieldByNumber(::System::Int32 number)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FINDFIELDBYNUMBER_OFFSET))(this, number);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
