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

#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xFB23B80)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xFB23AB0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0xFB262E0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0xFB231D0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_3DCF176932220B59_OFFSET UNITYSDK_OFFSET(0xFB23400)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_4BF20B62BF3CBAE1_OFFSET UNITYSDK_OFFSET(0xFB248D0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_52AEC75231E62EB2_OFFSET UNITYSDK_OFFSET(0xFB24B10)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_53FF1E4A93E77E17_OFFSET UNITYSDK_OFFSET(0xFB25D40)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_7030ACD1BC04F0FB_OFFSET UNITYSDK_OFFSET(0xFB249B0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_1_OFFSET UNITYSDK_OFFSET(0xFB24880)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_2_OFFSET UNITYSDK_OFFSET(0xFB24960)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_3_OFFSET UNITYSDK_OFFSET(0xFB26150)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0xFB24190)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_766F059266EB8418_OFFSET UNITYSDK_OFFSET(0xFB241E0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_82EBC0EFE501054A_OFFSET UNITYSDK_OFFSET(0xFB25FC0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_897CA2981B27803E_OFFSET UNITYSDK_OFFSET(0xFB24360)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_8ACFF6FF08C733FF_OFFSET UNITYSDK_OFFSET(0xFB24020)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0xFB26220)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_AD7F47495BB63A24_OFFSET UNITYSDK_OFFSET(0xFB23E90)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_B3E26B14FD2AD411_OFFSET UNITYSDK_OFFSET(0xFB24D00)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_B870FBCE374AEC6C_OFFSET UNITYSDK_OFFSET(0xFB23FC0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xFB261A0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_EF3D19C357AD772F_OFFSET UNITYSDK_OFFSET(0xFB260C0)
#define CLASS_1_522B0BB3ABD42EF0_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xFB23B30)
#define CLASS_1_522B0BB3ABD42EF0__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB23D50)
#define CLASS_1_522B0BB3ABD42EF0__CTOR_OFFSET UNITYSDK_OFFSET(0xFB23CD0)

inline static constexpr unsigned int Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex = 41927;

class Class_1_522B0BB3ABD42EF0 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_1_11()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE650);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_16()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE658);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_14()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE660);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_12()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE668);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_15()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE670);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_13()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0_TypeDefinitionIndex)->GetStaticField(0xE678);
	}
	::MoleMole::LevelPerform::LevelSettlementConfig* Field_1_6; // 0x10
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x18
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9>* Field_1_7; // 0x20
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9>* Field_1_9; // 0x30
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x38
	::System::UInt32 Field_1_1; // 0x40
	::System::Single Field_1_4; // 0x44
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_10; // 0x49
	::System::Int32 Field_1_8; // 0x4C

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

	static ::System::Void Method_1_AD7F47495BB63A24(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_AD7F47495BB63A24_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B870FBCE374AEC6C(::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_522B0BB3ABD42EF0_Enum_3_25EB483A5873DAA9))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_B870FBCE374AEC6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8ACFF6FF08C733FF(::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_8ACFF6FF08C733FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_OFFSET))(this);
	}

	static ::PipelineCamera::WorldScreenCameraData Method_1_766F059266EB8418(::PipelineCamera::FinalCameraData& a1, ::UnityEngine::Vector3& a2, ::PipelineCamera::WorldScreenCameraData& a3)
	{
		return ((::PipelineCamera::WorldScreenCameraData(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_766F059266EB8418_OFFSET))(a1, a2, a3);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_897CA2981B27803E()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_897CA2981B27803E_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_1_OFFSET))(this);
	}

	::System::Void Method_1_4BF20B62BF3CBAE1(::Class_2_171F33A8EC859ED6* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_4BF20B62BF3CBAE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70C856AE64234BE0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	static ::System::Void Method_1_7030ACD1BC04F0FB(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_7030ACD1BC04F0FB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_52AEC75231E62EB2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_52AEC75231E62EB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677 Method_1_B3E26B14FD2AD411()
	{
		return ((::Class_1_522B0BB3ABD42EF0_Struct_2_486D88986C0FC677(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_B3E26B14FD2AD411_OFFSET))(this);
	}

	static ::System::Boolean Method_1_3DCF176932220B59(::Nap::NapECS::EcsWorld*& a1, ::System::UInt32& a2, ::System::Nullable_1<::System::UInt32>& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*&, ::System::UInt32&, ::System::Nullable_1<::System::UInt32>&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_3DCF176932220B59_OFFSET))(a1, a2, a3, a4);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_53FF1E4A93E77E17(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_53FF1E4A93E77E17_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_82EBC0EFE501054A(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_82EBC0EFE501054A_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_EF3D19C357AD772F(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_EF3D19C357AD772F_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_70C856AE64234BE0_3_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::Enum_3_6804722D351945F3 Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_6804722D351945F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_AA24ACE6DC9948B7_OFFSET))(this);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_171F33A8EC859ED6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}
};
