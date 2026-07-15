#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_001D9EA49F6215B6;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18A12800)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18A12860)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18A12770)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x18A12660)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A129E0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelDeadCurve_TypeDefinitionIndex = 72886;

	class FourRotateVoxelDeadCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single BlendToPlayerDuration; // 0x7C
		::UnityEngine::AnimationCurve* BlendToPlayerCurve; // 0x80
		::Cinemachine::CinemachineVirtualCamera* Field_6_3; // 0x88
		::System::Action* Field_6_4; // 0x90
		::UnityEngine::Vector3 Field_6_5; // 0x98
		::UnityEngine::Vector3 Field_6_6; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*, ::Class_1_8385F95FFA7FAA1C*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_6_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_METHOD_6_479759059E440327_OFFSET))(this, a1);
		}
	};
}
