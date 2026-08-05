#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3BCF9AD36DAF024E_Enum_3_33B16E3E02BB0BB4_11.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_06419CA21ECB69E6;
class Class_3_552F4B3897A496E8;
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

#define CLASS_1_3BCF9AD36DAF024E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C8DA90)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x11C912E0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_1993758E0A987989_1_OFFSET UNITYSDK_OFFSET(0x11C8F420)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_1993758E0A987989_OFFSET UNITYSDK_OFFSET(0x11C8E2B0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_21D954BC9FA238DA_OFFSET UNITYSDK_OFFSET(0x11C91530)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x11C8DA20)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_351E79A95658A8B9_OFFSET UNITYSDK_OFFSET(0x11C8F490)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_38DC2564C89962EB_OFFSET UNITYSDK_OFFSET(0x11C913B0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x11C8EDA0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11C8EDF0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x11C8E220)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x11C91580)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x11C8DCA0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_9063ADBA10BED487_1_OFFSET UNITYSDK_OFFSET(0x11C91540)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_9063ADBA10BED487_OFFSET UNITYSDK_OFFSET(0x11C90E10)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_9C4B872F44309234_OFFSET UNITYSDK_OFFSET(0x11C910C0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x11C8EE50)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x11C912F0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_BE8C4C4FF9D66003_OFFSET UNITYSDK_OFFSET(0x11C8FBD0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x11C8ED20)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x11C8E7F0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x11C8D9B0)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x11C90020)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x11C8DC30)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x11C90E50)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_EEB1B69326238524_OFFSET UNITYSDK_OFFSET(0x11C90090)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_FA1C847FB1DF4FE5_OFFSET UNITYSDK_OFFSET(0x11C8E320)
#define CLASS_1_3BCF9AD36DAF024E_METHOD_1_FD7CD9BA92701C49_OFFSET UNITYSDK_OFFSET(0x11C8F030)
#define CLASS_1_3BCF9AD36DAF024E__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C8DC20)
#define CLASS_1_3BCF9AD36DAF024E__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8D440)

inline static constexpr unsigned int Class_1_3BCF9AD36DAF024E_TypeDefinitionIndex = 74216;

class Class_1_3BCF9AD36DAF024E : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BCF9AD36DAF024E_TypeDefinitionIndex)->GetStaticField(0x10220);
	}
	// static const ::Enum_3_24F60EA0D4DCCDF0 Field_1_7; // 0x0
	::System::String* Field_1_9; // 0x10
	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Field_1_10; // 0x18
	::Class_3_06419CA21ECB69E6* Field_1_20; // 0x20
	::MoleMole::Cameras::OverrideConfigSideScrollingCamera* Field_1_8; // 0x28
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_4; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* Field_1_25; // 0x38
	::MoleMole::EntityHandle Field_1_21; // 0x40
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_3BCF9AD36DAF024E_Enum_3_33B16E3E02BB0BB4_11>* Field_1_6; // 0x50
	::Class_3_552F4B3897A496E8* Field_1_27; // 0x58
	::MoleMole::Cameras::CameraTrackBlending* Field_1_24; // 0x60
	::MoleMole::Config::ConfigSideScrollingCamera* Field_1_11; // 0x68
	::System::Single Field_1_16; // 0x70
	::System::Single Field_1_17; // 0x74
	::UnityEngine::Vector3 Field_1_12; // 0x78
	::System::Boolean Field_1_5; // 0x84
	::UnityEngine::Vector3 Field_1_13; // 0x88
	::System::Single Field_1_26; // 0x94
	::UnityEngine::Vector3 Field_1_22; // 0x98
	::System::UInt32 Field_1_1; // 0xA4
	::System::Single Field_1_18; // 0xA8
	::UnityEngine::Vector3 Field_1_14; // 0xAC
	::System::Single Field_1_23; // 0xB8
	::UnityEngine::Vector3 Field_1_15; // 0xBC
	::UnityEngine::Vector3 Field_1_19; // 0xC8

	::System::Void _ctor(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_1993758E0A987989_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA1C847FB1DF4FE5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_FA1C847FB1DF4FE5_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_FD7CD9BA92701C49(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_FD7CD9BA92701C49_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_351E79A95658A8B9(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_351E79A95658A8B9_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_1993758E0A987989_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_9063ADBA10BED487_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_BE8C4C4FF9D66003(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_BE8C4C4FF9D66003_OFFSET))(this, a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	static ::Class_1_3BCF9AD36DAF024E* Method_1_9C4B872F44309234(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::Class_1_3BCF9AD36DAF024E*(*)(::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_9C4B872F44309234_OFFSET))(a1, a2, a3, a4);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Method_1_21D954BC9FA238DA()
	{
		return ((::MoleMole::Cameras::SideScrollingCameraRuntimeParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_21D954BC9FA238DA_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_9063ADBA10BED487_1_OFFSET))(this);
	}

	::System::Void Method_1_EEB1B69326238524(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_EEB1B69326238524_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::Void Method_1_38DC2564C89962EB(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_METHOD_1_38DC2564C89962EB_OFFSET))(this, a1);
	}
};
