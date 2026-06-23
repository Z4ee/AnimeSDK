#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusConfig.h"
#include "unitysdk/NPCCrowd/AI/ReactionConfig.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class ReactionConfigAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xEBC27F0)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xEBC2800)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xEBC29E0)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC2B80)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC2B40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfigAssetSO_ReactionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex = 40116;

	class ReactionConfigAssetSO_ReactionConfigAssetSO_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::ReactionConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionConfigAssetSO_ReactionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionConfigAssetSO_ReactionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::ReactionConfigAssetSO*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NPCCrowd::AI::ReactionConfigAssetSO*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_REACTIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
