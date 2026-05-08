#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrChangeColorEvent.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrScreenEffect.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRCLIENTCONSTANTCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18F910)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrClientConstantCfg_TypeDefinitionIndex = 83949;

	class BrClientConstantCfg : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Arcade::BallsRace::BrEntityType, ::Foundation::AssetPath>* EntityPrefabs; // 0x10
		::UnityEngine::AnimationCurve* InputCurve; // 0x18
		::System::Single RecycleRange; // 0x20
		::UnityEngine::AnimationCurve* HeightOffsetCurve; // 0x28
		::UnityEngine::AnimationCurve* IdleHeightOffsetCurve; // 0x30
		::UnityEngine::AnimationCurve* OffsetCurveBlend; // 0x38
		::System::Collections::Generic::Dictionary_2<::MoleMole::Arcade::BallsRace::EBrSpeedLevel, ::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>*>* SpeedUpFx; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>* DeadFx; // 0x48
		::System::Collections::Generic::Dictionary_2<::MoleMole::Arcade::BallsRace::BrEntityType, ::Foundation::AssetPath>* EatFx; // 0x50
		::System::Collections::Generic::Dictionary_2<::MoleMole::Arcade::BallsRace::BrEntityType, ::Foundation::AssetPath>* InvincibleFx; // 0x58
		::System::Single PillarStartOffset; // 0x60
		::System::Single PillarEndOffset; // 0x64
		::System::Single PillarStep; // 0x68
		::System::Int32 PillarRowCount; // 0x6C
		::System::Single PillarRowSpace; // 0x70
		::UnityEngine::AnimationCurve* PillarOffsetCurve; // 0x78
		::UnityEngine::AnimationCurve* PillarOffsetIdleCurve; // 0x80
		::System::Single PillarHeightRandomRange; // 0x88
		::System::Single PillarMaxAngle; // 0x8C
		::System::Single ArrowOffset; // 0x90
		::System::Int32 ArrowInterval; // 0x94
		::System::Single ArrowHeightOffset; // 0x98
		::Il2CppArray<::System::Single>* CamAimDampTime; // 0xA0
		::System::Single CamAimDampSpeed; // 0xA8
		::Il2CppArray<::System::Single>* CamAimOffset; // 0xB0
		::Il2CppArray<::System::Single>* CamPosDampTime; // 0xB8
		::System::Single CamPosDampSpeed; // 0xC0
		::Il2CppArray<::System::Single>* CamPosOffset; // 0xC8
		::Il2CppArray<::System::Single>* CamHeightDampTime; // 0xD0
		::System::Single CamHeightDampSpeed; // 0xD8
		::Il2CppArray<::System::Single>* CamHeight; // 0xE0
		::Il2CppArray<::System::Single>* CamFovDampTime; // 0xE8
		::System::Single CamFovDampSpeed; // 0xF0
		::Il2CppArray<::System::Single>* CamFov; // 0xF8
		::UnityEngine::AnimationCurve* CamOffsetHCurve; // 0x100
		::UnityEngine::AnimationCurve* CamAimOffsetHCurve; // 0x108
		::System::Single CamOffsetHSpeed; // 0x110
		::System::Single CamOffsetHDampTime; // 0x114
		::UnityEngine::AnimationCurve* RoleSelectMoveCurve; // 0x118
		::System::Single RoleSelectStartCD; // 0x120
		::UnityEngine::AnimationCurve* StartFovCurve; // 0x128
		::UnityEngine::AnimationCurve* DeadXCurve; // 0x130
		::UnityEngine::AnimationCurve* DeadYCurve; // 0x138
		::UnityEngine::AnimationCurve* DeadRayTCurve; // 0x140
		::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent DefaultColorEvent; // 0x148
		::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent MaxSpeedColorEvent; // 0x168
		::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent MaxSpeedColorEvent2; // 0x188
		::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent RoleSelectColorEvent; // 0x1A8
		::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent DeadColorEvent; // 0x1C8
		::System::Single SpeedFactor; // 0x1E8
		::UnityEngine::AnimationCurve* UIRotateCurve; // 0x1F0
		::System::Single UIRotateSpeed; // 0x1F8
		::Foundation::AssetPath StartFx; // 0x200
		::Foundation::AssetPath SpeedLineFx; // 0x210
		::System::Int32 OctopusId; // 0x220
		::System::String* OctopusFxAttachPoint; // 0x228
		::Il2CppArray<::Foundation::AssetPath>* OctopusFxs; // 0x230
		::System::Int32 UFOId; // 0x238
		::Foundation::AssetPath UFOTeleportFx; // 0x240
		::System::String* UFOTeleportFxAttachPoint; // 0x250
		::UnityEngine::Material* LightPosMaterial; // 0x258
		::UnityEngine::Vector3 LightPosLocalOffset; // 0x260
		::System::Single AvatarSpeedFactor; // 0x26C
		::System::Single SkyboxSpeedFactor; // 0x270

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRCLIENTCONSTANTCFG__CTOR_OFFSET))(this);
		}
	};
}
