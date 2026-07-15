#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EWolfBroGunPlayTargetActionFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_1_482F3423DE650EAD;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class WolfBroGunPlayRoadConfig; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_TriggerEffect; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x17422E10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0x17423370)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_DIE_OFFSET UNITYSDK_OFFSET(0x17424570)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_1_OFFSET UNITYSDK_OFFSET(0x174253D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_OFFSET UNITYSDK_OFFSET(0x17424EE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIP_OFFSET UNITYSDK_OFFSET(0x17423D20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETCOLLIDERCENTER_OFFSET UNITYSDK_OFFSET(0x17425AA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETEFFECTUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x17424800)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x17424760)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETWAITMISSTIME_OFFSET UNITYSDK_OFFSET(0x17424B70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x17427700)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0x174275F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x17427720)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x17427740)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17427650)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISDYING_OFFSET UNITYSDK_OFFSET(0x17427670)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIPPING_OFFSET UNITYSDK_OFFSET(0x174277D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIP_OFFSET UNITYSDK_OFFSET(0x174277C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISINITACTION_OFFSET UNITYSDK_OFFSET(0x17427690)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x17427780)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_LASTHITDIRECTION_OFFSET UNITYSDK_OFFSET(0x17427750)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_MOVEVALUE_OFFSET UNITYSDK_OFFSET(0x174277A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x17427630)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0x17427610)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HASFLAGS_OFFSET UNITYSDK_OFFSET(0x17423150)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_INIT_OFFSET UNITYSDK_OFFSET(0x17423420)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISAPPEAR_OFFSET UNITYSDK_OFFSET(0x174248E0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0x17424B00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0x17424A90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17426AF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x17425D30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x17426F40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_2B1380CB28524A16_OFFSET UNITYSDK_OFFSET(0x17427340)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17424E40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x174241A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17426EF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_492C14B76D6C93F5_OFFSET UNITYSDK_OFFSET(0x17427220)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x17424250)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17426D20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x174270F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_75EB12FBE59D5938_OFFSET UNITYSDK_OFFSET(0x17426FA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_7933D8FAF1D97D04_OFFSET UNITYSDK_OFFSET(0x17426370)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_1_OFFSET UNITYSDK_OFFSET(0x17426320)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x174262D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B13A9DB665A91AEE_OFFSET UNITYSDK_OFFSET(0x17427500)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x17425F10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_2_OFFSET UNITYSDK_OFFSET(0x17426050)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_3_OFFSET UNITYSDK_OFFSET(0x17426190)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17425BF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_F59DCF082763F03E_OFFSET UNITYSDK_OFFSET(0x174271B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_FE977999F1A47CA7_OFFSET UNITYSDK_OFFSET(0x17426BB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ONHIT_OFFSET UNITYSDK_OFFSET(0x17424BC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_OVERRIDEINITPOS_OFFSET UNITYSDK_OFFSET(0x174231B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_PAUSE_OFFSET UNITYSDK_OFFSET(0x17422EE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_RESUME_OFFSET UNITYSDK_OFFSET(0x17422F40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETACTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x17423320)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x174246D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x17427710)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0x17427600)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x17427730)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17427660)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISDYING_OFFSET UNITYSDK_OFFSET(0x17427680)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x17427790)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_LASTHITDIRECTION_OFFSET UNITYSDK_OFFSET(0x17427770)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_MOVEVALUE_OFFSET UNITYSDK_OFFSET(0x174277B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x17427640)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ROADMAP_OFFSET UNITYSDK_OFFSET(0x17427620)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0x17425820)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_STARTUP_OFFSET UNITYSDK_OFFSET(0x17423BF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_TICK_OFFSET UNITYSDK_OFFSET(0x17423E70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x17427890)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x174277E0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_TypeDefinitionIndex = 65650;

	class WolfBroGunPlayTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_FlipStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x251A0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_HitDieStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x251A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RemoveDieStateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x251B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_IdleStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x251B8);
		}
		static ::System::Int32* StaticGet_FlipSpeedParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		static ::System::Int32* StaticGet_HitSpeedParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72D4);
		}
		static ::System::Int32* StaticGet_IsMoveParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72D8);
		}
		static ::System::Int32* StaticGet_BornStateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72DC);
		}
		static ::System::Int32* StaticGet_IsFlipParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72E0);
		}
		static ::System::Int32* StaticGet_MoveValueParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72E4);
		}
		static ::System::Int32* StaticGet_HitTriggerParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x72E8);
		}
		::RPG::Client::WolfBroGunPlayRoadConfig* roadConfig; // 0x18
		::System::Single FlipAnimTime; // 0x20
		::System::Single score; // 0x24
		::RPG::Client::AttachPointMapping* _AttachPointMapping_k__BackingField; // 0x28
		::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect* InitEffectConfig; // 0x30
		::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect* OnHitDieEffectConfig; // 0x38
		::Class_1_2BF31F3092BDFD9E* _RoadMap_k__BackingField; // 0x40
		::RPG::Client::WolfBroGunPlayTarget_Group* _OwnerGroup_k__BackingField; // 0x48
		::System::Boolean _IsActive_k__BackingField; // 0x50
		::System::Boolean _IsDying_k__BackingField; // 0x51
		::UnityEngine::Animator* _Animator_k__BackingField; // 0x58
		::UnityEngine::Collider* _Collider_k__BackingField; // 0x60
		::UnityEngine::Vector3 _LastHitDirection_k__BackingField; // 0x68
		::System::Boolean _IsMoving_k__BackingField; // 0x74
		::System::Single _MoveValue_k__BackingField; // 0x78
		::System::Boolean Field_5_26; // 0x7C
		::System::Boolean Field_5_27; // 0x7D
		::System::Boolean Field_5_28; // 0x7E
		::System::Collections::Generic::List_1<::System::Single>* Field_5_29; // 0x80
		::System::Int32 Field_5_30; // 0x88
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* Field_5_31; // 0x90
		::System::Int32 Field_5_32; // 0x98
		::System::Int32 Field_5_33; // 0x9C
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_5_34; // 0xA0
		::System::Int32 Field_5_35; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_5_36; // 0xB0
		::Il2CppArray<::System::Int32>* Field_5_37; // 0xB8
		::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*>* Field_5_38; // 0xC0
		::RPG::Client::EWolfBroGunPlayTargetActionFlag Field_5_39; // 0xC8
		::System::Single Field_5_40; // 0xCC
		::System::Boolean Field_5_41; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_AWAKE_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_RESUME_OFFSET))(this);
		}

		::System::Boolean HasFlags(::RPG::Client::EWolfBroGunPlayTargetActionFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EWolfBroGunPlayTargetActionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HASFLAGS_OFFSET))(this, a1);
		}

		::System::Void OverrideInitPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_OVERRIDEINITPOS_OFFSET))(this, a1);
		}

		::System::Void SetActionFlags(::RPG::Client::EWolfBroGunPlayTargetActionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EWolfBroGunPlayTargetActionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETACTIONFLAGS_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_STARTUP_OFFSET))(this);
		}

		::System::Void Flip(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIP_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_TICK_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETPOSITION_OFFSET))(this);
		}

		::System::String* GetEffectUniqueName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETEFFECTUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean IsAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISAPPEAR_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISBOOMABLE_OFFSET))(this);
		}

		::System::Single GetWaitMissTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETWAITMISSTIME_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Void Die(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_DIE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Fire(::System::String* a1, ::RPG::Client::WolfBroGunTargetProjectile* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::WolfBroGunTargetProjectile*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Fire_1(::System::String* a1, ::System::Single a2, ::RPG::Client::WolfBroGunTargetProjectile* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::RPG::Client::WolfBroGunTargetProjectile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetColliderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETCOLLIDERCENTER_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_26E509975F92479C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_26E509975F92479C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3DE31A03057E055_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_1_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_2_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_3_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Boolean Method_5_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_A86A455D6AB5B836_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7933D8FAF1D97D04(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_7933D8FAF1D97D04_OFFSET))(this, a1);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_FE977999F1A47CA7(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_FE977999F1A47CA7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_5_29352E75304CF2A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_29352E75304CF2A0_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Boolean Method_5_F59DCF082763F03E(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_F59DCF082763F03E_OFFSET))(this, a1);
		}

		::System::Void Method_5_2B1380CB28524A16(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_2B1380CB28524A16_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_B13A9DB665A91AEE(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B13A9DB665A91AEE_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_492C14B76D6C93F5(::System::Single a1, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_492C14B76D6C93F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_75EB12FBE59D5938(::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_75EB12FBE59D5938_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_39590AB2089F9F4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_39590AB2089F9F4D_OFFSET))(this, a1);
		}

		::RPG::Client::AttachPointMapping* get_AttachPointMapping()
		{
			return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ATTACHPOINTMAPPING_OFFSET))(this);
		}

		::System::Void set_AttachPointMapping(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ATTACHPOINTMAPPING_OFFSET))(this, a1);
		}

		::Class_1_2BF31F3092BDFD9E* get_RoadMap()
		{
			return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ROADMAP_OFFSET))(this);
		}

		::System::Void set_RoadMap(::Class_1_2BF31F3092BDFD9E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ROADMAP_OFFSET))(this, a1);
		}

		::RPG::Client::WolfBroGunPlayTarget_Group* get_OwnerGroup()
		{
			return ((::RPG::Client::WolfBroGunPlayTarget_Group*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_OWNERGROUP_OFFSET))(this);
		}

		::System::Void set_OwnerGroup(::RPG::Client::WolfBroGunPlayTarget_Group* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_OWNERGROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISDYING_OFFSET))(this);
		}

		::System::Void set_IsDying(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISDYING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISINITACTION_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void set_Animator(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ANIMATOR_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_COLLIDER_OFFSET))(this);
		}

		::System::Void set_Collider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_COLLIDER_OFFSET))(this, a1);
		}

		::RPG::Client::EWolfBroGunPlayTargetActionFlag get_Flags()
		{
			return ((::RPG::Client::EWolfBroGunPlayTargetActionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_FLAGS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastHitDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_LASTHITDIRECTION_OFFSET))(this);
		}

		::System::Void set_LastHitDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_LASTHITDIRECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISMOVING_OFFSET))(this);
		}

		::System::Void set_IsMoving(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISMOVING_OFFSET))(this, a1);
		}

		::System::Single get_MoveValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_MOVEVALUE_OFFSET))(this);
		}

		::System::Void set_MoveValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_MOVEVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFlip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIP_OFFSET))(this);
		}

		::System::Boolean get_IsFlipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIPPING_OFFSET))(this);
		}
	};
}
