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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B0DFE20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B0DF9D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET UNITYSDK_OFFSET(0x1B0DE8D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x1B0DEF60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET UNITYSDK_OFFSET(0x1B0DF850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1B0DE3D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET UNITYSDK_OFFSET(0x1B0E00F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET UNITYSDK_OFFSET(0x1B0DF500)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0E0450)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DE0A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorPool_TypeDefinitionIndex = 35152;

	class DescriptorPool : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ValidationRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DescriptorPool_TypeDefinitionIndex)->GetStaticField(0x482D0);
		}
		::System::Collections::Generic::IDictionary_2<::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* fieldsByNumber; // 0x10
		::System::Collections::Generic::IDictionary_2<::MiHoYo::SDK::Protobuf::Reflection::DescriptorPool_DescriptorIntPair, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*>* enumValuesByNumber; // 0x18
		::System::Collections::Generic::IDictionary_2<::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*>* descriptorsByName; // 0x20
		::System::Collections::Generic::HashSet_1<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* dependencies; // 0x28

		::System::Void _ctor(::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL__CCTOR_OFFSET))();
		}

		::System::Void ImportPublicDependencies(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_IMPORTPUBLICDEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Void AddPackage(::System::String* a1, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDPACKAGE_OFFSET))(this, a1, a2);
		}

		::System::Void AddSymbol(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDSYMBOL_OFFSET))(this, a1);
		}

		static ::System::Void ValidateSymbolName(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_VALIDATESYMBOLNAME_OFFSET))(a1);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* FindFieldByNumber(::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_FINDFIELDBYNUMBER_OFFSET))(this, a1, a2);
		}

		::System::Void AddFieldByNumber(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDFIELDBYNUMBER_OFFSET))(this, a1);
		}

		::System::Void AddEnumValueByNumber(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_ADDENUMVALUEBYNUMBER_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* LookupSymbol(::System::String* a1, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* a2)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPOOL_LOOKUPSYMBOL_OFFSET))(this, a1, a2);
		}
	};
}
