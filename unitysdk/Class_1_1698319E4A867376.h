#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1698319E4A867376_Enum_3_33B16E3E02BB0BB4_10.h"
#include "unitysdk/Class_1_1698319E4A867376_Struct_2_84D8EB7B877F9F1B.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Config/HighLightAirCombatCameraFollowType.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_5243143C1CFA9367;

#define CLASS_1_1698319E4A867376_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC86960)
#define CLASS_1_1698319E4A867376_METHOD_1_08EB3876E3A20D28_OFFSET UNITYSDK_OFFSET(0xDC87290)
#define CLASS_1_1698319E4A867376_METHOD_1_0D9A6615FA9C1652_OFFSET UNITYSDK_OFFSET(0xDC85D30)
#define CLASS_1_1698319E4A867376_METHOD_1_1F1EEF8961A54F56_OFFSET UNITYSDK_OFFSET(0xDC8AB20)
#define CLASS_1_1698319E4A867376_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xDC86BA0)
#define CLASS_1_1698319E4A867376_METHOD_1_38B243F034BF03D4_OFFSET UNITYSDK_OFFSET(0xDC87880)
#define CLASS_1_1698319E4A867376_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xDC8A420)
#define CLASS_1_1698319E4A867376_METHOD_1_4378B7B755C11976_OFFSET UNITYSDK_OFFSET(0xDC8ABF0)
#define CLASS_1_1698319E4A867376_METHOD_1_601EDD6847FBEEDA_OFFSET UNITYSDK_OFFSET(0xDC89B60)
#define CLASS_1_1698319E4A867376_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xDC8B2A0)
#define CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_1_OFFSET UNITYSDK_OFFSET(0xDC89A60)
#define CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_2_OFFSET UNITYSDK_OFFSET(0xDC8B340)
#define CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_OFFSET UNITYSDK_OFFSET(0xDC89670)
#define CLASS_1_1698319E4A867376_METHOD_1_656FEF53BA0BB40F_OFFSET UNITYSDK_OFFSET(0xDC8A980)
#define CLASS_1_1698319E4A867376_METHOD_1_6E6D34E3225EDF7E_OFFSET UNITYSDK_OFFSET(0xDC8A550)
#define CLASS_1_1698319E4A867376_METHOD_1_6FBB9B0F06BA3304_OFFSET UNITYSDK_OFFSET(0xDC87D80)
#define CLASS_1_1698319E4A867376_METHOD_1_7543B75944713068_OFFSET UNITYSDK_OFFSET(0xDC8A490)
#define CLASS_1_1698319E4A867376_METHOD_1_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0xDC86C10)
#define CLASS_1_1698319E4A867376_METHOD_1_84E7142C8264355D_OFFSET UNITYSDK_OFFSET(0xDC873F0)
#define CLASS_1_1698319E4A867376_METHOD_1_A6C395308371C2BE_OFFSET UNITYSDK_OFFSET(0xDC87F60)
#define CLASS_1_1698319E4A867376_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0xDC876B0)
#define CLASS_1_1698319E4A867376_METHOD_1_BB566FDB7154E256_OFFSET UNITYSDK_OFFSET(0xDC89770)
#define CLASS_1_1698319E4A867376_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0xDC89BF0)
#define CLASS_1_1698319E4A867376_METHOD_1_E71E7C3FA8B691C8_OFFSET UNITYSDK_OFFSET(0xDC87AF0)
#define CLASS_1_1698319E4A867376_METHOD_1_E738E6B9AD710AE4_OFFSET UNITYSDK_OFFSET(0xDC871C0)
#define CLASS_1_1698319E4A867376_METHOD_1_F77F11C905B75C91_OFFSET UNITYSDK_OFFSET(0xDC87770)
#define CLASS_1_1698319E4A867376_METHOD_1_F925EC9018EAE442_OFFSET UNITYSDK_OFFSET(0xDC89E60)
#define CLASS_1_1698319E4A867376__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC86B90)
#define CLASS_1_1698319E4A867376__CTOR_OFFSET UNITYSDK_OFFSET(0xDC84F60)

