#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL___C__DISPLAYCLASS63_0__CREATEEMOTIONEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x112A2EA0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112A2E90)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCEmotionControl___c__DisplayClass63_0_TypeDefinitionIndex = 91143;

	class NPCEmotionControl___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 pos; // 0x10
		::UnityEngine::Quaternion rot; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateEmotionEffect_b__0(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL___C__DISPLAYCLASS63_0__CREATEEMOTIONEFFECT_B__0_OFFSET))(this, entity);
		}
	};
}
