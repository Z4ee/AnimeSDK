#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD54B66100AEF2DB_Enum_3_33B16E3E02BB0BB4_8.h"
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

#define CLASS_1_CD54B66100AEF2DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB4E10)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_01F5D018B0B2FAB5_OFFSET UNITYSDK_OFFSET(0x10CB5230)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_1F076D921EE66EC0_OFFSET UNITYSDK_OFFSET(0x10CB4D80)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_37E469E772444F78_OFFSET UNITYSDK_OFFSET(0x10CB5860)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x10CB5930)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_4AC238F0FEEAA6B0_OFFSET UNITYSDK_OFFSET(0x10CB4F80)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x10CB5690)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10CB4EB0)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_96AEEB5918232CF3_OFFSET UNITYSDK_OFFSET(0x10CB5A40)
#define CLASS_1_CD54B66100AEF2DB_METHOD_1_B5E5BA94BBE2108D_OFFSET UNITYSDK_OFFSET(0x10CB5760)
#define CLASS_1_CD54B66100AEF2DB__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB4C30)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_TypeDefinitionIndex = 68710;

class Class_1_CD54B66100AEF2DB : public ::System::Object
{
public:
	::PipelineCamera::Blender::DefaultBlender* Field_1_2; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_9; // 0x18
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_CD54B66100AEF2DB_Enum_3_33B16E3E02BB0BB4_8>* Field_1_0; // 0x20
	::UnityEngine::AnimationCurve* Field_1_7; // 0x28
	::MoleMole::Config::ConfigShootingGroundCamera* Field_1_1; // 0x30
	::System::Single Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_3; // 0x3C
	::System::Single Field_1_8; // 0x48
	::UnityEngine::Vector3 Field_1_5; // 0x4C
	::UnityEngine::Vector3 Field_1_4; // 0x58

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

	::PipelineCamera::ScopedDelegateHandle Method_1_4AC238F0FEEAA6B0(::MoleMole::Config::ConfigShootingGroundCamera*& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_4AC238F0FEEAA6B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_B5E5BA94BBE2108D(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_B5E5BA94BBE2108D_OFFSET))(this, a1);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_37E469E772444F78(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_37E469E772444F78_OFFSET))(a1, a2);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_1F076D921EE66EC0(::MoleMole::Config::ConfigShootingGroundCamera* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_1F076D921EE66EC0_OFFSET))(this, a1);
	}

	::System::Void Method_1_96AEEB5918232CF3(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Config::ConfigShootingGroundCamera*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_96AEEB5918232CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01F5D018B0B2FAB5(::MoleMole::Config::ConfigShootingGroundCamera* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_METHOD_1_01F5D018B0B2FAB5_OFFSET))(this, a1, a2, a3);
	}
};
