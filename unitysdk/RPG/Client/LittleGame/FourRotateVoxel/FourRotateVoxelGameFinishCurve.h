#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_912CC478F2B21832;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1BE6E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x1B1BDE30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x1B1BE640)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1B1BD8E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B1BDC20)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1B1BDCB0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x1B1BD620)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BE7C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B1BE820)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameFinishCurve_TypeDefinitionIndex = 76359;

	class FourRotateVoxelGameFinishCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single TargetOrthographicSize; // 0x7C
		::System::Single ZoomOutDuration; // 0x80
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x88
		::System::Single FocusAnimalDuration; // 0x90
		::System::Single DelayFadeEffectTime; // 0x94
		::System::Single DelayChangeAnimalColorTime; // 0x98
		::System::Single ZoomInDuration; // 0x9C
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA0
		::System::Boolean INJJGMIGFFD; // 0xA8
		::System::Int32 GLNMMIEPAIO; // 0xAC
		::System::Single FOKMMMMGIJI; // 0xB0
		::UnityEngine::Vector3 MNAMIJEKLOC; // 0xB4
		::UnityEngine::Vector3 OCIEOCEKBAO; // 0xC0
		::RPG::Client::TriggerEffectParamsRef BFBOGIJAKHG; // 0xD0
		::RPG::Client::MonoEffect* FBBEBPOAMHP; // 0xE0
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0xE8
		::System::Action* BJLJAHMLKIO; // 0xF0
		::System::Boolean PCEGGLGLCEM; // 0xF8
		::UnityEngine::Vector3 GDEIMGPKGML; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*, ::Class_1_8385F95FFA7FAA1C*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_6_1BC72208CAFF7D4E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_1BC72208CAFF7D4E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void Method_6_626C719A884DEF9A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_626C719A884DEF9A_OFFSET))(this, a1);
		}

		::System::Void Method_6_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__13_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET))(this, a1, a2);
		}
	};
}
