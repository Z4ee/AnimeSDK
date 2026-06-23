#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd::Avatar { class PartRendererOverrideInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT_APPLYAVATARPARTOVERRIDEPROP_OFFSET UNITYSDK_OFFSET(0x13A07730)
#define NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13A076E0)
#define NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A079B0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarPartOverridePropertiesComponent_TypeDefinitionIndex = 83068;

	class NPCAvatarPartOverridePropertiesComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::PartRendererOverrideInfo*>* partRenderOverrideInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void ApplyAvatarPartOverrideProp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARPARTOVERRIDEPROPERTIESCOMPONENT_APPLYAVATARPARTOVERRIDEPROP_OFFSET))(this);
		}
	};
}
