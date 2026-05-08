#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8BCF11C763A084A9_Enum_3_33B16E3E02BB0BB4_6.h"
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

#define CLASS_1_8BCF11C763A084A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114C7A10)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_0A545C018D164123_OFFSET UNITYSDK_OFFSET(0x114C8A60)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x114C8870)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_2970CFB0C4CB6EBC_OFFSET UNITYSDK_OFFSET(0x114C8C10)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_1_OFFSET UNITYSDK_OFFSET(0x114C7F80)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_2_OFFSET UNITYSDK_OFFSET(0x114C8740)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_3_OFFSET UNITYSDK_OFFSET(0x114C8D20)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_4_OFFSET UNITYSDK_OFFSET(0x114C8DA0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_OFFSET UNITYSDK_OFFSET(0x114C7DA0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x114C7E40)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x114C87E0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0x114C87F0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0x114C7EF0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_94C54E795E530F7E_OFFSET UNITYSDK_OFFSET(0x114C8000)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x114C89A0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x114C8E80)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_CBD371AEAB277954_OFFSET UNITYSDK_OFFSET(0x114C84C0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_F544F9A97BE316CA_OFFSET UNITYSDK_OFFSET(0x114C7D10)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x114C86E0)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x114C8E20)
#define CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x114C7E90)
#define CLASS_1_8BCF11C763A084A9__CTOR_OFFSET UNITYSDK_OFFSET(0x114C7AB0)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_TypeDefinitionIndex = 58540;

class Class_1_8BCF11C763A084A9 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_8BCF11C763A084A9_Enum_3_33B16E3E02BB0BB4_6>* Field_1_2; // 0x10
	::Struct_2_62E9700EAC81114C Field_1_0; // 0x18
	::System::Single Field_1_3; // 0xC8
	::System::Single Field_1_5; // 0xCC
	::System::Single Field_1_4; // 0xD0
	::System::Boolean Field_1_1; // 0xD4

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig&))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_94C54E795E530F7E(::System::Single a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_94C54E795E530F7E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F544F9A97BE316CA(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_F544F9A97BE316CA_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_0A545C018D164123()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_0A545C018D164123_OFFSET))(this);
	}

	::System::Void Method_1_CBD371AEAB277954(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_CBD371AEAB277954_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_2970CFB0C4CB6EBC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_2970CFB0C4CB6EBC_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_3_OFFSET))(this, a1);
	}

	::System::Single Method_1_3229D6B5C48FD206_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_3229D6B5C48FD206_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}
};
