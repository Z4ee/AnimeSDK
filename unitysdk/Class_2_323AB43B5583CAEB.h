#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C1C5EA29EA03C80E.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_303;
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

#define CLASS_2_323AB43B5583CAEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18102D80)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_005F252181D5C1B8_OFFSET UNITYSDK_OFFSET(0x18103700)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_01DA9EE16FA09808_OFFSET UNITYSDK_OFFSET(0x18104FB0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x18104230)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_06ACA01A6726AC56_OFFSET UNITYSDK_OFFSET(0x18105C10)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_09FF13A616259257_OFFSET UNITYSDK_OFFSET(0x18106870)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_0DE3BA0A26CD13D8_OFFSET UNITYSDK_OFFSET(0x18105F40)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18104220)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_1510EAA5118F717B_OFFSET UNITYSDK_OFFSET(0x18103CE0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_151E08967146F77D_OFFSET UNITYSDK_OFFSET(0x18102EA0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_15F882260A7A661D_OFFSET UNITYSDK_OFFSET(0x181038A0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_1678035B60CB6104_OFFSET UNITYSDK_OFFSET(0x18105150)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_2252B067A517FA90_OFFSET UNITYSDK_OFFSET(0x181066B0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_239ABA88A32FDDAE_OFFSET UNITYSDK_OFFSET(0x18104DC0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_29A2930E395410B4_OFFSET UNITYSDK_OFFSET(0x18103210)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_2F1F47E176AB288A_OFFSET UNITYSDK_OFFSET(0x181054E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18107D40)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_3E2F5A807BAE78D5_OFFSET UNITYSDK_OFFSET(0x18103FA0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_3E35D1A1C6E5AAC1_OFFSET UNITYSDK_OFFSET(0x18106ED0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_3EB5C5E53F66CEB2_OFFSET UNITYSDK_OFFSET(0x181045C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0x18107F70)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x181071F0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_43E9A417C0921572_OFFSET UNITYSDK_OFFSET(0x18104BF0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_44EE598FBF4FE835_OFFSET UNITYSDK_OFFSET(0x181051C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_4A3D71F1A28A6B42_OFFSET UNITYSDK_OFFSET(0x18104F60)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x18104C00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_502073A99F30AC35_OFFSET UNITYSDK_OFFSET(0x18107F60)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x18107D90)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_5FC948AB6D32C66C_OFFSET UNITYSDK_OFFSET(0x181058A0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_675A2C9C24F704F8_OFFSET UNITYSDK_OFFSET(0x18105680)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7320C03AFC013C1E_OFFSET UNITYSDK_OFFSET(0x18107060)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7809FA5C89001662_OFFSET UNITYSDK_OFFSET(0x18107B50)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7AD62FCE5ED6B006_OFFSET UNITYSDK_OFFSET(0x18105A30)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x18108740)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_82C1197F460BA792_OFFSET UNITYSDK_OFFSET(0x18103E00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_89A87B2907E79C68_OFFSET UNITYSDK_OFFSET(0x18106D20)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_905302C15794E3CD_OFFSET UNITYSDK_OFFSET(0x18108750)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_960B81EFF64E06C8_OFFSET UNITYSDK_OFFSET(0x18107770)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9789C70DDD6E4966_OFFSET UNITYSDK_OFFSET(0x181038B0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x18105DC0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9BAC563506D5FFB4_OFFSET UNITYSDK_OFFSET(0x18103560)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9C69B94244093FE8_OFFSET UNITYSDK_OFFSET(0x181038C0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_9C89E670A8DEFF07_OFFSET UNITYSDK_OFFSET(0x18102DC0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A7B40839E9FA1ED1_OFFSET UNITYSDK_OFFSET(0x181075E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x18104A80)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x18105C30)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x18105350)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x18104130)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C2182B4A4FE6466F_OFFSET UNITYSDK_OFFSET(0x18105360)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C328DFF182A86FAC_OFFSET UNITYSDK_OFFSET(0x18106A00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_C7F8BCB95B0B87EE_OFFSET UNITYSDK_OFFSET(0x18105C20)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA015CDD14F99316_OFFSET UNITYSDK_OFFSET(0x181072E0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18102D40)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18107910)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18102D00)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_DF8DA5BF16771AC1_OFFSET UNITYSDK_OFFSET(0x18103080)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E08517A05070581B_OFFSET UNITYSDK_OFFSET(0x18108010)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x18106B90)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_E988D7238099F972_OFFSET UNITYSDK_OFFSET(0x18107960)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_ECB73F4FFAAF20C8_OFFSET UNITYSDK_OFFSET(0x18103120)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F626245813283B0B_OFFSET UNITYSDK_OFFSET(0x18104F50)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F77A086F4C058F28_OFFSET UNITYSDK_OFFSET(0x18105820)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_F7D9D27F7F7223BA_OFFSET UNITYSDK_OFFSET(0x18104BE0)
#define CLASS_2_323AB43B5583CAEB_METHOD_2_FA7A15AFF7CB8BBE_OFFSET UNITYSDK_OFFSET(0x181033B0)
#define CLASS_2_323AB43B5583CAEB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18102CC0)
#define CLASS_2_323AB43B5583CAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x18102BF0)

