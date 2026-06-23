#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0EF796FFBE4F6ED8.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_449;
class Class_1_181A04F78EA47987;
class Class_1_82AD18310A9D6C9D;
class Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ConfigUILightParam; }
namespace MoleMole { class MonoBasePerpStage; }
namespace MoleMole { class MonoCurveMoveObject; }
namespace MoleMole { class MonoDestructionObject; }
namespace MoleMole { class MonoEntity; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoInterestPoint; }
namespace MoleMole { class MonoMainCityObject; }
namespace MoleMole { class MonoPartySceneObject; }
namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole { class MonoSimpleRigidbodyObject; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole { class MonoVehicleObject; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::Config { class StageEntry; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_323AB43B5583CAEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE9ED90)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_005F252181D5C1B8_OFFSET UNITYSDK_OFFSET(0x1AEA3090)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_01DA9EE16FA09808_OFFSET UNITYSDK_OFFSET(0x1AEA17D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x1AEA06C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_06ACA01A6726AC56_OFFSET UNITYSDK_OFFSET(0x1AEA14D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_09FF13A616259257_OFFSET UNITYSDK_OFFSET(0x1AEA1970)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_0DE3BA0A26CD13D8_OFFSET UNITYSDK_OFFSET(0x1AEA0A50)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AEA3720)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_1510EAA5118F717B_OFFSET UNITYSDK_OFFSET(0x1AEA13C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_151E08967146F77D_OFFSET UNITYSDK_OFFSET(0x1AEA45F0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_15F882260A7A661D_OFFSET UNITYSDK_OFFSET(0x1AEA2120)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_1678035B60CB6104_OFFSET UNITYSDK_OFFSET(0x1AE9FCD0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_2252B067A517FA90_OFFSET UNITYSDK_OFFSET(0x1AEA1F10)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_239ABA88A32FDDAE_OFFSET UNITYSDK_OFFSET(0x1AEA24A0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1AE9F910)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_29A2930E395410B4_OFFSET UNITYSDK_OFFSET(0x1AE9FB30)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_2CD0A6ACB44751DE_OFFSET UNITYSDK_OFFSET(0x1AE9EF70)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_2F1F47E176AB288A_OFFSET UNITYSDK_OFFSET(0x1AE9EDD0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x1AE9F5C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AE9FFC0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_3E35D1A1C6E5AAC1_OFFSET UNITYSDK_OFFSET(0x1AEA11B0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_3EB5C5E53F66CEB2_OFFSET UNITYSDK_OFFSET(0x1AEA0010)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0x1AEA2E60)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1AEA1C90)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_43E9A417C0921572_OFFSET UNITYSDK_OFFSET(0x1AEA3900)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_44EE598FBF4FE835_OFFSET UNITYSDK_OFFSET(0x1AEA2F00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_4A3D71F1A28A6B42_OFFSET UNITYSDK_OFFSET(0x1AE9FAE0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_502073A99F30AC35_OFFSET UNITYSDK_OFFSET(0x1AEA41E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_675A2C9C24F704F8_OFFSET UNITYSDK_OFFSET(0x1AEA3230)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_6C518583D4FEA614_OFFSET UNITYSDK_OFFSET(0x1AEA1D80)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7320C03AFC013C1E_OFFSET UNITYSDK_OFFSET(0x1AEA47D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7809FA5C89001662_OFFSET UNITYSDK_OFFSET(0x1AEA27C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7A5F71F00388F392_OFFSET UNITYSDK_OFFSET(0x1AE9F780)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7AD62FCE5ED6B006_OFFSET UNITYSDK_OFFSET(0x1AEA2130)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1AEA4200)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_82C1197F460BA792_OFFSET UNITYSDK_OFFSET(0x1AEA4040)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_89A87B2907E79C68_OFFSET UNITYSDK_OFFSET(0x1AEA3750)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_905302C15794E3CD_OFFSET UNITYSDK_OFFSET(0x1AEA3730)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_960B81EFF64E06C8_OFFSET UNITYSDK_OFFSET(0x1AEA3580)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9789C70DDD6E4966_OFFSET UNITYSDK_OFFSET(0x1AEA33D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x1AEA29A0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9BAC563506D5FFB4_OFFSET UNITYSDK_OFFSET(0x1AEA33E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9C89E670A8DEFF07_OFFSET UNITYSDK_OFFSET(0x1AEA4510)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A7B40839E9FA1ED1_OFFSET UNITYSDK_OFFSET(0x1AEA1B00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x1AEA1670)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x1AEA14E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x1AEA3740)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x1AE9FD30)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C2182B4A4FE6466F_OFFSET UNITYSDK_OFFSET(0x1AEA2640)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C328DFF182A86FAC_OFFSET UNITYSDK_OFFSET(0x1AEA2310)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C7F8BCB95B0B87EE_OFFSET UNITYSDK_OFFSET(0x1AE9FFB0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA015CDD14F99316_OFFSET UNITYSDK_OFFSET(0x1AEA4210)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1AE9ED50)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1AEA20D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AE9ED10)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_DF8DA5BF16771AC1_OFFSET UNITYSDK_OFFSET(0x1AE9FE20)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E08517A05070581B_OFFSET UNITYSDK_OFFSET(0x1AEA3910)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x1AEA2CD0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E988D7238099F972_OFFSET UNITYSDK_OFFSET(0x1AEA04D0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_ECB73F4FFAAF20C8_OFFSET UNITYSDK_OFFSET(0x1AE9FEC0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F626245813283B0B_OFFSET UNITYSDK_OFFSET(0x1AEA41F0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F77A086F4C058F28_OFFSET UNITYSDK_OFFSET(0x1AEA1340)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F7D9D27F7F7223BA_OFFSET UNITYSDK_OFFSET(0x1AEA2630)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_FA7A15AFF7CB8BBE_OFFSET UNITYSDK_OFFSET(0x1AEA2B20)
#define CLASS_2_323AB43B5583CAEB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1AE9ECD0)
#define CLASS_2_323AB43B5583CAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9EC00)

inline static constexpr unsigned int Class_2_323AB43B5583CAEB_TypeDefinitionIndex = 50415;

class Class_2_323AB43B5583CAEB : public ::Foundation::SingletonDisposable_1<::Class_2_323AB43B5583CAEB*>
{
public:
	::MoleMole::MonoBasePerpStage* Field_2_4; // 0x10
	::UnityEngine::Light* Field_2_7; // 0x18
	::MoleMole::Config::SceneConfigRuntimeData* Field_2_13; // 0x20
	::MoleMole::ConfigUILightParam* Field_2_14; // 0x28
	::MoleMole::Battle::Entity* Field_2_6; // 0x30
	::UnityEngine::Rendering::Volume* Field_2_15; // 0x38
	::UnityEngine::Transform* Field_2_9; // 0x40
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_2_11; // 0x48
	::MoleMole::MonoStageEnv* Field_2_5; // 0x50
	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Field_2_12; // 0x58
	::UnityEngine::Light* Field_2_8; // 0x60
	::System::String* Field_2_2; // 0x68
	::MoleMole::Config::StageEntry* Field_2_3; // 0x70
	::System::String* Field_2_0; // 0x78
	::System::Action* Field_2_10; // 0x80
	::Enum_3_0EF796FFBE4F6ED8 Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoEntity*>* Method_2_2F1F47E176AB288A()
	{
		return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_2F1F47E176AB288A_OFFSET))(this);
	}

	::System::Void Method_2_2CD0A6ACB44751DE(::MoleMole::ConfigUILightParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILightParam*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_2CD0A6ACB44751DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_7A5F71F00388F392(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7A5F71F00388F392_OFFSET))(this, a1);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_2_4A3D71F1A28A6B42(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_4A3D71F1A28A6B42_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoDestructionObject*>* Method_2_29A2930E395410B4()
	{
		return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_29A2930E395410B4_OFFSET))(this);
	}

	::System::Void Method_2_1678035B60CB6104(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_1678035B60CB6104_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF8DA5BF16771AC1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_DF8DA5BF16771AC1_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::StageEntry* Method_2_C7F8BCB95B0B87EE()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C7F8BCB95B0B87EE_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_3EB5C5E53F66CEB2(::MoleMole::Config::StageEntry* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_3EB5C5E53F66CEB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0DE3BA0A26CD13D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_0DE3BA0A26CD13D8_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_3E35D1A1C6E5AAC1(::System::String* a1)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_3E35D1A1C6E5AAC1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* Method_2_F77A086F4C058F28()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F77A086F4C058F28_OFFSET))(this);
	}

	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Method_2_1510EAA5118F717B()
	{
		return ((::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_1510EAA5118F717B_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_06ACA01A6726AC56()
	{
		return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_06ACA01A6726AC56_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Void Method_2_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* Method_2_01DA9EE16FA09808()
	{
		return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_01DA9EE16FA09808_OFFSET))(this);
	}

	::MoleMole::MonoWayPath* Method_2_09FF13A616259257(::System::String* a1)
	{
		return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_09FF13A616259257_OFFSET))(this, a1);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_2_A7B40839E9FA1ED1(::System::String* a1)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A7B40839E9FA1ED1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::MoleMole::Battle::ColliderEventDispatcher* Method_2_6C518583D4FEA614(::System::String* a1)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_6C518583D4FEA614_OFFSET))(this, a1);
	}

	::MoleMole::SceneMark::SceneMarkNode* Method_2_2252B067A517FA90(::System::String* a1)
	{
		return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_2252B067A517FA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_E988D7238099F972(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E988D7238099F972_OFFSET))(this, a1);
	}

	::System::Void Method_2_ECB73F4FFAAF20C8(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_ECB73F4FFAAF20C8_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::MonoBasePerpStage* Method_2_15F882260A7A661D()
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_15F882260A7A661D_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoPartySceneObject*>* Method_2_7AD62FCE5ED6B006()
	{
		return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7AD62FCE5ED6B006_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_449* Method_2_C328DFF182A86FAC(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_449*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C328DFF182A86FAC_OFFSET))(this, a1);
	}

	::MoleMole::MonoSpawnPoint* Method_2_239ABA88A32FDDAE(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_239ABA88A32FDDAE_OFFSET))(this, a1);
	}

	::MoleMole::MonoStageEnv* Method_2_F7D9D27F7F7223BA()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F7D9D27F7F7223BA_OFFSET))(this);
	}

	::System::Void Method_2_C2182B4A4FE6466F(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C2182B4A4FE6466F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7809FA5C89001662(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7809FA5C89001662_OFFSET))(this, a1, a2);
	}

	::MoleMole::MonoEntityModelModifier* Method_2_FA7A15AFF7CB8BBE(::System::String* a1)
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_FA7A15AFF7CB8BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::Class_1_181A04F78EA47987* Method_2_995B4AEB9D9468D5()
	{
		return ((::Class_1_181A04F78EA47987*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_995B4AEB9D9468D5_OFFSET))(this);
	}

	::System::Boolean Method_2_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_42DB5D19EEAC74D5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* Method_2_44EE598FBF4FE835(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_44EE598FBF4FE835_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoInterestPoint*>* Method_2_005F252181D5C1B8()
	{
		return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_005F252181D5C1B8_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoVehicleObject*>* Method_2_675A2C9C24F704F8()
	{
		return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_675A2C9C24F704F8_OFFSET))(this);
	}

	::MoleMole::Config::SceneConfigRuntimeData* Method_2_9789C70DDD6E4966()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9789C70DDD6E4966_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* Method_2_9BAC563506D5FFB4()
	{
		return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9BAC563506D5FFB4_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* Method_2_960B81EFF64E06C8()
	{
		return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_960B81EFF64E06C8_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_905302C15794E3CD(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_905302C15794E3CD_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	::MoleMole::MonoSpawnMonsterConfig* Method_2_89A87B2907E79C68(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_89A87B2907E79C68_OFFSET))(this, a1);
	}

	::System::Void Method_2_43E9A417C0921572(::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_43E9A417C0921572_OFFSET))(this, a1);
	}

	::System::Void Method_2_E08517A05070581B(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E08517A05070581B_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::MoleMole::MonoMainCityObject*>* Method_2_82C1197F460BA792()
	{
		return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_82C1197F460BA792_OFFSET))(this);
	}

	::System::Void Method_2_502073A99F30AC35(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_502073A99F30AC35_OFFSET))(this, a1);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Method_2_F626245813283B0B()
	{
		return ((::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F626245813283B0B_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::MoleMole::MonoSpawnPoint* Method_2_CA015CDD14F99316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA015CDD14F99316_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9C89E670A8DEFF07(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9C89E670A8DEFF07_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_151E08967146F77D(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_151E08967146F77D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_82AD18310A9D6C9D* Method_2_7320C03AFC013C1E(::System::String* a1)
	{
		return ((::Class_1_82AD18310A9D6C9D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7320C03AFC013C1E_OFFSET))(this, a1);
	}
};
