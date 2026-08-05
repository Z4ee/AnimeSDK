#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x150DCAC0)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_LERP_OFFSET UNITYSDK_OFFSET(0x150DC940)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x150DCAB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMiscSetting_TypeDefinitionIndex = 62204;

	class CameraMiscSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 followOffset; // 0x10
		::UnityEngine::Vector3 lookAtOffset; // 0x1C
		::System::Single fieldOfView; // 0x28
		::System::String* debugKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Cameras::CameraMiscSetting* Lerp(::MoleMole::Cameras::CameraMiscSetting* source, ::MoleMole::Cameras::CameraMiscSetting* target, ::System::Single alpha, ::MoleMole::Cameras::CameraMiscSetting* result)
		{
			return ((::MoleMole::Cameras::CameraMiscSetting*(*)(::MoleMole::Cameras::CameraMiscSetting*, ::MoleMole::Cameras::CameraMiscSetting*, ::System::Single, ::MoleMole::Cameras::CameraMiscSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_LERP_OFFSET))(source, target, alpha, result);
		}

		::MoleMole::Cameras::CameraMiscSetting* CopyAssign(::MoleMole::Cameras::CameraMiscSetting*& other)
		{
			return ((::MoleMole::Cameras::CameraMiscSetting*(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_COPYASSIGN_OFFSET))(this, other);
		}
	};
}
