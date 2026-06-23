#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8FB027E4F0CF7ACD_Enum_3_33B16E3E02BB0BB4_8.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_8FB027E4F0CF7ACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D88660)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_14B699223FD27A67_OFFSET UNITYSDK_OFFSET(0x12D887E0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_37E469E772444F78_OFFSET UNITYSDK_OFFSET(0x12D88710)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_3B62EE24ADD3D2F0_OFFSET UNITYSDK_OFFSET(0x12D88EA0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_84DCE10615B2BA60_OFFSET UNITYSDK_OFFSET(0x12D88B70)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_A27599A873F0331C_OFFSET UNITYSDK_OFFSET(0x12D885E0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_C3630D498F8A0F47_OFFSET UNITYSDK_OFFSET(0x12D89460)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_EE3F0CC6DF5081A0_OFFSET UNITYSDK_OFFSET(0x12D88BF0)
#define CLASS_1_8FB027E4F0CF7ACD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D88700)
#define CLASS_1_8FB027E4F0CF7ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D884A0)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_TypeDefinitionIndex = 69381;

class Class_1_8FB027E4F0CF7ACD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8FB027E4F0CF7ACD_TypeDefinitionIndex)->GetStaticField(0x12500);
	}
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_8FB027E4F0CF7ACD_Enum_3_33B16E3E02BB0BB4_8>* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_11F0E0D52D9FF574* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_DISPOSE_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_37E469E772444F78(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_37E469E772444F78_OFFSET))(a1, a2);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_14B699223FD27A67()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_14B699223FD27A67_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_84DCE10615B2BA60()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_84DCE10615B2BA60_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A27599A873F0331C(::Class_1_11F0E0D52D9FF574* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_A27599A873F0331C_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_EE3F0CC6DF5081A0(::Class_1_11F0E0D52D9FF574* a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_EE3F0CC6DF5081A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B62EE24ADD3D2F0(::Class_1_11F0E0D52D9FF574* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_3B62EE24ADD3D2F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C3630D498F8A0F47(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_11F0E0D52D9FF574* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_C3630D498F8A0F47_OFFSET))(this, a1, a2);
	}
};
