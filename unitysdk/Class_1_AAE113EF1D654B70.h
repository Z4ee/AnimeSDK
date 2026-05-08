#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AAE113EF1D654B70_Enum_3_C780BFBFED223F30_5.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/InLevelCustomCameraSequenceType.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/MoleMole/LevelPerform/LevelPerformConfig_InLevelCameraSequenceConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_AAE113EF1D654B70_Class_1_18BFEAD82BA3C5E8_1;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AAE113EF1D654B70_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x122A5E60)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x122A6790)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x122A6370)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_999A32A2294435FF_OFFSET UNITYSDK_OFFSET(0x122A5B80)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_9B49AC9CA4A66690_OFFSET UNITYSDK_OFFSET(0x122A63E0)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_DFEAB96CD1BCA51D_OFFSET UNITYSDK_OFFSET(0x122A5F20)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_EF3D19C357AD772F_OFFSET UNITYSDK_OFFSET(0x122A62E0)
#define CLASS_1_AAE113EF1D654B70_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x122A5ED0)
#define CLASS_1_AAE113EF1D654B70__CCTOR_OFFSET UNITYSDK_OFFSET(0x122A60D0)
#define CLASS_1_AAE113EF1D654B70__CTOR_1_OFFSET UNITYSDK_OFFSET(0x122A59D0)
#define CLASS_1_AAE113EF1D654B70__CTOR_OFFSET UNITYSDK_OFFSET(0x122A5960)

inline static constexpr unsigned int Class_1_AAE113EF1D654B70_TypeDefinitionIndex = 57256;

class Class_1_AAE113EF1D654B70 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelCustomCameraSequenceType, ::System::Func_2<::Class_1_AAE113EF1D654B70*, ::Class_1_AAE113EF1D654B70_Class_1_18BFEAD82BA3C5E8_1*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelCustomCameraSequenceType, ::System::Func_2<::Class_1_AAE113EF1D654B70*, ::Class_1_AAE113EF1D654B70_Class_1_18BFEAD82BA3C5E8_1*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAE113EF1D654B70_TypeDefinitionIndex)->GetStaticField(0x44360);
	}
	::MoleMole::LevelPerform::LevelPerformConfig_InLevelCameraSequenceConfig Field_1_3; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_AAE113EF1D654B70_Enum_3_C780BFBFED223F30_5>* Field_1_8; // 0x28
	::Class_1_AAE113EF1D654B70_Class_1_18BFEAD82BA3C5E8_1* Field_1_2; // 0x30
	::MoleMole::InLevelCustomPerformerRunnerEnvironment Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::Class_1_AAE113EF1D654B70_Enum_3_C780BFBFED223F30_5>* Field_1_7; // 0x40
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x50
	::Foundation::Unreal::FName Field_1_4; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::MoleMole::InLevelCustomPerformerRunnerEnvironment a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::InLevelCustomPerformerRunnerEnvironment))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70__CCTOR_OFFSET))();
	}

	::System::Void Method_1_999A32A2294435FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_999A32A2294435FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_1_DFEAB96CD1BCA51D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_DFEAB96CD1BCA51D_OFFSET))(this);
	}

	::System::Void Method_1_EF3D19C357AD772F(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_EF3D19C357AD772F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_9B49AC9CA4A66690(::MoleMole::Cameras::NapVirtualPipelineCamera* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::NapVirtualPipelineCamera*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_9B49AC9CA4A66690_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}
};
