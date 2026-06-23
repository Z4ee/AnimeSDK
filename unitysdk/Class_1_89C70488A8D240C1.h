#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89C70488A8D240C1_Enum_3_C780BFBFED223F30_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_5D55D2D92073E392.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_89C70488A8D240C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFF1A20)
#define CLASS_1_89C70488A8D240C1_METHOD_1_08BC081A69C9E1AA_OFFSET UNITYSDK_OFFSET(0xFFF1930)
#define CLASS_1_89C70488A8D240C1_METHOD_1_18E7A3CC076DECFF_OFFSET UNITYSDK_OFFSET(0xFFF1DF0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_193443EF57621030_OFFSET UNITYSDK_OFFSET(0xFFF3E90)
#define CLASS_1_89C70488A8D240C1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xFFF2E20)
#define CLASS_1_89C70488A8D240C1_METHOD_1_2AFD4CF0B364204F_1_OFFSET UNITYSDK_OFFSET(0xFFF2CE0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_2AFD4CF0B364204F_OFFSET UNITYSDK_OFFSET(0xFFF2B80)
#define CLASS_1_89C70488A8D240C1_METHOD_1_34E0F94BD1913283_OFFSET UNITYSDK_OFFSET(0xFFF2100)
#define CLASS_1_89C70488A8D240C1_METHOD_1_3651BCA3CD34B8F0_OFFSET UNITYSDK_OFFSET(0xFFF2E80)
#define CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_1_OFFSET UNITYSDK_OFFSET(0xFFF3430)
#define CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_2_OFFSET UNITYSDK_OFFSET(0xFFF3950)
#define CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_3_OFFSET UNITYSDK_OFFSET(0xFFF3C90)
#define CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_OFFSET UNITYSDK_OFFSET(0xFFF2320)
#define CLASS_1_89C70488A8D240C1_METHOD_1_4300251440128830_OFFSET UNITYSDK_OFFSET(0xFFF3520)
#define CLASS_1_89C70488A8D240C1_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0xFFF2C00)
#define CLASS_1_89C70488A8D240C1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xFFF1D50)
#define CLASS_1_89C70488A8D240C1_METHOD_1_5967057CD668BF97_OFFSET UNITYSDK_OFFSET(0xFFF4020)
#define CLASS_1_89C70488A8D240C1_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0xFFF3D80)
#define CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_1_OFFSET UNITYSDK_OFFSET(0xFFF2AC0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_2_OFFSET UNITYSDK_OFFSET(0xFFF2D60)
#define CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_OFFSET UNITYSDK_OFFSET(0xFFF1C90)
#define CLASS_1_89C70488A8D240C1_METHOD_1_77BC65EAD799853B_OFFSET UNITYSDK_OFFSET(0xFFF30C0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_99B63E6D0FA503A0_OFFSET UNITYSDK_OFFSET(0xFFF3A40)
#define CLASS_1_89C70488A8D240C1_METHOD_1_B13A873C7C334E65_OFFSET UNITYSDK_OFFSET(0xFFF1B30)
#define CLASS_1_89C70488A8D240C1_METHOD_1_B9C4EFFA1AC5E536_OFFSET UNITYSDK_OFFSET(0xFFF1D60)
#define CLASS_1_89C70488A8D240C1_METHOD_1_BE6D496EC3EAF75B_OFFSET UNITYSDK_OFFSET(0xFFF26C0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0xFFF2410)
#define CLASS_1_89C70488A8D240C1_METHOD_1_DDF4E6AEE2216B17_OFFSET UNITYSDK_OFFSET(0xFFF3E30)
#define CLASS_1_89C70488A8D240C1_METHOD_1_FE7B7FBDE6969B4A_OFFSET UNITYSDK_OFFSET(0xFFF21B0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xFFF3FC0)
#define CLASS_1_89C70488A8D240C1_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xFFF1AD0)
#define CLASS_1_89C70488A8D240C1__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF16B0)

inline static constexpr unsigned int Class_1_89C70488A8D240C1_TypeDefinitionIndex = 44520;

class Class_1_89C70488A8D240C1 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* Field_1_4; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x18
	::System::Func_3<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Boolean>* Field_1_8; // 0x20
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_1*>* Field_1_7; // 0x30
	::Struct_2_5D55D2D92073E392 Field_1_1; // 0x38
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_89C70488A8D240C1_Enum_3_C780BFBFED223F30_1>* Field_1_0; // 0x168
	::System::Boolean Field_1_5; // 0x170
	::System::Boolean Field_1_2; // 0x171

	::System::Void _ctor(::MoleMole::Cameras::PhotoCameraConfig*& a1, ::System::UInt32 a2, ::PipelineCamera::WorldBasicCameraData a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*&, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_B13A873C7C334E65()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_B13A873C7C334E65_OFFSET))(this);
	}

	::System::Boolean Method_1_6A7F69A381F965E9(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_1_B9C4EFFA1AC5E536(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_B9C4EFFA1AC5E536_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_18E7A3CC076DECFF()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_18E7A3CC076DECFF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_34E0F94BD1913283(::Class_1_89C70488A8D240C1_Enum_3_C780BFBFED223F30_1 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_89C70488A8D240C1_Enum_3_C780BFBFED223F30_1))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_34E0F94BD1913283_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_FE7B7FBDE6969B4A()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_FE7B7FBDE6969B4A_OFFSET))(this);
	}

	::System::Boolean Method_1_41541A33EEEE8620(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::System::Boolean Method_1_6A7F69A381F965E9_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_2AFD4CF0B364204F(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_2AFD4CF0B364204F_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_2AFD4CF0B364204F_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_2AFD4CF0B364204F_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A7F69A381F965E9_2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_6A7F69A381F965E9_2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_08BC081A69C9E1AA(::MoleMole::Cameras::PhotoCameraConfig* a1, ::System::UInt32 a2, ::PipelineCamera::WorldBasicCameraData a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_08BC081A69C9E1AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3651BCA3CD34B8F0(::MoleMole::Cameras::PhotoCameraConfig*& a1, ::System::UInt32 a2, ::PipelineCamera::WorldBasicCameraData a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*&, ::System::UInt32, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_3651BCA3CD34B8F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BE6D496EC3EAF75B(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_BE6D496EC3EAF75B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_41541A33EEEE8620_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_1_OFFSET))(this, a1);
	}

	static ::Class_1_89C70488A8D240C1* Method_1_4300251440128830(::MoleMole::Cameras::PhotoCameraConfig*& a1, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> a2, ::System::Nullable_1<::System::UInt32> a3)
	{
		return ((::Class_1_89C70488A8D240C1*(*)(::MoleMole::Cameras::PhotoCameraConfig*&, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_4300251440128830_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_41541A33EEEE8620_2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_2_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_99B63E6D0FA503A0(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_99B63E6D0FA503A0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_41541A33EEEE8620_3(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_41541A33EEEE8620_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_DDF4E6AEE2216B17()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_DDF4E6AEE2216B17_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_77BC65EAD799853B()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_77BC65EAD799853B_OFFSET))(this);
	}

	::System::Boolean Method_1_193443EF57621030(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_193443EF57621030_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_5967057CD668BF97()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_METHOD_1_5967057CD668BF97_OFFSET))(this);
	}
};
