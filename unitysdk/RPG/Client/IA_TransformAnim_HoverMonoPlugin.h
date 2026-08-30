#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IA_TransformAnimHoverDriveScope.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_FloatAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_OffsetType.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class IA_TransformAnim_HoverBehavior; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x198291B0)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverMonoPlugin_TypeDefinitionIndex = 70806;

	class IA_TransformAnim_HoverMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::IA_TransformAnim_HoverBehavior*>
	{
	public:
		::RPG::Client::IA_TransformAnimHoverDriveScope ProceduralDriveScope; // 0x30
		::System::Boolean PushViaInstanceArrayBridge; // 0x34
		::System::Boolean RestoreTransformWhenDisabled; // 0x35
		::System::Boolean IsUpdateInEditorMode; // 0x36
		::RPG::Client::SceneTransformAnim_OffsetType TransOffsetType; // 0x38
		::System::Boolean UseLocalDirection; // 0x3C
		::RPG::Client::SceneTransformAnim_FloatAxis FloAxis; // 0x40
		::System::Single FloatFrequency; // 0x44
		::System::Single FloatDistance; // 0x48
		::System::Single OffsetNoise3DSpeed; // 0x4C
		::System::Single RandomMove3DBoxSize; // 0x50
		::RPG::Client::SceneTransformAnim_RotateType TransRotateType; // 0x54
		::System::Boolean UsePingPongRotate; // 0x58
		::System::Boolean UseLocalRotation; // 0x59
		::RPG::Client::SceneTransformAnim_RotateAxis RotAxis; // 0x5C
		::System::Single RotateSpeed; // 0x60
		::System::Single RotateNoise3DSpeed; // 0x64
		::System::Single WobbyScale; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
