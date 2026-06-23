#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITapesGroup3DModelController; }
namespace MoleMole::Config { class ConfigSetCameraStateCommonNode_CameraState; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEA9E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS41_0__SWITCHPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x16DEA9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass41_0_TypeDefinitionIndex = 72710;

	class UITapesGroup3DModelController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSetCameraStateCommonNode_CameraState* state; // 0x10
		::MoleMole::UITapesGroup3DModelController* __4__this; // 0x18
		::UnityEngine::Vector3 targetCamWorldPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS41_0__SWITCHPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
