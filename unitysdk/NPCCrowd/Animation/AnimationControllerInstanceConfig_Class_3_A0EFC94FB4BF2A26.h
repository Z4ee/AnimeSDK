#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootOnGroundSegment.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x157AC950)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_READMEMBER_OFFSET UNITYSDK_OFFSET(0x157AC960)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_WRITE_OFFSET UNITYSDK_OFFSET(0x157ACBC0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26__CCTOR_OFFSET UNITYSDK_OFFSET(0x157ACD80)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26__CTOR_OFFSET UNITYSDK_OFFSET(0x157ACD40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerInstanceConfig_Class_3_A0EFC94FB4BF2A26_TypeDefinitionIndex = 68355;

	class AnimationControllerInstanceConfig_Class_3_A0EFC94FB4BF2A26 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerInstanceConfig_Class_3_A0EFC94FB4BF2A26_TypeDefinitionIndex)->GetStaticField(0x47620);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerInstanceConfig_Class_3_A0EFC94FB4BF2A26_TypeDefinitionIndex)->GetStaticField(0x47628);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationControllerInstanceConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationControllerInstanceConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_CLASS_3_A0EFC94FB4BF2A26_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
