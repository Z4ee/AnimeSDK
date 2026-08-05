#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09D8878FDDF9963B.h"
#include "unitysdk/Enum_3_576D2B842B630070.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/MoleMole/Battle/RBDBattleManager_Enum_3_67E9A566F14F14F7.h"
#include "unitysdk/MoleMole/Battle/RBDBattleManager_Struct_2_0781496C6B531BAB.h"
#include "unitysdk/MoleMole/Battle/RBDBattleManager_Struct_2_FB463563CC2FB07B.h"
#include "unitysdk/RBDDestruction/RBDManager_DestroyEvent.h"
#include "unitysdk/RBDDestruction/RBDManager_GroundedEvent.h"
#include "unitysdk/RBDDestruction/RBDManager_HitEvent.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_560B23058CA4940C;
class Class_1_66BE267322CE07F6;
class Class_1_CEB3A2AC6A2FFA68;
class Class_1_FE4DC5D381092977;
class Class_3_707412604A129938;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class RBDBattleData; }
namespace MoleMole::Battle { class RBDEffectInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BULLETTRIGGERDESTRUCTIBLEHIT_OFFSET UNITYSDK_OFFSET(0x134CA280)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKENTITYINRUSH_OFFSET UNITYSDK_OFFSET(0x134CB4B0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKRESVALID_OFFSET UNITYSDK_OFFSET(0x134C9480)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x134CC620)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GETRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x134CB660)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_HITDESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x134C9050)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_112F0AC12B1FD790_OFFSET UNITYSDK_OFFSET(0x134D0320)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_16EE4DABFA5B5867_OFFSET UNITYSDK_OFFSET(0x134CF4E0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x134D0690)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_4164A7F0842B285E_OFFSET UNITYSDK_OFFSET(0x134CEE10)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_425D55F2F4775139_OFFSET UNITYSDK_OFFSET(0x134CD7D0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_5827406084A7DA6E_OFFSET UNITYSDK_OFFSET(0x134C9910)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_8E235C789FEC971B_OFFSET UNITYSDK_OFFSET(0x134CBB20)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x134D10A0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x134D1280)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_AF0FC2A3AC3D7460_OFFSET UNITYSDK_OFFSET(0x134CB230)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B13995D2D125B4C3_OFFSET UNITYSDK_OFFSET(0x134C9F40)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B2AF81294D9C69C7_1_OFFSET UNITYSDK_OFFSET(0x134D1990)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x134CDA90)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D1289BD4E2C7FF87_OFFSET UNITYSDK_OFFSET(0x134D1BB0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x134CC860)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D3206EC93EE606A4_OFFSET UNITYSDK_OFFSET(0x134D1DE0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E16793082E43059F_OFFSET UNITYSDK_OFFSET(0x134CDF90)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E5D087CB526C8BC7_OFFSET UNITYSDK_OFFSET(0x134D1700)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E8552C808F3BB490_OFFSET UNITYSDK_OFFSET(0x134D06F0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x134CF7F0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x134CFCB0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x134D0B10)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x134CFC60)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSDESTROY_OFFSET UNITYSDK_OFFSET(0x134CF2C0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSGROUNDED_OFFSET UNITYSDK_OFFSET(0x134CF0A0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSHITBREAK_OFFSET UNITYSDK_OFFSET(0x134CDD60)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x134CF7A0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_TRIGGERCOLLIDERASYNC_OFFSET UNITYSDK_OFFSET(0x134CA630)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D00F0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x134CFFD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBattleManager_TypeDefinitionIndex = 76494;

	class RBDBattleManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::RBDEffectInfo*>** StaticGet_m_dicEffectLimits()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::RBDEffectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x44520);
		}
		static ::System::Collections::Generic::List_1<::Class_1_CEB3A2AC6A2FFA68*>** StaticGet_m_lstRuntimeAudioInfos()
		{
			return (::System::Collections::Generic::List_1<::Class_1_CEB3A2AC6A2FFA68*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x44528);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::RBDBattleData*>** StaticGet_m_dicRuntimeDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::RBDBattleData*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x44530);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Queue_1<::Class_1_66BE267322CE07F6*>*>** StaticGet_m_dicRuntimeEffects()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Queue_1<::Class_1_66BE267322CE07F6*>*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x44538);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__raycastHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x44540);
		}
		static ::Unity::Collections::NativeArray_1<::MoleMole::Battle::RBDBattleManager_Struct_2_FB463563CC2FB07B>* StaticGet__castBaseDatas()
		{
			return (::Unity::Collections::NativeArray_1<::MoleMole::Battle::RBDBattleManager_Struct_2_FB463563CC2FB07B>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE40);
		}
		static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet__hitCounts()
		{
			return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE50);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet__hitResults()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE60);
		}
		static ::Unity::Collections::NativeArray_1<::MoleMole::Battle::RBDBattleManager_Struct_2_0781496C6B531BAB>* StaticGet__castJobInDatas()
		{
			return (::Unity::Collections::NativeArray_1<::MoleMole::Battle::RBDBattleManager_Struct_2_0781496C6B531BAB>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE70);
		}
		static ::System::Boolean* StaticGet_ENABLE_HIT_DESTRUCTIBLE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE80);
		}
		static ::System::Int32* StaticGet_m_nArrayCurIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xFE84);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitResultsInJob()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Single RETAIN_AUDIO_TIME; // 0x0
		// static const ::System::Int32 MAX_HIT_RESULT_NUM = 0x8; // 0x0
		// static const ::System::Int32 MAX_CAST_DATA_NUM = 0x10; // 0x0
		// static const ::System::String* CUSTOM_BREAK_PROPERTY_NAME; // 0x0
		// static const ::System::Int32 DEFAULT_EFFECT_LIMIT_NUM = 0x5; // 0x0
		// static const ::System::String* EVADE_ANIMATOR_TAG; // 0x0
		// static const ::System::String* EVADE_BACK_ANIMATOR_TAG; // 0x0
		::System::Boolean m_bOpenLogicRBD; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDEffectInfo*>* m_lstRBDEffectInfos; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDBattleData*>* m_RBDDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean HitDestructible(::Enum_3_576D2B842B630070 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a3)
		{
			return ((::System::Boolean(*)(::Enum_3_576D2B842B630070, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_HITDESTRUCTIBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BulletTriggerDestructibleHit(::Enum_3_576D2B842B630070 a1, ::System::UInt32 a2, ::Class_1_FE4DC5D381092977* a3)
		{
			return ((::System::Void(*)(::Enum_3_576D2B842B630070, ::System::UInt32, ::Class_1_FE4DC5D381092977*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BULLETTRIGGERDESTRUCTIBLEHIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TriggerColliderAsync(::Enum_3_576D2B842B630070 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::Enum_3_576D2B842B630070, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_TRIGGERCOLLIDERASYNC_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckEntityInRush(::Class_3_707412604A129938* a1)
		{
			return ((::System::Boolean(*)(::Class_3_707412604A129938*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKENTITYINRUSH_OFFSET))(a1);
		}

		static ::MoleMole::Battle::RBDBattleManager_Enum_3_67E9A566F14F14F7 CheckResValid(::Enum_3_576D2B842B630070 a1, ::System::UInt32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::MoleMole::Battle::RBDBattleManager_Enum_3_67E9A566F14F14F7(*)(::Enum_3_576D2B842B630070, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKRESVALID_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::MoleMole::Battle::RBDBattleData* GetRuntimeData(::System::Int32 a1)
		{
			return ((::MoleMole::Battle::RBDBattleData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GETRUNTIMEDATA_OFFSET))(a1);
		}

		static ::System::Void FixedUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FIXEDUPDATE_OFFSET))(a1);
		}

		static ::System::Void ProcessHitBreak(::Il2CppArray<::RBDDestruction::RBDManager_HitEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RBDDestruction::RBDManager_HitEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSHITBREAK_OFFSET))(a1, a2);
		}

		static ::System::Void ProcessGrounded(::Il2CppArray<::RBDDestruction::RBDManager_GroundedEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RBDDestruction::RBDManager_GroundedEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSGROUNDED_OFFSET))(a1, a2);
		}

		static ::System::Void ProcessDestroy(::Il2CppArray<::RBDDestruction::RBDManager_DestroyEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RBDDestruction::RBDManager_DestroyEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSDESTROY_OFFSET))(a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Method_5_16EE4DABFA5B5867(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_16EE4DABFA5B5867_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_5_112F0AC12B1FD790(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_112F0AC12B1FD790_OFFSET))(a1, a2);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		static ::System::Void Method_5_E8552C808F3BB490(::MoleMole::Battle::RBDBattleData* a1)
		{
			return ((::System::Void(*)(::MoleMole::Battle::RBDBattleData*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E8552C808F3BB490_OFFSET))(a1);
		}

		::System::Void Method_5_FE72BF2F281C4FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_FE72BF2F281C4FA8_OFFSET))(this);
		}

		static ::MoleMole::Battle::RBDBattleManager_Enum_3_67E9A566F14F14F7 Method_5_8E235C789FEC971B(::MoleMole::Battle::RBDBattleData* a1, ::Enum_3_576D2B842B630070 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6)
		{
			return ((::MoleMole::Battle::RBDBattleManager_Enum_3_67E9A566F14F14F7(*)(::MoleMole::Battle::RBDBattleData*, ::Enum_3_576D2B842B630070, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_8E235C789FEC971B_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_F7BA13C72A6B3F58_OFFSET))(this);
		}

		::System::Void Method_5_FD6692A5F6B0AC0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_FD6692A5F6B0AC0C_OFFSET))(this);
		}

		static ::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_A239DF324AF4215D_OFFSET))();
		}

		static ::System::Void Method_5_E16793082E43059F(::Enum_3_09D8878FDDF9963B a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::Enum_3_09D8878FDDF9963B, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E16793082E43059F_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Method_5_AF0FC2A3AC3D7460(::Enum_3_576D2B842B630070 a1, ::System::UInt32 a2, ::Enum_3_F40B865AC61AB8D7 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::Enum_3_576D2B842B630070, ::System::UInt32, ::Enum_3_F40B865AC61AB8D7, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_AF0FC2A3AC3D7460_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void Method_5_B2AF81294D9C69C7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B2AF81294D9C69C7_OFFSET))();
		}

		static ::System::Void Method_5_D308836DB54415C3()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D308836DB54415C3_OFFSET))();
		}

		static ::System::Void Method_5_D3206EC93EE606A4(::System::String* a1, ::MoleMole::Battle::RBDBattleData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::RBDBattleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D3206EC93EE606A4_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_5827406084A7DA6E(::System::Int32 a1, ::Enum_3_576D2B842B630070 a2, ::System::UInt32 a3)
		{
			return ((::System::Single(*)(::System::Int32, ::Enum_3_576D2B842B630070, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_5827406084A7DA6E_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_5_D1289BD4E2C7FF87(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_D1289BD4E2C7FF87_OFFSET))(a1);
		}

		static ::System::Void Method_5_4164A7F0842B285E(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_4164A7F0842B285E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E5D087CB526C8BC7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_E5D087CB526C8BC7_OFFSET))();
		}

		static ::System::Void Method_5_B2AF81294D9C69C7_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B2AF81294D9C69C7_1_OFFSET))();
		}

		::System::Void Method_5_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_A984848EA3E436DA_OFFSET))(this);
		}

		static ::System::Void Method_5_425D55F2F4775139(::System::Boolean a1, ::MoleMole::Battle::RBDBattleData* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::RBDBattleData*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_425D55F2F4775139_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B13995D2D125B4C3(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_METHOD_5_B13995D2D125B4C3_OFFSET))(a1, a2);
		}
	};
}
