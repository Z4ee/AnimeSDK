#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::Animation { class AnimationControllerData; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE5623A0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE5623B0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_WRITE_OFFSET UNITYSDK_OFFSET(0xE562540)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5626A0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A__CTOR_OFFSET UNITYSDK_OFFSET(0xE562660)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerData_Class_3_C6DA9A054378673A_TypeDefinitionIndex = 54910;

	class AnimationControllerData_Class_3_C6DA9A054378673A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::Animation::AnimationControllerData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerData_Class_3_C6DA9A054378673A_TypeDefinitionIndex)->GetStaticField(0x37720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ICPUAnimationLib*, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::ICPUAnimationLib*, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerData_Class_3_C6DA9A054378673A_TypeDefinitionIndex)->GetStaticField(0x37728);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationControllerData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationControllerData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_CLASS_3_C6DA9A054378673A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
