#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BATTLE_MONOSLOPESECTIONMARKER_GET_VALID_OFFSET UNITYSDK_OFFSET(0x134C8EA0)
#define MOLEMOLE_BATTLE_MONOSLOPESECTIONMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9040)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSlopeSectionMarker_TypeDefinitionIndex = 42388;

	class MonoSlopeSectionMarker : public ::System::Object
	{
	public:
		::MoleMole::Interaction::AxisSign walkablePlane; // 0x10
		::UnityEngine::GameObject* slopeMarkerGo; // 0x18
		::System::Single slopeNormalHeightOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSLOPESECTIONMARKER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSLOPESECTIONMARKER_GET_VALID_OFFSET))(this);
		}
	};
}
