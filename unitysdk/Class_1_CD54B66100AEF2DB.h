#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD54B66100AEF2DB_Enum_3_33B16E3E02BB0BB4_10.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_CD54B66100AEF2DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B62600)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_01F5D018B0B2FAB5_OFFSET UNITYSDK_OFFSET(0x17B62770)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_1F076D921EE66EC0_OFFSET UNITYSDK_OFFSET(0x17B62580)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_37E469E772444F78_OFFSET UNITYSDK_OFFSET(0x17B62DC0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x17B62BE0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_4AC238F0FEEAA6B0_OFFSET UNITYSDK_OFFSET(0x17B62FE0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x17B62CF0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17B626A0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_96AEEB5918232CF3_OFFSET UNITYSDK_OFFSET(0x17B62E90)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_B5E5BA94BBE2108D_OFFSET UNITYSDK_OFFSET(0x17B63290)
#define CLASS_1_CD54B66100AEF2DB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B62430)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_TypeDefinitionIndex = 75775;

class Class_1_CD54B66100AEF2DB : public ::System::Object
{
public:
	::PipelineCamera::Blender::DefaultBlender* Field_1_2; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_CD54B66100AEF2DB_Enum_3_33B16E3E02BB0BB4_10>* Field_1_0; // 0x18
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_9; // 0x20
	::MoleMole::Config::ConfigShootingGroundCamera* Field_1_1; // 0x28
	::UnityEngine::AnimationCurve* Field_1_7; // 0x30
	::UnityEngine::Vector3 Field_1_3; // 0x38
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_4; // 0x4C
	::UnityEngine::Vector3 Field_1_5; // 0x58

	::System::Void _ctor(::MoleMole::Config::ConfigShootingGroundCamera*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_01F5D018B0B2FAB5(::MoleMole::Config::ConfigShootingGroundCamera* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_01F5D018B0B2FAB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_37E469E772444F78(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_37E469E772444F78_OFFSET))(a1, a2);
	}

	::System::Void Method_1_96AEEB5918232CF3(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Config::ConfigShootingGroundCamera*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_96AEEB5918232CF3_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_1F076D921EE66EC0(::MoleMole::Config::ConfigShootingGroundCamera* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_1F076D921EE66EC0_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_4AC238F0FEEAA6B0(::MoleMole::Config::ConfigShootingGroundCamera*& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_4AC238F0FEEAA6B0_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_B5E5BA94BBE2108D(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_B5E5BA94BBE2108D_OFFSET))(this, a1);
	}
};
