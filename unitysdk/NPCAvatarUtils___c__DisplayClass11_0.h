#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }

#define NPCAVATARUTILS___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD403580)
#define NPCAVATARUTILS___C__DISPLAYCLASS11_0__UPDATESHADOWPROXYLODCOMMON_B__0_OFFSET UNITYSDK_OFFSET(0xD403590)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass11_0_TypeDefinitionIndex = 52694;

class NPCAvatarUtils___c__DisplayClass11_0 : public ::System::Object
{
public:
	::UnityEngine::Rendering::ShadowCastingMode originalRenderShadowCastMode; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpdateShadowProxyLodCommon_b__0(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* p)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS11_0__UPDATESHADOWPROXYLODCOMMON_B__0_OFFSET))(this, p);
	}
};
