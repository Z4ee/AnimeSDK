#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayManualCfg.h"
#include "unitysdk/MoleMole/Config/SelectOutlineColor.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScopedFrontCameraControlConfigInput; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_TRYGETCFG_OFFSET UNITYSDK_OFFSET(0x1A064410)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0645F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDisplayCase_TypeDefinitionIndex = 56741;

	class ConfigDisplayCase : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single StackValidArea; // 0x58
		::System::Single SettleSpeed; // 0x5C
		::System::Single CamDrag_H; // 0x60
		::System::Single CamDrag_V; // 0x64
		::UnityEngine::Vector2 ConsoleCamMove; // 0x68
		::UnityEngine::Vector2 ConsoleCamRot; // 0x70
		::UnityEngine::Vector2 DpadCamRot; // 0x78
		::System::Single WeaponPerlinScale; // 0x80
		::System::Single WeaponFloatingStrength; // 0x84
		::System::Single PanelSnap; // 0x88
		::System::Single PanelMoveDeadZone; // 0x8C
		::UnityEngine::Vector3 Weapon_Offset; // 0x90
		::UnityEngine::Vector3 Weapon_Rot_Velocity; // 0x9C
		::UnityEngine::Vector2 EditModeFovRange; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>* CaseLoadingCfgs; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>* CaseColliderCfgs; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>* CaseBoundsCfgs; // 0xC0
		::MoleMole::Photo::ScopedFrontCameraControlCameraConfig CameraConfig; // 0xC8
		::MoleMole::Config::ScopedFrontCameraControlConfigInput* InputConfig; // 0xF8
		::MoleMole::Config::SelectOutlineColor SelectCfg; // 0x100
		::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>* ItemManualDefaultCfg; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>* ItemManualCfgs; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::DisplayCase::DisplayManualCfg TryGetCfg(::System::Int32 itemId, ::MoleMole::DisplayCase::EDisplayItemSubType defaultType)
		{
			return ((::MoleMole::Config::DisplayCase::DisplayManualCfg(*)(::PVOID, ::System::Int32, ::MoleMole::DisplayCase::EDisplayItemSubType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_TRYGETCFG_OFFSET))(this, itemId, defaultType);
		}
	};
}
