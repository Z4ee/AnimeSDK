#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOSUMMEREVENTSHOOTWEAPONUIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C8A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventShootWeaponUIItem_TypeDefinitionIndex = 73586;

	class MonoSummerEventShootWeaponUIItem : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::GameObject* NumGameObjectRoot; // 0x58
		::UnityEngine::GameObject* TimeGameObjectRoot; // 0x60
		::UnityEngine::UI::Image* Icon; // 0x68
		::UnityEngine::UI::Extension::UILocalizationText* CurrentAmmoText; // 0x70
		::UnityEngine::UI::Extension::UILocalizationText* MaxAmmoText; // 0x78
		::UnityEngine::UI::Extension::UILocalizationText* TimeText; // 0x80
		::UnityEngine::GameObject* SelectObject; // 0x88
		::UnityEngine::GameObject* SkillWeaponNumRoot; // 0x90
		::UnityEngine::UI::Extension::UILocalizationText* SkillCurrentAmmoText; // 0x98
		::UnityEngine::UI::Extension::UILocalizationText* SkillMaxAmmoText; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSHOOTWEAPONUIITEM__CTOR_OFFSET))(this);
		}
	};
}
