#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/StageHarmonyBaseDemodulator_1.h"
#include "unitysdk/StageHarmonyFollowTransformDemodulator_FollowType.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_ISCUSTOMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE93B820)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_MAINCAMTRANS_OFFSET UNITYSDK_OFFSET(0xE93B830)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_METHOD_3_BFED9CB4A51C4631_OFFSET UNITYSDK_OFFSET(0xE93B8E0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET UNITYSDK_OFFSET(0xE93C3E0)
#define STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE93C430)

inline static constexpr unsigned int StageHarmonyFollowTransformDemodulator_TypeDefinitionIndex = 47991;

class StageHarmonyFollowTransformDemodulator : public ::StageHarmonyBaseDemodulator_1<::Struct_2_FBA4730A60751401_1>
{
public:
	::UnityEngine::Vector3 OriginalPos; // 0x48
	::UnityEngine::Vector3 OriginalRotation; // 0x54
	::UnityEngine::Vector3 OriginalScale; // 0x60
	::UnityEngine::Vector3 Offset; // 0x6C
	::StageHarmonyFollowTransformDemodulator_FollowType followType; // 0x78
	::UnityEngine::Transform* CustomTransform; // 0x80
	::System::Boolean SignalPause; // 0x88
	::System::Boolean SmoothSignal; // 0x89
	::System::Single SmoothTime; // 0x8C
	::System::Single MaxSpeed; // 0x90
	::System::Boolean _LastSignalPause; // 0x94
	::System::Single _Signal; // 0x98
	::System::Single _RecordSignalVelocity; // 0x9C
	::UnityEngine::Camera* _mainCam; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isCustomTransform()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_ISCUSTOMTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::Transform* get_mainCamTrans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_GET_MAINCAMTRANS_OFFSET))(this);
	}

	::Struct_2_FBA4730A60751401_1 Method_3_BFED9CB4A51C4631(::System::Single a1)
	{
		return ((::Struct_2_FBA4730A60751401_1(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_METHOD_3_BFED9CB4A51C4631_OFFSET))(this, a1);
	}

	::DemodulatorOutPutType Method_3_F4B1CC0F7E08D926()
	{
		return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFOLLOWTRANSFORMDEMODULATOR_METHOD_3_F4B1CC0F7E08D926_OFFSET))(this);
	}
};
