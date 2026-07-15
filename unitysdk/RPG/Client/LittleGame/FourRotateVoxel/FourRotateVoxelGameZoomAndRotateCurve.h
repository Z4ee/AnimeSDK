#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_001D9EA49F6215B6;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18A1CC50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x18A1C800)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_103DE61A2E976998_OFFSET UNITYSDK_OFFSET(0x18A1CD30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x18A1D010)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0x18A1CDD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x18A1C3F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1DCA0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameZoomAndRotateCurve_TypeDefinitionIndex = 72896;

	class FourRotateVoxelGameZoomAndRotateCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single TargetOrthographicSize; // 0x78
		::System::Single ZoomOutDuration; // 0x7C
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x80
		::System::Single RotateDuration; // 0x88
		::UnityEngine::AnimationCurve* RotateCurve; // 0x90
		::System::Single Field_6_5; // 0x98
		::System::Single ZoomInDuration; // 0x9C
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA0
		::System::Int32 TargetDirectionIndex; // 0xA8
		::System::Int32 MaxRotateLoops; // 0xAC
		::System::Int32 Field_6_10; // 0xB0
		::System::Single Field_6_11; // 0xB4
		::UnityEngine::Vector3 Field_6_12; // 0xB8
		::UnityEngine::Quaternion Field_6_13; // 0xC4
		::System::Int32 Field_6_14; // 0xD4
		::Cinemachine::CinemachineVirtualCamera* Field_6_15; // 0xD8
		::System::Action* Field_6_16; // 0xE0
		::System::Boolean Field_6_17; // 0xE8
		::System::Boolean Field_6_18; // 0xE9
		::System::Single Field_6_19; // 0xEC
		::UnityEngine::Vector3 Field_6_20; // 0xF0
		::System::Int32 Field_6_21; // 0xFC
		::System::String* Field_6_22; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Action* a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*, ::Class_1_8385F95FFA7FAA1C*, ::System::Action*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_6_103DE61A2E976998()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_103DE61A2E976998_OFFSET))(this);
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

		::System::Void Method_6_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_METHOD_6_0CC4BC19C602BCD0_OFFSET))(this);
		}
	};
}
