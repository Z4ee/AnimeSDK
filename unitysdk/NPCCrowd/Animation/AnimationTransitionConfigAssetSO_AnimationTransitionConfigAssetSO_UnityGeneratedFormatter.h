#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageTransitionConfig.h"
#include "unitysdk/NPCCrowd/Animation/StateMachineTransitionConfig.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::Animation { class AnimationTransitionConfigAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x8C496A0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x8C496B0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x8C498B0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C49A70)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C49A30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationTransitionConfigAssetSO_AnimationTransitionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex = 83050;

	class AnimationTransitionConfigAssetSO_AnimationTransitionConfigAssetSO_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(AnimationTransitionConfigAssetSO_AnimationTransitionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x318B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(AnimationTransitionConfigAssetSO_AnimationTransitionConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x318B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_ANIMATIONTRANSITIONCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
