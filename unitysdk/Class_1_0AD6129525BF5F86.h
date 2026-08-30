#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/RPG/GameCore/ProjectileState.h"
#include "unitysdk/Struct_2_1C6CD3A917B08105.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_417;
class Class_1_1835888C1E19F013;
class Class_1_2B8E0B4950FE44E7;
class Class_1_A2D8E5AB4B623162;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoProjectileEffect; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class ProjectileTemplateConfig; }
namespace RPG::GameCore { class ProjectileTemplateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0AD6129525BF5F86_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBE2180)
#define CLASS_1_0AD6129525BF5F86_GET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xBBE3ED0)
#define CLASS_1_0AD6129525BF5F86_GET_DATAREF_OFFSET UNITYSDK_OFFSET(0xBBE3EB0)
#define CLASS_1_0AD6129525BF5F86_GET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBBE3F70)
#define CLASS_1_0AD6129525BF5F86_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBE4010)
#define CLASS_1_0AD6129525BF5F86_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0xBBE3EF0)
#define CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xBBE3F10)
#define CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xBBE3F30)
#define CLASS_1_0AD6129525BF5F86_GET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xBBE3E90)
#define CLASS_1_0AD6129525BF5F86_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E70)
#define CLASS_1_0AD6129525BF5F86_GET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xBBE3F90)
#define CLASS_1_0AD6129525BF5F86_GET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xBBE3F50)
#define CLASS_1_0AD6129525BF5F86_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBBE3E10)
#define CLASS_1_0AD6129525BF5F86_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E30)
#define CLASS_1_0AD6129525BF5F86_GET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E50)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0xBBE5BC0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0xBBE5770)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_0A26BD5C1AA86FC1_OFFSET UNITYSDK_OFFSET(0xBBE2F90)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0xBBE3D50)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBBE3FB0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xBBE3CC0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_21F6EDFB46EAF49A_OFFSET UNITYSDK_OFFSET(0xBBE1930)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xBBE5B30)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBBE3D00)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBBE53E0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0xBBE2680)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0xBBE2470)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0xBBE24E0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_82D02CA55C2C5E94_OFFSET UNITYSDK_OFFSET(0xBBE2A10)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBBE25F0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBBE2900)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_8AB82AB9C7395DBE_OFFSET UNITYSDK_OFFSET(0xBBE2B40)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBBE1840)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0xBBE54F0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBBE2800)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xBBE22F0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBBE2C50)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_CE1B8140CA2F0094_OFFSET UNITYSDK_OFFSET(0xBBD09F0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_DFEE291D2E3825AE_OFFSET UNITYSDK_OFFSET(0xBBE4030)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_E3AC81DD7CD64AC9_OFFSET UNITYSDK_OFFSET(0xBBE2C90)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_E7B909E841DA8734_OFFSET UNITYSDK_OFFSET(0xBBE49E0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_F3BF7103107A47CD_OFFSET UNITYSDK_OFFSET(0xBBE5820)
#define CLASS_1_0AD6129525BF5F86_SET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xBBE3EE0)
#define CLASS_1_0AD6129525BF5F86_SET_DATAREF_OFFSET UNITYSDK_OFFSET(0xBBE3EC0)
#define CLASS_1_0AD6129525BF5F86_SET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBBE3F80)
#define CLASS_1_0AD6129525BF5F86_SET_ID_OFFSET UNITYSDK_OFFSET(0xBBE4020)
#define CLASS_1_0AD6129525BF5F86_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0xBBE3F00)
#define CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xBBE3F20)
#define CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xBBE3F40)
#define CLASS_1_0AD6129525BF5F86_SET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xBBE3EA0)
#define CLASS_1_0AD6129525BF5F86_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E80)
#define CLASS_1_0AD6129525BF5F86_SET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xBBE3FA0)
#define CLASS_1_0AD6129525BF5F86_SET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xBBE3F60)
#define CLASS_1_0AD6129525BF5F86_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBBE3E20)
#define CLASS_1_0AD6129525BF5F86_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E40)
#define CLASS_1_0AD6129525BF5F86_SET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xBBE3E60)
#define CLASS_1_0AD6129525BF5F86__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBE5DC0)
#define CLASS_1_0AD6129525BF5F86__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE1AA0)
#define CLASS_1_0AD6129525BF5F86___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xBBE5E80)

