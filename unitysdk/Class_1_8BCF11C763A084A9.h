#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8BCF11C763A084A9_Enum_3_33B16E3E02BB0BB4_5.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_62E9700EAC81114C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_8BCF11C763A084A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14036D90)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x14037E20)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_1_OFFSET UNITYSDK_OFFSET(0x140371B0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_2_OFFSET UNITYSDK_OFFSET(0x140372B0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_3_OFFSET UNITYSDK_OFFSET(0x14037330)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_4_OFFSET UNITYSDK_OFFSET(0x14037C30)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_OFFSET UNITYSDK_OFFSET(0x14037110)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_2970CFB0C4CB6EBC_OFFSET UNITYSDK_OFFSET(0x140375E0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14038070)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_447856BEA01EB526_OFFSET UNITYSDK_OFFSET(0x140380C0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x140375D0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x14037230)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0x14037D90)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_94C54E795E530F7E_OFFSET UNITYSDK_OFFSET(0x140376F0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_9B4C97866147F047_OFFSET UNITYSDK_OFFSET(0x140373B0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x14037F50)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x14037BC0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_F544F9A97BE316CA_OFFSET UNITYSDK_OFFSET(0x14037090)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x14037D30)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x14038010)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14037CD0)
#define CLASS_1_8BCF11C763A084A9__CTOR_OFFSET UNITYSDK_OFFSET(0x14036E40)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_TypeDefinitionIndex = 53652;

class Class_1_8BCF11C763A084A9 : public ::System::Object
{
public:
	::Struct_2_62E9700EAC81114C Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_8BCF11C763A084A9_Enum_3_33B16E3E02BB0BB4_5>* Field_1_7; // 0xC0
	::System::Single Field_1_4; // 0xC8
	::System::Boolean Field_1_0; // 0xCC
	::System::Single Field_1_6; // 0xD0
	::System::Single Field_1_5; // 0xD4

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig&))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_1E6E724D5F226D79(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_OFFSET))(this, a1);
	}

	::System::Single Method_1_1E6E724D5F226D79_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Single Method_1_1E6E724D5F226D79_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_1E6E724D5F226D79_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B4C97866147F047(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_9B4C97866147F047_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2970CFB0C4CB6EBC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_2970CFB0C4CB6EBC_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_94C54E795E530F7E(::System::Single a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_94C54E795E530F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Single Method_1_1E6E724D5F226D79_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_1E6E724D5F226D79_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F544F9A97BE316CA(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_F544F9A97BE316CA_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_447856BEA01EB526()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_447856BEA01EB526_OFFSET))(this);
	}
};
