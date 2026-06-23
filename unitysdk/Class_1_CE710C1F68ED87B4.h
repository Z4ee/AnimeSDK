#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE710C1F68ED87B4_Enum_3_1FBED31DB87714DF.h"
#include "unitysdk/Class_1_CE710C1F68ED87B4_Enum_3_33B16E3E02BB0BB4_15.h"
#include "unitysdk/Class_1_CE710C1F68ED87B4_Struct_2_3B980AB18C5A4B62.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_A944C35C433158AC;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
template <typename T> class Class_2_0CC52376C69D8DCE;

#define CLASS_1_CE710C1F68ED87B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13344A90)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_00B77A664396B1D7_OFFSET UNITYSDK_OFFSET(0x133461A0)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_1FDEB5DDAA7A94DC_OFFSET UNITYSDK_OFFSET(0x13344DE0)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13345CD0)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_2B36436599EB381E_OFFSET UNITYSDK_OFFSET(0x133440F0)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x133458B0)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13345D30)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0x13345930)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x13345C40)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0x13345D70)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x13345300)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x13346620)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_B1E6EAC525CC221A_OFFSET UNITYSDK_OFFSET(0x13346560)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x13344B70)
#define CLASS_1_CE710C1F68ED87B4_METHOD_1_F77F11C905B75C91_OFFSET UNITYSDK_OFFSET(0x13346440)
#define CLASS_1_CE710C1F68ED87B4__CTOR_OFFSET UNITYSDK_OFFSET(0x13343EE0)

inline static constexpr unsigned int Class_1_CE710C1F68ED87B4_TypeDefinitionIndex = 86438;

class Class_1_CE710C1F68ED87B4 : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_1_6; // 0x10
	::Class_2_A944C35C433158AC* Field_1_5; // 0x18
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_CE710C1F68ED87B4_Enum_3_33B16E3E02BB0BB4_15>* Field_1_0; // 0x20
	::Class_2_0CC52376C69D8DCE<::PipelineCamera::WorldBasicCameraData>* Field_1_9; // 0x28
	::Class_1_CE710C1F68ED87B4_Struct_2_3B980AB18C5A4B62 Field_1_2; // 0x30
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x58
	::System::Single Field_1_8; // 0x60
	::System::Single Field_1_7; // 0x64
	::Class_1_CE710C1F68ED87B4_Enum_3_1FBED31DB87714DF Field_1_4; // 0x68
	::System::Boolean Field_1_3; // 0x6C

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraLockConfig* a1, ::Class_2_A944C35C433158AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*, ::Class_2_A944C35C433158AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::Void Method_1_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_78037B64B814568E_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B36436599EB381E(::MoleMole::Config::SlideRopeCameraLockConfig* a1, ::Class_2_A944C35C433158AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*, ::Class_2_A944C35C433158AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_2B36436599EB381E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_1FDEB5DDAA7A94DC(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_1FDEB5DDAA7A94DC_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	::System::Void Method_1_F77F11C905B75C91(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_F77F11C905B75C91_OFFSET))(this, a1);
	}

	::System::Void Method_1_00B77A664396B1D7(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_00B77A664396B1D7_OFFSET))(this, a1, a2);
	}

	static ::Class_1_CE710C1F68ED87B4* Method_1_B1E6EAC525CC221A(::MoleMole::Config::SlideRopeCameraLockConfig*& a1, ::Class_2_A944C35C433158AC*& a2, ::System::Single a3)
	{
		return ((::Class_1_CE710C1F68ED87B4*(*)(::MoleMole::Config::SlideRopeCameraLockConfig*&, ::Class_2_A944C35C433158AC*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_B1E6EAC525CC221A_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE710C1F68ED87B4_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}
};
