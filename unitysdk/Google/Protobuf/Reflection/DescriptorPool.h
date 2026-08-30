#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/ObjectIntPair_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class EnumValueDescriptor; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class IDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B3638B0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B363320)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET UNITYSDK_OFFSET(0x1B362200)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x1B3628D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B3631B0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1B361CB0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET UNITYSDK_OFFSET(0x1B363BF0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET UNITYSDK_OFFSET(0x1B362E60)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B363F50)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3610B0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorPool_TypeDefinitionIndex = 5521;

	class DescriptorPool : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ValidationRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DescriptorPool_TypeDefinitionIndex)->GetStaticField(0x1D540);
		}
		::System::Collections::Generic::IDictionary_2<::System::String*, ::Google::Protobuf::Reflection::IDescriptor*>* descriptorsByName; // 0x10
		::System::Collections::Generic::HashSet_1<::Google::Protobuf::Reflection::FileDescriptor*>* dependencies; // 0x18
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::Google::Protobuf::Reflection::IDescriptor*>, ::Google::Protobuf::Reflection::EnumValueDescriptor*>* enumValuesByNumber; // 0x20
		::System::Collections::Generic::IDictionary_2<::Google::Protobuf::ObjectIntPair_1<::Google::Protobuf::Reflection::IDescriptor*>, ::Google::Protobuf::Reflection::FieldDescriptor*>* fieldsByNumber; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Google::Protobuf::Reflection::FileDescriptor*>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET))();
		}

		::System::Void ImportPublicDependencies(::Google::Protobuf::Reflection::FileDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Void AddPackage(::System::String* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET))(this, a1, a2);
		}

		::System::Void AddSymbol(::Google::Protobuf::Reflection::IDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET))(this, a1);
		}

		static ::System::Void ValidateSymbolName(::Google::Protobuf::Reflection::IDescriptor* a1)
		{
			return ((::System::Void(*)(::Google::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET))(a1);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* FindFieldByNumber(::Google::Protobuf::Reflection::MessageDescriptor* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET))(this, a1, a2);
		}

		::System::Void AddFieldByNumber(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET))(this, a1);
		}

		::System::Void AddEnumValueByNumber(::Google::Protobuf::Reflection::EnumValueDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET))(this, a1);
		}

		::Google::Protobuf::Reflection::IDescriptor* LookupSymbol(::System::String* a1, ::Google::Protobuf::Reflection::IDescriptor* a2)
		{
			return ((::Google::Protobuf::Reflection::IDescriptor*(*)(::PVOID, ::System::String*, ::Google::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET))(this, a1, a2);
		}
	};
}
