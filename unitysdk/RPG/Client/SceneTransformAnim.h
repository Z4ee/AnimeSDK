#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_FloatAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_OffsetType.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_SCENETRANSFORMANIM_GET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xB1513D0)
#define RPG_CLIENT_SCENETRANSFORMANIM_SET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xB1513E0)
#define RPG_CLIENT_SCENETRANSFORMANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1513F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTransformAnim_TypeDefinitionIndex = 65393;

	class SceneTransformAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsUpateInEditorMode_k__BackingField; // 0x18
		::RPG::Client::SceneTransformAnim_OffsetType TransOffsetType; // 0x1C
		::System::Boolean UseLocalDirection; // 0x20
		::RPG::Client::SceneTransformAnim_FloatAxis FloAxis; // 0x24
		::System::Single FloatFrequency; // 0x28
		::System::Single FloatDistance; // 0x2C
		::System::Single OffsetNoise3DSpeed; // 0x30
		::System::Single RandomMove3DBoxSize; // 0x34
		::RPG::Client::SceneTransformAnim_RotateType TransRotateType; // 0x38
		::System::Boolean UsePingPongRotate; // 0x3C
		::System::Boolean UseLocalRotation; // 0x3D
		::RPG::Client::SceneTransformAnim_RotateAxis RotAxis; // 0x40
		::System::Single RotateSpeed; // 0x44
		::System::Single RotateNoise3DSpeed; // 0x48
		::System::Single WobbyScale; // 0x4C
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUpateInEditorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_GET_ISUPATEINEDITORMODE_OFFSET))(this);
		}

		::System::Void set_IsUpateInEditorMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_SET_ISUPATEINEDITORMODE_OFFSET))(this, value);
		}
	};
}
