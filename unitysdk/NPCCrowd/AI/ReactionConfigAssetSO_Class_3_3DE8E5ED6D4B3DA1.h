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

#define NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10295A60)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10295A70)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_WRITE_OFFSET UNITYSDK_OFFSET(0x10295C00)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10295D60)
#define NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x10295D20)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfigAssetSO_Class_3_3DE8E5ED6D4B3DA1_TypeDefinitionIndex = 61773;

	class ReactionConfigAssetSO_Class_3_3DE8E5ED6D4B3DA1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::ReactionConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::EventStimulusConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionConfigAssetSO_Class_3_3DE8E5ED6D4B3DA1_TypeDefinitionIndex)->GetStaticField(0x338A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::ReactionConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ReactionConfigAssetSO_Class_3_3DE8E5ED6D4B3DA1_TypeDefinitionIndex)->GetStaticField(0x338A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::ReactionConfigAssetSO*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::AI::ReactionConfigAssetSO*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ReactionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REACTIONCONFIGASSETSO_CLASS_3_3DE8E5ED6D4B3DA1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
