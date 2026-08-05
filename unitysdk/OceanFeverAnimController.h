#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Nap_VoGroupStateListener.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define OCEANFEVERANIMCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE20E470)
#define OCEANFEVERANIMCONTROLLER_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xE20DE40)
#define OCEANFEVERANIMCONTROLLER_RESTOREBASEVALUES_OFFSET UNITYSDK_OFFSET(0xE20E3E0)
#define OCEANFEVERANIMCONTROLLER_STARTANIM_OFFSET UNITYSDK_OFFSET(0xE20DE90)
#define OCEANFEVERANIMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE20E0C0)
#define OCEANFEVERANIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE20E650)

inline static constexpr unsigned int OceanFeverAnimController_TypeDefinitionIndex = 82416;

class OceanFeverAnimController : public ::MoleMole::Nap_VoGroupStateListener
{
public:
	::UnityEngine::AnimationCurve* heightOffsetCurve; // 0x38
	::UnityEngine::AnimationCurve* profileDecodeZCurve; // 0x40
	::UnityEngine::AnimationCurve* profileDecodeWCurve; // 0x48
	::System::Single animationDuration; // 0x50
	::System::Boolean _isPlaying; // 0x54
	::UnityEngine::Rendering::Universal::VisualEnvironmentE* _visualEnvironment; // 0x58
	::System::Single _baseSeaPlanePosition; // 0x60
	::System::Single _baseDecodeZ; // 0x64
	::System::Single _baseDecodeW; // 0x68
	::System::Boolean _hasOceanConfigBase; // 0x6C
	::System::Single _animStartTime; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnTriggered()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_ONTRIGGERED_OFFSET))(this);
	}

	::System::Void StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_STARTANIM_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void RestoreBaseValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_RESTOREBASEVALUES_OFFSET))(this);
	}
};
