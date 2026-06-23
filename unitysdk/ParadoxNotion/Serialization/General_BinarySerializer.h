#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/GeneralUsage.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace ParadoxNotion::Serialization { class General_BinarySerializer_UsageContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRAFORMATTER_OFFSET UNITYSDK_OFFSET(0x1D417EF0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRARESOLVER_OFFSET UNITYSDK_OFFSET(0x1D418070)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ENLARGEBUFF_OFFSET UNITYSDK_OFFSET(0x1D4181F0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D417D40)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1D417600)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_MARKUNINIT_OFFSET UNITYSDK_OFFSET(0x1D417500)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_RESET_OFFSET UNITYSDK_OFFSET(0x1D417DC0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D418300)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTFORMATTERS_OFFSET UNITYSDK_OFFSET(0x1D417CC0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTRESOLVERS_OFFSET UNITYSDK_OFFSET(0x1D417AD0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int General_BinarySerializer_TypeDefinitionIndex = 29236;

	class General_BinarySerializer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::ParadoxNotion::Serialization::GeneralUsage, ::ParadoxNotion::Serialization::General_BinarySerializer_UsageContext*>** StaticGet__usageContexts()
		{
			return (::System::Collections::Generic::Dictionary_2<::ParadoxNotion::Serialization::GeneralUsage, ::ParadoxNotion::Serialization::General_BinarySerializer_UsageContext*>**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x24560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Void MarkUnInit(::ParadoxNotion::Serialization::GeneralUsage usage)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_MARKUNINIT_OFFSET))(usage);
		}

		static ::System::Void Init(::ParadoxNotion::Serialization::GeneralUsage usage)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_INIT_OFFSET))(usage);
		}

		static ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* _GetDefaultResolvers(::System::Boolean isContainsAutoGen)
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTRESOLVERS_OFFSET))(isContainsAutoGen);
		}

		static ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* _GetDefaultFormatters()
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTFORMATTERS_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::General_BinarySerializer_UsageContext* GetContext(::ParadoxNotion::Serialization::GeneralUsage usage)
		{
			return ((::ParadoxNotion::Serialization::General_BinarySerializer_UsageContext*(*)(::ParadoxNotion::Serialization::GeneralUsage))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_GETCONTEXT_OFFSET))(usage);
		}

		static ::System::Void Reset(::ParadoxNotion::Serialization::GeneralUsage usage)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_RESET_OFFSET))(usage);
		}

		static ::System::Void AttachExtraFormatter(::ParadoxNotion::Serialization::GeneralUsage usage, ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage, ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRAFORMATTER_OFFSET))(usage, formatters);
		}

		static ::System::Void AttachExtraResolver(::ParadoxNotion::Serialization::GeneralUsage usage, ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage, ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRARESOLVER_OFFSET))(usage, resolvers);
		}

		static ::System::Void EnlargeBuff(::ParadoxNotion::Serialization::GeneralUsage usage, ::System::Int32 size)
		{
			return ((::System::Void(*)(::ParadoxNotion::Serialization::GeneralUsage, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ENLARGEBUFF_OFFSET))(usage, size);
		}
	};
}
