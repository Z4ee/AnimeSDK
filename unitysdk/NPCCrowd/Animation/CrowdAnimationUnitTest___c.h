#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10703940)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10703980)
#define NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__GETGENDERSIZEANIMATIONS_B__7_0_OFFSET UNITYSDK_OFFSET(0x10703990)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationUnitTest___c_TypeDefinitionIndex = 40631;

	class CrowdAnimationUnitTest___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::CrowdAnimationUnitTest___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::CrowdAnimationUnitTest___c**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationUnitTest___c_TypeDefinitionIndex)->GetStaticField(0x4C270);
		}
		static ::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationUnitTest___c_TypeDefinitionIndex)->GetStaticField(0x4C278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetGenderSizeAnimations_b__7_0(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* n)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONUNITTEST___C__GETGENDERSIZEANIMATIONS_B__7_0_OFFSET))(this, n);
		}
	};
}
