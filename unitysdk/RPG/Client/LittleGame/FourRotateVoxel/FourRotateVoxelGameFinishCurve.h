#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_001D9EA49F6215B6;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18A13990)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x18A12CC0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18A13030)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18A12FD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x18A138F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0x18A13170)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x18A12A00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13A70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET UNITYSDK_OFFSET(0x18A13AD0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameFinishCurve_TypeDefinitionIndex = 72887;

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
		::System::Boolean Field_6_9; // 0xA8
		::System::Int32 Field_6_10; // 0xAC
		::System::Single Field_6_11; // 0xB0
		::UnityEngine::Vector3 Field_6_12; // 0xB4
		::UnityEngine::Vector3 Field_6_13; // 0xC0
		::RPG::Client::TriggerEffectParamsRef Field_6_14; // 0xD0
		::RPG::Client::MonoEffect* Field_6_15; // 0xE0
		::Cinemachine::CinemachineVirtualCamera* Field_6_16; // 0xE8
		::System::Action* Field_6_17; // 0xF0
		::System::Boolean Field_6_18; // 0xF8
		::UnityEngine::Vector3 Field_6_19; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*, ::Class_1_8385F95FFA7FAA1C*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_6_6F7271C62F1FE776(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_6F7271C62F1FE776_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void Method_6_626C719A884DEF9A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_626C719A884DEF9A_OFFSET))(this, a1);
		}

		::System::Void Method_6_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_METHOD_6_078D85152011B919_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__13_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET))(this, a1, a2);
		}
	};
}
