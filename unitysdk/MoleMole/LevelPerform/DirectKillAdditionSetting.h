#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }

#define MOLEMOLE_LEVELPERFORM_DIRECTKILLADDITIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC64C0)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int DirectKillAdditionSetting_TypeDefinitionIndex = 49215;

	class DirectKillAdditionSetting : public ::System::Object
	{
	public:
		::System::Single minAngleToMoveForward; // 0x10
		::System::Single maxAngleToMoveForward; // 0x14
		::System::Single heightRatioEnsured; // 0x18
		::System::Single fieldOfView; // 0x1C
		::MoleMole::LevelPerform::DirectKillShakeSetting* shakeSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLADDITIONSETTING__CTOR_OFFSET))(this);
		}
	};
}
