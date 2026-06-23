#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattlePortal_HadalZoneConfig_CfgLayerInfoItem.h"
#include "unitysdk/MoleMole/UIBattlePortal_HadalZoneConfig_CfgZoneInfoItem.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16EE6BD0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16EE6B90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE6C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneConfig_TypeDefinitionIndex = 61624;

	class UIBattlePortal_HadalZoneConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* fixedZoneGameObjects; // 0x18
		::UnityEngine::GameObject* dynamicZoneGameObject; // 0x20
		::System::String* bgVideoPath; // 0x28
		::MoleMole::UIBattlePortal_HadalZoneConfig_CfgZoneInfoItem dynZoneInfoSprite; // 0x30
		::MoleMole::UIBattlePortal_HadalZoneConfig_CfgZoneInfoItem fixedZoneInfoSprite; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::UIBattlePortal_HadalZoneConfig_CfgLayerInfoItem>* LayerInfoItems; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONECONFIG_ONDISABLE_OFFSET))(this);
		}
	};
}
