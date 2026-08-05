#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_97AA85461D84B92D_Enum_3_33B16E3E02BB0BB4_7.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_97AA85461D84B92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1264F9C0)
#define CLASS_1_97AA85461D84B92D_METHOD_1_04F4515D28120AE5_OFFSET UNITYSDK_OFFSET(0x1264FB60)
#define CLASS_1_97AA85461D84B92D_METHOD_1_436E91B5CA9835BA_OFFSET UNITYSDK_OFFSET(0x126509C0)
#define CLASS_1_97AA85461D84B92D_METHOD_1_4C513551633BABF7_OFFSET UNITYSDK_OFFSET(0x1264F930)
#define CLASS_1_97AA85461D84B92D_METHOD_1_A6AABC82C38617F8_OFFSET UNITYSDK_OFFSET(0x12650AA0)
#define CLASS_1_97AA85461D84B92D_METHOD_1_BCBE3479F826A483_OFFSET UNITYSDK_OFFSET(0x12650F00)
#define CLASS_1_97AA85461D84B92D_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0x12650680)
#define CLASS_1_97AA85461D84B92D_METHOD_1_CCB1ED2B79CAC3CE_OFFSET UNITYSDK_OFFSET(0x126506D0)
#define CLASS_1_97AA85461D84B92D_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1264F8D0)
#define CLASS_1_97AA85461D84B92D_METHOD_1_EEB1B69326238524_OFFSET UNITYSDK_OFFSET(0x1264FC20)
#define CLASS_1_97AA85461D84B92D__CTOR_OFFSET UNITYSDK_OFFSET(0x1264F660)

inline static constexpr unsigned int Class_1_97AA85461D84B92D_TypeDefinitionIndex = 62398;

class Class_1_97AA85461D84B92D : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_97AA85461D84B92D_TypeDefinitionIndex)->GetStaticField(0x10FD0);
	}
	// static const ::Enum_3_24F60EA0D4DCCDF0 Field_1_11; // 0x0
	::MoleMole::Cameras::FixedCameraConfig* Field_1_7; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_97AA85461D84B92D_Enum_3_33B16E3E02BB0BB4_7>* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Boolean Field_1_0; // 0x25
	::PipelineCamera::WorldBasicCameraData Field_1_6; // 0x28

	::System::Void _ctor(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_04F4515D28120AE5(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_04F4515D28120AE5_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::Class_1_97AA85461D84B92D* Method_1_C668CA64A755C44E(::System::Boolean a1)
	{
		return ((::Class_1_97AA85461D84B92D*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCB1ED2B79CAC3CE(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::FixedCameraConfig*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::FixedCameraConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_CCB1ED2B79CAC3CE_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_4C513551633BABF7(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_4C513551633BABF7_OFFSET))(this, a1, a2);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_436E91B5CA9835BA(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_436E91B5CA9835BA_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_A6AABC82C38617F8(::MoleMole::Cameras::FixedCameraConfig*& a1, ::System::Boolean a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_A6AABC82C38617F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCBE3479F826A483(::MoleMole::Cameras::FixedCameraConfig* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_BCBE3479F826A483_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EEB1B69326238524(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_METHOD_1_EEB1B69326238524_OFFSET))(this, a1);
	}
};
