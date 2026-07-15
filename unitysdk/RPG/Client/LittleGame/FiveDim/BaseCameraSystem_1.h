#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LookAheadXSide.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/Struct_2_AACEDD85A6FDFBD8.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFollowCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class ICameraSystemServices_1; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimCameraLookAheadConfig; }
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseCameraSystem_1_TypeDefinitionIndex = 72958;

	template <typename T>
	class BaseCameraSystem_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimCameraFollowConfig* _DefaultFollow; // 0x0
		::RPG::GameCore::FiveDimCameraLensConfig* _DefaultLens; // 0x0
		::RPG::GameCore::FiveDimVCameraBlendConfig* _DefaultBlend; // 0x0
		::RPG::GameCore::FiveDimVCameraBlendConfig* _OutBlend; // 0x0
		::RPG::GameCore::FiveDimCameraDOFConfig* _DefaultDOF; // 0x0
		::RPG::GameCore::FiveDimCameraObserveConfig* _DefaultObserve; // 0x0
		::RPG::GameCore::FiveDimCameraObserveConfig* _DefaultMinimalObserve; // 0x0
		::RPG::Client::LittleGame::FiveDim::ICameraSystemServices_1<T>* _CameraServices; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* _CameraStack; // 0x0
		::System::Int32 _ActiveCameraView; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _PendingReleaseCameraViews; // 0x0
		::Entitas::IGroup_1<T>* _CameraTriggerGroup; // 0x0
		::Entitas::ICollector_1<T>* _CameraTriggerCollector; // 0x0
		::Entitas::IGroup_1<T>* _CameraGroup; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _ActiveFollowCameras; // 0x0
		::System::Single _NormalJumpHeight; // 0x0
		::System::Single _DoubleJumpHeight; // 0x0
		::System::Single _RestartFollowYDuration; // 0x0
		::System::Single _JumpInitSpeed; // 0x0
	};
}
