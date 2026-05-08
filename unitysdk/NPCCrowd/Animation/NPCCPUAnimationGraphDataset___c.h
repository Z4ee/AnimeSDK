#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11508C50)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11508C90)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_B__33_0_OFFSET UNITYSDK_OFFSET(0x11508CA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex = 39152;

	class NPCCPUAnimationGraphDataset___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::NPCCPUAnimationGraphDataset___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex)->GetStaticField(0x33050);
		}
		static ::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex)->GetStaticField(0x33058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _NPCCrowd_Animation_IAnimationLib_GetAnimations_b__33_0(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* item)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_B__33_0_OFFSET))(this, item);
		}
	};
}
