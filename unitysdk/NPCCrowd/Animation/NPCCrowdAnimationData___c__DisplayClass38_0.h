#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class GPUISkinnedMeshData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF877DD0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA___C__DISPLAYCLASS38_0__GETSKINNEDMESHDATABYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xF877DE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationData___c__DisplayClass38_0_TypeDefinitionIndex = 76313;

	class NPCCrowdAnimationData___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::String* transformName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkinnedMeshDataByName_b__0(::NPCCrowd::Animation::GPUISkinnedMeshData* smd)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::GPUISkinnedMeshData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA___C__DISPLAYCLASS38_0__GETSKINNEDMESHDATABYNAME_B__0_OFFSET))(this, smd);
		}
	};
}
