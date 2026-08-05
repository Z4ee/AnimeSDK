#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }
namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE941D20)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE941D60)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__INITZONEDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0xE941D70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineManager___c_TypeDefinitionIndex = 47804;

	class NPCAnimationTimelineManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>** StaticGet___9__22_0()
		{
			return (::System::Comparison_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineManager___c_TypeDefinitionIndex)->GetStaticField(0x37750);
		}
		static ::NPCCrowd::Animation::NPCAnimationTimelineManager___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::NPCAnimationTimelineManager___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineManager___c_TypeDefinitionIndex)->GetStaticField(0x37758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitZoneData_b__22_0(::NPCCrowd::Animation::AnimatorZoneSegmentWrap* a, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__INITZONEDATA_B__22_0_OFFSET))(this, a, b);
		}
	};
}
