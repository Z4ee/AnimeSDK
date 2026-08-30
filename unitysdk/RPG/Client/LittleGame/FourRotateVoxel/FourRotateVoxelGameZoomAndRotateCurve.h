#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_912CC478F2B21832;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1C83B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1B1C7F30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x1B1C87D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_4B214700971975B6_OFFSET UNITYSDK_OFFSET(0x1B1C8490)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0x1B1C8560)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x1B1C7B20)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C9460)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameZoomAndRotateCurve_TypeDefinitionIndex = 76368;

	class FourRotateVoxelGameZoomAndRotateCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single TargetOrthographicSize; // 0x78
		::System::Single ZoomOutDuration; // 0x7C
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x80
		::System::Single RotateDuration; // 0x88
		::UnityEngine::AnimationCurve* RotateCurve; // 0x90
		::System::Single HDKHGKNBPBN; // 0x98
		::System::Single ZoomInDuration; // 0x9C
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA0
		::System::Int32 TargetDirectionIndex; // 0xA8
		::System::Int32 MaxRotateLoops; // 0xAC
		::System::Int32 GLNMMIEPAIO; // 0xB0
		::System::Single FOKMMMMGIJI; // 0xB4
		::UnityEngine::Vector3 MNAMIJEKLOC; // 0xB8
		::UnityEngine::Quaternion KJCAIELAHME; // 0xC4
		::System::Int32 JAEILJJCBAO; // 0xD4
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0xD8
		::System::Action* BJLJAHMLKIO; // 0xE0
		::System::Boolean EBCAOFLACKM; // 0xE8
		::System::Boolean DMJKEOHADJD; // 0xE9
		::System::Single NKLMMPKHEPL; // 0xEC
		::UnityEngine::Vector3 GDEIMGPKGML; // 0xF0
		::System::Int32 KPGALMHFPPJ; // 0xFC
		::System::String* LCJCCNJNADJ; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Action* a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*, ::Class_1_8385F95FFA7FAA1C*, ::System::Action*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_6_4B214700971975B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_4B214700971975B6_OFFSET))(this);
		}

		::System::Void Method_6_5892D030B127E82F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_5892D030B127E82F_OFFSET))(this);
		}

		::System::Void Method_6_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void Method_6_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_078D85152011B919_OFFSET))(this);
		}
	};
}
