#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraActiveTeam.h"
#include "unitysdk/RPG/Client/UltraDistanceGlobalDynamicOffsetMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_CLIENT_CAMERANAMEDDYNAMICOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BC0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraNamedDynamicOffset_TypeDefinitionIndex = 65182;

	class CameraNamedDynamicOffset : public ::System::Object
	{
	public:
		::System::String* DynamicOffsetName; // 0x10
		::UnityEngine::Vector3 AnchorOffset; // 0x18
		::UnityEngine::Vector3 AimOffset; // 0x24
		::UnityEngine::Vector3 SelectDarkAnchorOffset; // 0x30
		::UnityEngine::Vector3 SelectDarkAimOffset; // 0x3C
		::RPG::Client::CameraActiveTeam ActiveTeamType; // 0x48
		::System::Boolean IsUltraDistance; // 0x4C
		::RPG::Client::UltraDistanceGlobalDynamicOffsetMode UltraDistanceMode; // 0x50
		::System::Single UltraDistanceBlendDuration; // 0x54
		::System::Single UltraDistanceRestrictAlpha; // 0x58
		::UnityEngine::Vector3 UseSkillPerformAnchorOffsetAtUltraDistance; // 0x5C
		::UnityEngine::Vector3 UseSkillPerformAimOffsetAtUltraDistance; // 0x68
		::RPG::GameCore::VCameraBlend* BlendConfigToReplaceCutAtUltraDistance; // 0x78
		::RPG::GameCore::GameEntity* Caster; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANAMEDDYNAMICOFFSET__CTOR_OFFSET))(this);
		}
	};
}
