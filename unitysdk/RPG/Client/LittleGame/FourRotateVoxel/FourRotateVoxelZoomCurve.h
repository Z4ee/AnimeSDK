#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B1CC7C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1B1CC700)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1B1CC5F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CC870)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelZoomCurve_TypeDefinitionIndex = 76372;

	class FourRotateVoxelZoomCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single ZoomStartTime; // 0x78
		::System::Single RevertAllRotationDuration; // 0x7C
		::System::Int32 RevertAllRotateTimes; // 0x80
		::UnityEngine::AnimationCurve* RevertAllRotateSpeed; // 0x88
		::System::Single CFKGKLEPEAJ; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