inline static constexpr unsigned int Class_2_323AB43B5583CAEB_TypeDefinitionIndex = 50331;

class Class_2_323AB43B5583CAEB : public ::Foundation::SingletonDisposable_1<::Class_2_323AB43B5583CAEB*>
{
public:
	::UnityEngine::Transform* Field_2_9; // 0x10
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_2_15; // 0x18
	::MoleMole::Config::StageEntry* Field_2_7; // 0x20
	::System::String* Field_2_0; // 0x28
	::MoleMole::MonoStageEnv* Field_2_5; // 0x30
	::UnityEngine::Light* Field_2_10; // 0x38
	::MoleMole::ConfigUILightParam* Field_2_12; // 0x40
	::UnityEngine::Rendering::Volume* Field_2_19; // 0x48
	::MoleMole::Battle::Entity* Field_2_4; // 0x50
	::System::Action* Field_2_8; // 0x58
	::System::String* Field_2_2; // 0x60
	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Field_2_14; // 0x68
	::UnityEngine::Light* Field_2_11; // 0x70
	::MoleMole::MonoBasePerpStage* Field_2_6; // 0x78
	::MoleMole::Config::SceneConfigRuntimeData* Field_2_13; // 0x80
	::Enum_3_C1C5EA29EA03C80E Field_2_1; // 0x88

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

	::System::Boolean Method_2_9C89E670A8DEFF07(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9C89E670A8DEFF07_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_151E08967146F77D(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_151E08967146F77D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DF8DA5BF16771AC1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_DF8DA5BF16771AC1_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::MoleMole::MonoDestructionObject*>* Method_2_29A2930E395410B4()
	{
		return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_29A2930E395410B4_OFFSET))(this);
	}

