#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData_FRVCustomMaxEmissionIntensityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18A1DD10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1DF30)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGlobalData_TypeDefinitionIndex = 72905;

	class FourRotateVoxelGlobalData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single RotateStartTime; // 0x18
		::System::Single RotateDuration; // 0x1C
		::UnityEngine::AnimationCurve* RotateCurve; // 0x20
		::System::Single FailRotateStartTime; // 0x28
		::System::Single FailRotateDuration; // 0x2C
		::UnityEngine::AnimationCurve* FailRotateCurve; // 0x30
		::System::Single UpgradingSignle2DDuration; // 0x38
		::System::Int32 UpgradingSignle2DRotateTimes; // 0x3C
		::UnityEngine::AnimationCurve* UpgradingSignle2DRotateSpeed; // 0x40
		::System::Single UpgradingSignle2DShowEffectStartTime; // 0x48
		::System::Single FastUpgradingSignle2DDuration; // 0x4C
		::System::Int32 FastUpgradingSignle2DRotateTimes; // 0x50
		::System::Single FastUpgradingSignle2DShowEffectStartTime; // 0x54
		::System::Single RevertAll2DFaceDuration; // 0x58
		::UnityEngine::AnimationCurve* RevertAll2DRotateCurve; // 0x60
		::System::Single RevertAll2DShowEffectDuration; // 0x68
		::UnityEngine::Color EmissionColor; // 0x6C
		::System::Single MaxEmissionIntensity; // 0x7C
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData_FRVCustomMaxEmissionIntensityData*>* CustomMaxEmissionIntensityList; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FourRotateVoxelAnimalType, ::System::Single>* CustomMaxEmissionIntensityDict; // 0x88
		::System::Single EmissionIntensityDuration; // 0x90
		::UnityEngine::AnimationCurve* EmissionIntensityCurve; // 0x98
		::System::Single AfterRewardDelayClose; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGLOBALDATA_AWAKE_OFFSET))(this);
		}
	};
}
