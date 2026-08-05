#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9.h"
#include "unitysdk/Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_6804722D351945F3.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_171F33A8EC859ED6;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace MoleMole::LevelPerform { class LevelSettlementConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_02B7A9B7DE670ADB_OFFSET UNITYSDK_OFFSET(0x113C0E00)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x113C0440)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x113C0380)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x113BFA90)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_4BF20B62BF3CBAE1_OFFSET UNITYSDK_OFFSET(0x113C0D70)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_52AEC75231E62EB2_OFFSET UNITYSDK_OFFSET(0x113C0B80)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_53FF1E4A93E77E17_OFFSET UNITYSDK_OFFSET(0x113C20B0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_1_OFFSET UNITYSDK_OFFSET(0x113C09D0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_2_OFFSET UNITYSDK_OFFSET(0x113C1FB0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_3_OFFSET UNITYSDK_OFFSET(0x113C2000)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0x113C08C0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_766F059266EB8418_OFFSET UNITYSDK_OFFSET(0x113C1E30)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_76EBAC5235CCA8DB_OFFSET UNITYSDK_OFFSET(0x113C33F0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_82EBC0EFE501054A_OFFSET UNITYSDK_OFFSET(0x113C32F0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_897CA2981B27803E_OFFSET UNITYSDK_OFFSET(0x113C17F0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_8ACFF6FF08C733FF_OFFSET UNITYSDK_OFFSET(0x113C0750)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_A2D4E221B2E8E362_OFFSET UNITYSDK_OFFSET(0x113BFCB0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0x113C0910)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_B870FBCE374AEC6C_OFFSET UNITYSDK_OFFSET(0x113C2050)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_D0CC456995EECFBE_OFFSET UNITYSDK_OFFSET(0x113C0A20)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x113C1D20)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_EF3D19C357AD772F_OFFSET UNITYSDK_OFFSET(0x113C1DA0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_F418ACB112BDF0C2_OFFSET UNITYSDK_OFFSET(0x113C2330)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x113C03F0)
#define CLASS_1_522B0BB3ABD42EF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x113C0610)
#define CLASS_1_522B0BB3ABD42EF0__CTOR_OFFSET UNITYSDK_OFFSET(0x113C0590)

inline static constexpr unsigned int Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex = 67978;

class Class_1_522B0BB3ABD42EF0 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_1_12()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF410);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_19()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF418);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_15()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF420);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_13()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF428);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_18()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF430);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_14()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xF438);
	}
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9>* Field_1_11; // 0x10
	::System::Collections::Generic::List_1<::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9>* Field_1_9; // 0x18
	::Nap::NapECS::EcsWorld* Field_1_2; // 0x20
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x28
	::MoleMole::LevelPerform::LevelSettlementConfig* Field_1_4; // 0x30
	::System::Single Field_1_6; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::System::Boolean Field_1_8; // 0x40
	::System::Boolean Field_1_7; // 0x41
	::System::Int32 Field_1_10; // 0x44
	::System::Nullable_1<::System::UInt32> Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_8ACFF6FF08C733FF(::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_8ACFF6FF08C733FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_OFFSET))(this);
	}

	::Enum_3_6804722D351945F3 Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_6804722D351945F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_AA24ACE6DC9948B7_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_1_OFFSET))(this);
	}

	static ::System::Void Method_1_D0CC456995EECFBE(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_D0CC456995EECFBE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_52AEC75231E62EB2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_52AEC75231E62EB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4BF20B62BF3CBAE1(::Class_2_171F33A8EC859ED6* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_4BF20B62BF3CBAE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02B7A9B7DE670ADB(::Class_2_171F33A8EC859ED6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_02B7A9B7DE670ADB_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_897CA2981B27803E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_897CA2981B27803E_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_EF3D19C357AD772F(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_EF3D19C357AD772F_OFFSET))(this, a1);
	}

	static ::PipelineCamera::WorldScreenCameraData Method_1_766F059266EB8418(::PipelineCamera::FinalCameraData& a1, ::UnityEngine::Vector3& a2, ::PipelineCamera::WorldScreenCameraData& a3)
	{
		return ((::PipelineCamera::WorldScreenCameraData(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_766F059266EB8418_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_70C856AE64234BE0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_2_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_3_OFFSET))(this);
	}

	::System::Void Method_1_B870FBCE374AEC6C(::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_B870FBCE374AEC6C_OFFSET))(this, a1);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_53FF1E4A93E77E17(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_53FF1E4A93E77E17_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_A2D4E221B2E8E362(::Nap::NapECS::EcsWorld*& a1, ::System::UInt32& a2, ::System::Nullable_1<::System::UInt32>& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*&, ::System::UInt32&, ::System::Nullable_1<::System::UInt32>&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_A2D4E221B2E8E362_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677 Method_1_F418ACB112BDF0C2()
	{
		return ((::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_F418ACB112BDF0C2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_82EBC0EFE501054A(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_82EBC0EFE501054A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_76EBAC5235CCA8DB(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_76EBAC5235CCA8DB_OFFSET))(a1, a2);
	}
};