	::MoleMole::MonoEntityModelModifier* Method_2_FA7A15AFF7CB8BBE(::System::String* a1)
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_FA7A15AFF7CB8BBE_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* Method_2_9BAC563506D5FFB4()
	{
		return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9BAC563506D5FFB4_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoInterestPoint*>* Method_2_005F252181D5C1B8()
	{
		return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_005F252181D5C1B8_OFFSET))(this);
	}

	::MoleMole::MonoBasePerpStage* Method_2_15F882260A7A661D()
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_15F882260A7A661D_OFFSET))(this);
	}

	::MoleMole::Config::SceneConfigRuntimeData* Method_2_9789C70DDD6E4966()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9789C70DDD6E4966_OFFSET))(this);
	}

	::System::Void Method_2_9C69B94244093FE8(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_9C69B94244093FE8_OFFSET))(this, a1, a2);
	}

	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Method_2_1510EAA5118F717B()
	{
		return ((::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_1510EAA5118F717B_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoMainCityObject*>* Method_2_82C1197F460BA792()
	{
		return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_82C1197F460BA792_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_3E2F5A807BAE78D5(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_3E2F5A807BAE78D5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_2_ECB73F4FFAAF20C8(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_ECB73F4FFAAF20C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::MoleMole::MonoStageEnv* Method_2_F7D9D27F7F7223BA()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F7D9D27F7F7223BA_OFFSET))(this);
	}

	::System::Void Method_2_43E9A417C0921572(::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_43E9A417C0921572_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::MoleMole::MonoSpawnPoint* Method_2_239ABA88A32FDDAE(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_239ABA88A32FDDAE_OFFSET))(this, a1);
	}

	::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5* Method_2_F626245813283B0B()
	{
		return ((::Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F626245813283B0B_OFFSET))(this);
	}

	::System::Void Method_2_4A3D71F1A28A6B42(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_4A3D71F1A28A6B42_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* Method_2_01DA9EE16FA09808()
	{
		return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_01DA9EE16FA09808_OFFSET))(this);
	}

	::System::Void Method_2_1678035B60CB6104(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_1678035B60CB6104_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* Method_2_44EE598FBF4FE835(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_44EE598FBF4FE835_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_2_C2182B4A4FE6466F(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C2182B4A4FE6466F_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoEntity*>* Method_2_2F1F47E176AB288A()
	{
		return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_2F1F47E176AB288A_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoVehicleObject*>* Method_2_675A2C9C24F704F8()
	{
		return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_675A2C9C24F704F8_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* Method_2_F77A086F4C058F28()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_F77A086F4C058F28_OFFSET))(this);
	}

	::MoleMole::Battle::ColliderEventDispatcher* Method_2_5FC948AB6D32C66C(::System::String* a1)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_5FC948AB6D32C66C_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoPartySceneObject*>* Method_2_7AD62FCE5ED6B006()
	{
		return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7AD62FCE5ED6B006_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_06ACA01A6726AC56()
	{
		return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_06ACA01A6726AC56_OFFSET))(this);
	}

	::MoleMole::Config::StageEntry* Method_2_C7F8BCB95B0B87EE()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C7F8BCB95B0B87EE_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::Class_1_181A04F78EA47987* Method_2_995B4AEB9D9468D5()
	{
		return ((::Class_1_181A04F78EA47987*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_995B4AEB9D9468D5_OFFSET))(this);
	}

	::System::Void Method_2_0DE3BA0A26CD13D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_0DE3BA0A26CD13D8_OFFSET))(this);
	}

	::MoleMole::SceneMark::SceneMarkNode* Method_2_2252B067A517FA90(::System::String* a1)
	{
		return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_2252B067A517FA90_OFFSET))(this, a1);
	}

	::MoleMole::MonoWayPath* Method_2_09FF13A616259257(::System::String* a1)
	{
		return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_09FF13A616259257_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_303* Method_2_C328DFF182A86FAC(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_303*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_C328DFF182A86FAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::MoleMole::MonoSpawnMonsterConfig* Method_2_89A87B2907E79C68(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_89A87B2907E79C68_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_3E35D1A1C6E5AAC1(::System::String* a1)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_3E35D1A1C6E5AAC1_OFFSET))(this, a1);
	}

	::Class_1_82AD18310A9D6C9D* Method_2_7320C03AFC013C1E(::System::String* a1)
	{
		return ((::Class_1_82AD18310A9D6C9D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7320C03AFC013C1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::MoleMole::MonoSpawnPoint* Method_2_CA015CDD14F99316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA015CDD14F99316_OFFSET))(this, a1, a2);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_2_A7B40839E9FA1ED1(::System::String* a1)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_A7B40839E9FA1ED1_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* Method_2_960B81EFF64E06C8()
	{
		return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_960B81EFF64E06C8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_E988D7238099F972(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E988D7238099F972_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7809FA5C89001662(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7809FA5C89001662_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_3EB5C5E53F66CEB2(::MoleMole::Config::StageEntry* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_3EB5C5E53F66CEB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_502073A99F30AC35(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_502073A99F30AC35_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_42DB5D19EEAC74D5_OFFSET))(this);
	}

	::System::Void Method_2_E08517A05070581B(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_E08517A05070581B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_905302C15794E3CD(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_METHOD_2_905302C15794E3CD_OFFSET))(this, a1);
	}
};
