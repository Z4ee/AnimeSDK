#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F6476F86DD5E333_Enum_3_C780BFBFED223F30_4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_08EFA72FA9DBFD94.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_A40193274BE16FFE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }

#define CLASS_1_0F6476F86DD5E333_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E6A080)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_16A0B7766297F364_OFFSET UNITYSDK_OFFSET(0x11E6A830)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x11E6A010)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_35B36D81C21910C5_OFFSET UNITYSDK_OFFSET(0x11E6C1B0)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_3B38C80C6C64E63E_OFFSET UNITYSDK_OFFSET(0x11E6CE20)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_3F2CF366C9A24A5E_OFFSET UNITYSDK_OFFSET(0x11E6A220)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_44664CCF2776424D_OFFSET UNITYSDK_OFFSET(0x11E6B100)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_79E99465CFEFE253_OFFSET UNITYSDK_OFFSET(0x11E6B4D0)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_9798F25078F003F5_OFFSET UNITYSDK_OFFSET(0x11E6AC10)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_9A10EA0BD10EE5AD_OFFSET UNITYSDK_OFFSET(0x11E6B710)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x11E6C160)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11E6B5E0)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_CEDE067F5AA920F4_OFFSET UNITYSDK_OFFSET(0x11E6CC90)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_D26D36BF546FB283_OFFSET UNITYSDK_OFFSET(0x11E6AE50)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x11E6A5C0)
#define CLASS_1_0F6476F86DD5E333_METHOD_1_F14CD6391FFBDDC1_OFFSET UNITYSDK_OFFSET(0x11E6BDD0)
#define CLASS_1_0F6476F86DD5E333__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E6A210)
#define CLASS_1_0F6476F86DD5E333__CTOR_OFFSET UNITYSDK_OFFSET(0x11E69DA0)

inline static constexpr unsigned int Class_1_0F6476F86DD5E333_TypeDefinitionIndex = 55751;

class Class_1_0F6476F86DD5E333 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6476F86DD5E333_TypeDefinitionIndex)->GetStaticField(0x10B90);
	}
	// static const ::Enum_3_4A097505A5A1A069 Field_1_2; // 0x0
	::MoleMole::Cameras::AvatarLayoutCameraConfig* Field_1_6; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_0F6476F86DD5E333_Enum_3_C780BFBFED223F30_4>* Field_1_3; // 0x18
	::PipelineCamera::Blender::DefaultBlender* Field_1_12; // 0x20
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x28
	::System::String* Field_1_11; // 0x30
	::Struct_2_A40193274BE16FFE Field_1_7; // 0x38
	::System::Single Field_1_10; // 0xA0
	::System::UInt32 Field_1_0; // 0xA4
	::Enum_3_08EFA72FA9DBFD94 Field_1_8; // 0xA8
	::System::Boolean Field_1_9; // 0xAC
	::System::Boolean Field_1_4; // 0xAD

	::System::Void _ctor(::MoleMole::Cameras::AvatarLayoutCameraConfig*& a1, ::Struct_2_A40193274BE16FFE& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::Struct_2_A40193274BE16FFE&))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_3F2CF366C9A24A5E()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_3F2CF366C9A24A5E_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9798F25078F003F5(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_9798F25078F003F5_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_D26D36BF546FB283()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_D26D36BF546FB283_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_79E99465CFEFE253()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_79E99465CFEFE253_OFFSET))(this);
	}

	::System::Void Method_1_44664CCF2776424D(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_44664CCF2776424D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_16A0B7766297F364(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_16A0B7766297F364_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_F14CD6391FFBDDC1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_F14CD6391FFBDDC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_08EFA72FA9DBFD94 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_08EFA72FA9DBFD94))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_9A10EA0BD10EE5AD(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_9A10EA0BD10EE5AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_35B36D81C21910C5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_35B36D81C21910C5_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_CEDE067F5AA920F4(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_CEDE067F5AA920F4_OFFSET))(this, a1);
	}

	static ::Class_1_0F6476F86DD5E333* Method_1_3B38C80C6C64E63E(::MoleMole::Cameras::AvatarLayoutCameraConfig*& a1, ::Struct_2_A40193274BE16FFE& a2)
	{
		return ((::Class_1_0F6476F86DD5E333*(*)(::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::Struct_2_A40193274BE16FFE&))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_METHOD_1_3B38C80C6C64E63E_OFFSET))(a1, a2);
	}
};
