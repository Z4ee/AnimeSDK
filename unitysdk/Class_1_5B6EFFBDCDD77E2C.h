#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B6EFFBDCDD77E2C_Enum_3_33B16E3E02BB0BB4_6.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_552F4B3897A496E8;
class Class_3_CF6254B260CF5CF4;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverrideConfigSideScrollingCamera; }
namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define CLASS_1_5B6EFFBDCDD77E2C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E80740)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_0392750BCA51515E_OFFSET UNITYSDK_OFFSET(0x14E83F20)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14E836B0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_1993758E0A987989_1_OFFSET UNITYSDK_OFFSET(0x14E83D30)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_1993758E0A987989_OFFSET UNITYSDK_OFFSET(0x14E82E30)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_21D954BC9FA238DA_OFFSET UNITYSDK_OFFSET(0x14E837A0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_28DFD93006F42C76_OFFSET UNITYSDK_OFFSET(0x14E81BE0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x14E806C0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_351E79A95658A8B9_OFFSET UNITYSDK_OFFSET(0x14E80A20)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_38DC2564C89962EB_OFFSET UNITYSDK_OFFSET(0x14E83DA0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x14E83CE0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14E836C0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x14E80990)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x14E82EA0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x14E81170)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_9063ADBA10BED487_1_OFFSET UNITYSDK_OFFSET(0x14E84160)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_9063ADBA10BED487_OFFSET UNITYSDK_OFFSET(0x14E80950)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x14E844C0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x14E84410)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x14E83720)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x14E837B0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x14E82020)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x14E80650)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x14E808E0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x14E841A0)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_EEB1B69326238524_OFFSET UNITYSDK_OFFSET(0x14E82090)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_FA1C847FB1DF4FE5_OFFSET UNITYSDK_OFFSET(0x14E81720)
#define CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_FD7CD9BA92701C49_OFFSET UNITYSDK_OFFSET(0x14E832D0)
#define CLASS_1_5B6EFFBDCDD77E2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E808D0)
#define CLASS_1_5B6EFFBDCDD77E2C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E80090)

inline static constexpr unsigned int Class_1_5B6EFFBDCDD77E2C_TypeDefinitionIndex = 64772;

class Class_1_5B6EFFBDCDD77E2C : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B6EFFBDCDD77E2C_TypeDefinitionIndex)->GetStaticField(0x11A30);
	}
	// static const ::Enum_3_24F60EA0D4DCCDF0 Field_1_2; // 0x0
	::Class_3_552F4B3897A496E8* Field_1_22; // 0x10
	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Field_1_7; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* Field_1_24; // 0x20
	::MoleMole::Config::ConfigSideScrollingCamera* Field_1_6; // 0x28
	::MoleMole::Cameras::OverrideConfigSideScrollingCamera* Field_1_9; // 0x30
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x38
	::MoleMole::EntityHandle Field_1_20; // 0x40
	::MoleMole::Cameras::CameraTrackBlending* Field_1_25; // 0x50
	::Class_3_CF6254B260CF5CF4* Field_1_21; // 0x58
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_5B6EFFBDCDD77E2C_Enum_3_33B16E3E02BB0BB4_6>* Field_1_3; // 0x60
	::System::String* Field_1_8; // 0x68
	::System::Boolean Field_1_4; // 0x70
	::System::Single Field_1_18; // 0x74
	::System::Single Field_1_23; // 0x78
	::UnityEngine::Vector3 Field_1_19; // 0x7C
	::UnityEngine::Vector3 Field_1_12; // 0x88
	::System::UInt32 Field_1_0; // 0x94
	::System::Single Field_1_16; // 0x98
	::UnityEngine::Vector3 Field_1_11; // 0x9C
	::System::Single Field_1_17; // 0xA8
	::System::Single Field_1_15; // 0xAC
	::UnityEngine::Vector3 Field_1_14; // 0xB0
	::UnityEngine::Vector3 Field_1_13; // 0xBC
	::UnityEngine::Vector3 Field_1_10; // 0xC8

	::System::Void _ctor(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_9063ADBA10BED487_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_351E79A95658A8B9(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_351E79A95658A8B9_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_EEB1B69326238524(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_EEB1B69326238524_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_1993758E0A987989_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Method_1_21D954BC9FA238DA()
	{
		return ((::MoleMole::Cameras::SideScrollingCameraRuntimeParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_21D954BC9FA238DA_OFFSET))(this);
	}

	::System::Void Method_1_28DFD93006F42C76(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_28DFD93006F42C76_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_FA1C847FB1DF4FE5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_FA1C847FB1DF4FE5_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_1993758E0A987989_1_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::System::Void Method_1_38DC2564C89962EB(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_38DC2564C89962EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	static ::Class_1_5B6EFFBDCDD77E2C* Method_1_0392750BCA51515E(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::Class_1_5B6EFFBDCDD77E2C*(*)(::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_0392750BCA51515E_OFFSET))(a1, a2, a3, a4);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_9063ADBA10BED487_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_FD7CD9BA92701C49(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_5B6EFFBDCDD77E2C_METHOD_1_FD7CD9BA92701C49_OFFSET))(this, a1, a2);
	}
};
