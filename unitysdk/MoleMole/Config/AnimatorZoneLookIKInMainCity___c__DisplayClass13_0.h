#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11095400)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__ONZONEENTER_B__3_OFFSET UNITYSDK_OFFSET(0x11095410)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__ONZONEENTER_B__4_OFFSET UNITYSDK_OFFSET(0x11095670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIKInMainCity___c__DisplayClass13_0_TypeDefinitionIndex = 40055;

	class AnimatorZoneLookIKInMainCity___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Single _OnZoneEnter_b__3(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* other, ::UnityEngine::GameObject* modelGo, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__ONZONEENTER_B__3_OFFSET))(this, owner, other, modelGo, value);
		}

		::System::Single _OnZoneEnter_b__4(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* other, ::UnityEngine::GameObject* modelGo, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__DISPLAYCLASS13_0__ONZONEENTER_B__4_OFFSET))(this, owner, other, modelGo, value);
		}
	};
}