inline static constexpr unsigned int Class_1_1698319E4A867376_TypeDefinitionIndex = 69253;

class Class_1_1698319E4A867376 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1698319E4A867376_TypeDefinitionIndex)->GetStaticField(0x10B70);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1698319E4A867376_TypeDefinitionIndex)->GetStaticField(0x10B71);
	}
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_24; // 0x10
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_20; // 0x18
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector2>* Field_1_17; // 0x20
	::UnityEngine::GameObject* Field_1_4; // 0x28
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_27; // 0x30
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_26; // 0x38
	::UnityEngine::Transform* Field_1_8; // 0x40
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_22; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_10; // 0x50
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_18; // 0x58
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_1698319E4A867376_Enum_3_33B16E3E02BB0BB4_10>* Field_1_0; // 0x60
	::UnityEngine::Transform* Field_1_15; // 0x68
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_21; // 0x70
	::Class_1_1698319E4A867376_Struct_2_84D8EB7B877F9F1B Field_1_6; // 0x78
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_31; // 0xC8
	::UnityEngine::Transform* Field_1_9; // 0xD0
	::Class_2_5243143C1CFA9367<::UnityEngine::Vector3>* Field_1_25; // 0xD8
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_7; // 0xE0
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_23; // 0xE8
	::Class_2_5243143C1CFA9367<::System::Single>* Field_1_16; // 0xF0
	::UnityEngine::Transform* Field_1_11; // 0xF8
	::UnityEngine::Vector2 Field_1_14; // 0x100
	::UnityEngine::Vector3 Field_1_13; // 0x108
	::System::Boolean Field_1_12; // 0x114
	::MoleMole::Config::HighLightAirCombatCameraFollowType Field_1_5; // 0x118
	::UnityEngine::Vector3 Field_1_19; // 0x11C

	::System::Void _ctor(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_78037B64B814568E_OFFSET))(this);
	}

	::System::Void Method_1_E738E6B9AD710AE4(::System::Boolean a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_E738E6B9AD710AE4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_84E7142C8264355D(::MoleMole::Config::HighLightAirCombatCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_84E7142C8264355D_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_38B243F034BF03D4(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_38B243F034BF03D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E71E7C3FA8B691C8(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_E71E7C3FA8B691C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6FBB9B0F06BA3304(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_6FBB9B0F06BA3304_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A6C395308371C2BE(::UnityEngine::Vector3& a1, ::System::Single& a2, ::UnityEngine::Vector3& a3, ::System::Single& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::UnityEngine::Vector3&, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_A6C395308371C2BE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0D9A6615FA9C1652(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_0D9A6615FA9C1652_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_65201BC7200FF657(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BB566FDB7154E256(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_BB566FDB7154E256_OFFSET))(this, a1);
	}

	::System::Void Method_1_65201BC7200FF657_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_08EB3876E3A20D28(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_08EB3876E3A20D28_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_601EDD6847FBEEDA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_601EDD6847FBEEDA_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_F77F11C905B75C91(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_F77F11C905B75C91_OFFSET))(this, a1);
	}

	::System::Void Method_1_7543B75944713068(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_7543B75944713068_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_6E6D34E3225EDF7E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_6E6D34E3225EDF7E_OFFSET))(this);
	}

	static ::Class_1_1698319E4A867376* Method_1_656FEF53BA0BB40F(::System::String*& a1, ::UnityEngine::GameObject*& a2)
	{
		return ((::Class_1_1698319E4A867376*(*)(::System::String*&, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_656FEF53BA0BB40F_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1F1EEF8961A54F56(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_1F1EEF8961A54F56_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4378B7B755C11976(::System::Int32 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_4378B7B755C11976_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_F925EC9018EAE442(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_F925EC9018EAE442_OFFSET))(this, a1);
	}

	::System::Void Method_1_65201BC7200FF657_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1698319E4A867376_METHOD_1_65201BC7200FF657_2_OFFSET))(this, a1, a2, a3);
	}
};
