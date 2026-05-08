#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/OnDisableBehaviour.h"
#include "unitysdk/DG/Tweening/Core/OnEnableBehaviour.h"
#include "unitysdk/DG/Tweening/Core/VisualManagerPreset.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DG_TWEENING_DOTWEENVISUALMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C475620)
#define DG_TWEENING_DOTWEENVISUALMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4752F0)
#define DG_TWEENING_DOTWEENVISUALMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C475140)
#define DG_TWEENING_DOTWEENVISUALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C475E00)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenVisualManager_TypeDefinitionIndex = 32921;

	class DOTweenVisualManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DG::Tweening::Core::VisualManagerPreset preset; // 0x18
		::DG::Tweening::Core::OnEnableBehaviour onEnableBehaviour; // 0x1C
		::DG::Tweening::Core::OnDisableBehaviour onDisableBehaviour; // 0x20
		::System::Boolean _requiresRestartFromSpawnPoint; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENVISUALMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENVISUALMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENVISUALMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENVISUALMANAGER_ONDISABLE_OFFSET))(this);
		}
	};
}
