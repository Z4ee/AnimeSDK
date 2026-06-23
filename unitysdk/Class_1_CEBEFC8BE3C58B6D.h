#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEBEFC8BE3C58B6D_Enum_3_33B16E3E02BB0BB4_4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_194;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_CEBEFC8BE3C58B6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x102327A0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_04F4515D28120AE5_OFFSET UNITYSDK_OFFSET(0x10233320)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x10233170)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_0E53AE4483FDA031_OFFSET UNITYSDK_OFFSET(0x10233910)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_14B699223FD27A67_OFFSET UNITYSDK_OFFSET(0x10232DE0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x10233EC0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_4717C8428C16C745_OFFSET UNITYSDK_OFFSET(0x10233470)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_4EF190452E1934F6_OFFSET UNITYSDK_OFFSET(0x102333E0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_71115463E9C997A3_OFFSET UNITYSDK_OFFSET(0x10233D70)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_A70C3F7A731F6023_OFFSET UNITYSDK_OFFSET(0x102329F0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_B244008EEA2D3ECF_OFFSET UNITYSDK_OFFSET(0x10233270)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0x102338C0)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10233F10)
#define CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x10233220)
#define CLASS_1_CEBEFC8BE3C58B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x102328E0)

inline static constexpr unsigned int Class_1_CEBEFC8BE3C58B6D_TypeDefinitionIndex = 62084;

class Class_1_CEBEFC8BE3C58B6D : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_CEBEFC8BE3C58B6D_Enum_3_33B16E3E02BB0BB4_4>* Field_1_0; // 0x10
	::Struct_2_9F85650CFFBE9F44 Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_194* Field_1_5; // 0xD0
	::Struct_2_9F85650CFFBE9F44 Field_1_3; // 0xD8
	::System::Boolean Field_1_7; // 0x190
	::System::Boolean Field_1_2; // 0x191
	::System::Boolean Field_1_8; // 0x192
	::System::Boolean Field_1_1; // 0x193
	::System::Single Field_1_6; // 0x194

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A70C3F7A731F6023(::MoleMole::Cameras::CameraTrackBlending* a1, ::MoleMole::Cameras::CameraTrackBlending* a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_A70C3F7A731F6023_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_194* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_194*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B244008EEA2D3ECF(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_B244008EEA2D3ECF_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_04F4515D28120AE5(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_04F4515D28120AE5_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_14B699223FD27A67()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_14B699223FD27A67_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_4EF190452E1934F6(::MoleMole::Cameras::CameraTrackBlending* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_4EF190452E1934F6_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_4717C8428C16C745(::MoleMole::Cameras::CameraTrackBlending* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_4717C8428C16C745_OFFSET))(this, a1, a2);
	}

	::Class_1_CEBEFC8BE3C58B6D* Method_1_C668CA64A755C44E(::System::Boolean a1)
	{
		return ((::Class_1_CEBEFC8BE3C58B6D*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_0E53AE4483FDA031()
	{
		return ((::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_0E53AE4483FDA031_OFFSET))(this);
	}

	::System::Void Method_1_71115463E9C997A3(::MoleMole::Cameras::CameraTrackBlending* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_71115463E9C997A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}
};
