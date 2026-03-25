#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorPool_DescriptorIntPair.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class IDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET UNITYSDK_OFFSET(0x15D9F910)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x15D9F570)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET UNITYSDK_OFFSET(0x15D9E800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x15D9ED20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x15D9F440)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x15D9E4A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET UNITYSDK_OFFSET(0x15D9FB20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET UNITYSDK_OFFSET(0x15D9F1A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D9FE00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9E140)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorPool_TypeDefinitionIndex = 28108;

	class DescriptorPool : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ValidationRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DescriptorPool_TypeDefinitionIndex)->GetStaticField(0x216B0);
		}
		::System::Collections::Generic::IDictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*>* descriptorsByName; // 0x10
		::System::Collections::Generic::IDictionary_2<::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*>* enumValuesByNumber; // 0x18
		::System::Collections::Generic::IDictionary_2<::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fieldsByNumber; // 0x20
		::System::Collections::Generic::HashSet_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies; // 0x28

		::System::Void _ctor(::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencyFiles)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET))(this, dependencyFiles);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET))();
		}

		::System::Void ImportPublicDependencies(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET))(this, file);
		}

		::System::Void AddPackage(::System::String* fullName, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET))(this, fullName, file);
		}

		::System::Void AddSymbol(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET))(this, descriptor);
		}

		static ::System::Void ValidateSymbolName(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* descriptor)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET))(descriptor);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* FindFieldByNumber(::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageDescriptor, ::System::Int32 number)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET))(this, messageDescriptor, number);
		}

		::System::Void AddFieldByNumber(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* field)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET))(this, field);
		}

		::System::Void AddEnumValueByNumber(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor* enumValue)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET))(this, enumValue);
		}

		::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* LookupSymbol(::System::String* name, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* relativeTo)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET))(this, name, relativeTo);
		}
	};
}
