#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11943750)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11943790)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_B__42_0_OFFSET UNITYSDK_OFFSET(0x119437A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex = 45772;

	class NPCCPUAnimationGraphDataset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex)->GetStaticField(0x37760);
		}
		static ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::NPCCPUAnimationGraphDataset___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCPUAnimationGraphDataset___c_TypeDefinitionIndex)->GetStaticField(0x37768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _NPCCrowd_Animation_IAnimationLib_GetAnimations_b__42_0(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* item)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET___C__NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_B__42_0_OFFSET))(this, item);
		}
	};
}