inline static constexpr unsigned int Class_1_0AD6129525BF5F86_TypeDefinitionIndex = 54967;

class Class_1_0AD6129525BF5F86 : public ::System::Object
{
public:
	static ::System::String** StaticGet_LBGAAPBDIDI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x64780);
	}
	static ::RPG::GameCore::ColliderConfig** StaticGet_IMBCEMCKDGO()
	{
		return (::RPG::GameCore::ColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x64788);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x64790);
	}
	static ::RPG::GameCore::ProjectileTemplateConfig** StaticGet_BGGJAPNALIN()
	{
		return (::RPG::GameCore::ProjectileTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x64798);
	}
	static ::System::Int32* StaticGet_LIPDNJHCKGC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x14850);
	}
	static ::System::Int32* StaticGet_BNGOLNHFADJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x14854);
	}
	::Class_3_98C806684F7CC372_15* _OnProjectileLifetimeFinish_k__BackingField; // 0x10
	::UnityEngine::GameObject* FCKCHPNEEKB; // 0x18
	::System::String* LBGEHJJFKCL; // 0x20
	::UnityEngine::Animator* OELNPDNHMPG; // 0x28
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x30
	::System::String* MGHMMOLGFKL; // 0x38
	::RPG::GameCore::GameEntity* _TargetPosEntity_k__BackingField; // 0x40
	::Class_1_0AD6129525BF5F86* _PreviousProjectile_k__BackingField; // 0x48
	::UnityEngine::Rigidbody* NCLFBGFOJKC; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CJDIGEBAGBO; // 0x58
	::RPG::GameCore::NewProjectileConfig* _DataRef_k__BackingField; // 0x60
	::Class_1_A2D8E5AB4B623162* _OwnerAbilityRef_k__BackingField; // 0x68
	::Class_3_98C806684F7CC372_14* _OnProjectileHit_k__BackingField; // 0x70
	::RPG::Client::MonoProjectileEffect* LLEDDKCJBBM; // 0x78
	::UnityEngine::Transform* MJMHMMFKBCC; // 0x80
	::Class_1_2B8E0B4950FE44E7* _SkillContext_k__BackingField; // 0x88
	::Class_1_1835888C1E19F013* LKNBIAHBIFP; // 0x90
	::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x98
	::RPG::GameCore::ProjectileState _State_k__BackingField; // 0xA0
	::UnityEngine::Vector3 AKOIKFDLNID; // 0xA4
	::System::Boolean FHHPOKGHNBG; // 0xB0
	::System::Boolean _EnsureCallbackOrder_k__BackingField; // 0xB1
	::System::Boolean _IsHit_k__BackingField; // 0xB2
	::System::Boolean NIPHGONDDHC; // 0xB3
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0xB4
	::UnityEngine::Vector3 HFCLFJMMFJK; // 0xC0
	::UnityEngine::Vector3 EGHDMDEJICM; // 0xCC
	::UnityEngine::Vector3 HFOMPEEAPCG; // 0xD8
	::UnityEngine::Vector3 DBGPPLMHKHJ; // 0xE4
	::UnityEngine::Vector3 MHHGMIHOCMJ; // 0xF0
	::UnityEngine::Vector3 IFIEBIEIKIE; // 0xFC
	::RPG::GameCore::ProjectileMoveBehavior _DataBehaviorType_k__BackingField; // 0x108
	::Struct_2_1C6CD3A917B08105 NNGCDEHEDJE; // 0x10C
	::System::Single DNPEHPPLEOA; // 0x114
	::System::Single FPHNBMKFDDN; // 0x118
	::System::Int32 BILLIIBBKPE; // 0x11C
	::UnityEngine::Vector3 KONBAMDOGDH; // 0x120
	::UnityEngine::Vector3 PGJJCGGBCKK; // 0x12C
	::UnityEngine::Vector3 CNCEDLKOHFL; // 0x138
	::System::Int32 _ID_k__BackingField; // 0x144
	::System::Single INIEIBBFCIM; // 0x148

	::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::Class_1_A2D8E5AB4B623162* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::Class_3_98C806684F7CC372_14* a5, ::Class_1_2B8E0B4950FE44E7* a6, ::Class_3_98C806684F7CC372_15* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::Class_1_A2D8E5AB4B623162*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::RPG::GameCore::ProjectileTemplateData* Method_1_21F6EDFB46EAF49A(::System::String* a1)
	{
		return ((::RPG::GameCore::ProjectileTemplateData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_21F6EDFB46EAF49A_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_82D02CA55C2C5E94(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_82D02CA55C2C5E94_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AB82AB9C7395DBE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_8AB82AB9C7395DBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_E3AC81DD7CD64AC9(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_E3AC81DD7CD64AC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CE1B8140CA2F0094(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_CE1B8140CA2F0094_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0A26BD5C1AA86FC1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Collider*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Collider*&))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_0A26BD5C1AA86FC1_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_417* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_417*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_1AD51778485AD495_OFFSET))(this, a1);
	}

	::RPG::GameCore::ProjectileState get_State()
	{
		return ((::RPG::GameCore::ProjectileState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::GameCore::ProjectileState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileState))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_STATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_TargetEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_TARGETENTITY_OFFSET))(this);
	}

	::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_TARGETENTITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_TargetPosEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_TARGETPOSENTITY_OFFSET))(this);
	}

	::System::Void set_TargetPosEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_TARGETPOSENTITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_1_A2D8E5AB4B623162* get_OwnerAbilityRef()
	{
		return ((::Class_1_A2D8E5AB4B623162*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_OWNERABILITYREF_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityRef(::Class_1_A2D8E5AB4B623162* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_OWNERABILITYREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::NewProjectileConfig* get_DataRef()
	{
		return ((::RPG::GameCore::NewProjectileConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_DATAREF_OFFSET))(this);
	}

	::System::Void set_DataRef(::RPG::GameCore::NewProjectileConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_DATAREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::ProjectileMoveBehavior get_DataBehaviorType()
	{
		return ((::RPG::GameCore::ProjectileMoveBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_DATABEHAVIORTYPE_OFFSET))(this);
	}

	::System::Void set_DataBehaviorType(::RPG::GameCore::ProjectileMoveBehavior a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileMoveBehavior))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_DATABEHAVIORTYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ISHIT_OFFSET))(this);
	}

	::System::Void set_IsHit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ISHIT_OFFSET))(this, a1);
	}

	::Class_3_98C806684F7CC372_14* get_OnProjectileHit()
	{
		return ((::Class_3_98C806684F7CC372_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILEHIT_OFFSET))(this);
	}

	::System::Void set_OnProjectileHit(::Class_3_98C806684F7CC372_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_14*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILEHIT_OFFSET))(this, a1);
	}

	::Class_3_98C806684F7CC372_15* get_OnProjectileLifetimeFinish()
	{
		return ((::Class_3_98C806684F7CC372_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this);
	}

	::System::Void set_OnProjectileLifetimeFinish(::Class_3_98C806684F7CC372_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_15*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this, a1);
	}

	::Class_1_2B8E0B4950FE44E7* get_SkillContext()
	{
		return ((::Class_1_2B8E0B4950FE44E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_SKILLCONTEXT_OFFSET))(this);
	}

	::System::Void set_SkillContext(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_SKILLCONTEXT_OFFSET))(this, a1);
	}

	::System::Boolean get_EnsureCallbackOrder()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ENSURECALLBACKORDER_OFFSET))(this);
	}

	::System::Void set_EnsureCallbackOrder(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ENSURECALLBACKORDER_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* get_PreviousProjectile()
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_PREVIOUSPROJECTILE_OFFSET))(this);
	}

	::System::Void set_PreviousProjectile(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_PREVIOUSPROJECTILE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ID_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEE291D2E3825AE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_DFEE291D2E3825AE_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_E7B909E841DA8734(::RPG::Client::MonoEffect* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_E7B909E841DA8734_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_A1F9BFB7EBB25DAC_OFFSET))(this);
	}

	::System::Void Method_1_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_0986B6F765C6D4BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3BF7103107A47CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_F3BF7103107A47CD_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_0094A08E076C3CCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_0094A08E076C3CCD_OFFSET))(this);
	}

	::System::Void __ctor_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86___CTOR_B__4_0_OFFSET))(this);
	}
};
