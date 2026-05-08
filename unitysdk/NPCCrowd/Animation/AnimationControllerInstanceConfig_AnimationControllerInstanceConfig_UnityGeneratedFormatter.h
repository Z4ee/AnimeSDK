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

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB53C2F0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB53C300)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB53C5A0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB53C7A0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB53C760)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerInstanceConfig_AnimationControllerInstanceConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 59439;

	class AnimationControllerInstanceConfig_AnimationControllerInstanceConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootOnGroundSegment>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerInstanceConfig_AnimationControllerInstanceConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AFA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::Animation::ICPUAnimationLib*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationControllerInstanceConfig_AnimationControllerInstanceConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AFA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationControllerInstanceConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationControllerInstanceConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERINSTANCECONFIG_ANIMATIONCONTROLLERINSTANCECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
