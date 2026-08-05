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

#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1128E5D0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1128E5E0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_WRITE_OFFSET UNITYSDK_OFFSET(0x1128E790)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66__CCTOR_OFFSET UNITYSDK_OFFSET(0x1128E920)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66__CTOR_OFFSET UNITYSDK_OFFSET(0x1128E8E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationTransitionConfigAssetSO_Class_3_502277011C571D66_TypeDefinitionIndex = 40236;

	class AnimationTransitionConfigAssetSO_Class_3_502277011C571D66 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::StateMachineTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(AnimationTransitionConfigAssetSO_Class_3_502277011C571D66_TypeDefinitionIndex)->GetStaticField(0x50200);
		}
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::MontageTransitionConfig>**)Il2CppClass::FromTypeDefinitionIndex(AnimationTransitionConfigAssetSO_Class_3_502277011C571D66_TypeDefinitionIndex)->GetStaticField(0x50208);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_CLASS_3_502277011C571D66_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
