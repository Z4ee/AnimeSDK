#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0E2DEFE2B11A9C71_Enum_3_C780BFBFED223F30_4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_08EFA72FA9DBFD94.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_A40193274BE16FFE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }

#define CLASS_1_0E2DEFE2B11A9C71_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D11620)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x10D115B0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_3B38C80C6C64E63E_OFFSET UNITYSDK_OFFSET(0x10D11A10)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_3F2CF366C9A24A5E_OFFSET UNITYSDK_OFFSET(0x10D149F0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_44664CCF2776424D_OFFSET UNITYSDK_OFFSET(0x10D12BA0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_6E9E7A11800F4FBC_OFFSET UNITYSDK_OFFSET(0x10D13B80)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_79E99465CFEFE253_OFFSET UNITYSDK_OFFSET(0x10D14680)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x10D11AD0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_9798F25078F003F5_OFFSET UNITYSDK_OFFSET(0x10D117C0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x10D128A0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_CEDE067F5AA920F4_OFFSET UNITYSDK_OFFSET(0x10D144F0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0x10D128F0)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x10D14780)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_EEB1B69326238524_OFFSET UNITYSDK_OFFSET(0x10D12F70)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_F14CD6391FFBDDC1_OFFSET UNITYSDK_OFFSET(0x10D14160)
#define CLASS_1_0E2DEFE2B11A9C71_METHOD_1_FDE117F4D46C93D8_OFFSET UNITYSDK_OFFSET(0x10D11DB0)
#define CLASS_1_0E2DEFE2B11A9C71__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D117B0)
#define CLASS_1_0E2DEFE2B11A9C71__CTOR_OFFSET UNITYSDK_OFFSET(0x10D11340)

inline static constexpr unsigned int Class_1_0E2DEFE2B11A9C71_TypeDefinitionIndex = 73238;

class Class_1_0E2DEFE2B11A9C71 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E2DEFE2B11A9C71_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}
	// static const ::Enum_3_24F60EA0D4DCCDF0 Field_1_0; // 0x0
	::System::String* Field_1_15; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_0E2DEFE2B11A9C71_Enum_3_C780BFBFED223F30_4>* Field_1_7; // 0x18
	::PipelineCamera::Blender::DefaultBlender* Field_1_14; // 0x20
	::Struct_2_A40193274BE16FFE Field_1_11; // 0x28
	::MoleMole::Cameras::AvatarLayoutCameraConfig* Field_1_4; // 0x90
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x98
	::Enum_3_08EFA72FA9DBFD94 Field_1_10; // 0xA0
	::System::Single Field_1_19; // 0xA4
	::System::UInt32 Field_1_2; // 0xA8
	::UnityEngine::Vector3 Field_1_12; // 0xAC
	::UnityEngine::Vector3 Field_1_13; // 0xB8
	::System::Single Field_1_8; // 0xC4
	::System::Boolean Field_1_9; // 0xC8
	::System::Boolean Field_1_6; // 0xC9

	::System::Void _ctor(::MoleMole::Cameras::AvatarLayoutCameraConfig*& a1, ::Struct_2_A40193274BE16FFE& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::Struct_2_A40193274BE16FFE&))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9798F25078F003F5(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_9798F25078F003F5_OFFSET))(this, a1, a2);
	}

	static ::Class_1_0E2DEFE2B11A9C71* Method_1_3B38C80C6C64E63E(::MoleMole::Cameras::AvatarLayoutCameraConfig*& a1, ::Struct_2_A40193274BE16FFE& a2)
	{
		return ((::Class_1_0E2DEFE2B11A9C71*(*)(::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::Struct_2_A40193274BE16FFE&))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_3B38C80C6C64E63E_OFFSET))(a1, a2);
	}

	::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_1_FDE117F4D46C93D8(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_FDE117F4D46C93D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_08EFA72FA9DBFD94 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_08EFA72FA9DBFD94))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::System::Void Method_1_EEB1B69326238524(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_EEB1B69326238524_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_6E9E7A11800F4FBC(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_6E9E7A11800F4FBC_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_F14CD6391FFBDDC1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_F14CD6391FFBDDC1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_CEDE067F5AA920F4(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_CEDE067F5AA920F4_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_79E99465CFEFE253()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_79E99465CFEFE253_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_44664CCF2776424D(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_44664CCF2776424D_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_3F2CF366C9A24A5E()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_METHOD_1_3F2CF366C9A24A5E_OFFSET))(this);
	}
};
