#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateView.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelNpcType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

namespace RPG::Client { class ChimeraDuelGameSessionBattle; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::Client::Prop { class ChimeraDuelBattlePrefabConfig; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC17490)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETALLYMEMBERSLOTS_OFFSET UNITYSDK_OFFSET(0xDC1A400)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETENEMYMEMBERSLOTS_OFFSET UNITYSDK_OFFSET(0xDC1A440)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETMASTERANCHOR_OFFSET UNITYSDK_OFFSET(0xDC1A480)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETMASTERTALKANCHOR_OFFSET UNITYSDK_OFFSET(0xDC19C30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXIES_OFFSET UNITYSDK_OFFSET(0xDC179D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXYLIST_OFFSET UNITYSDK_OFFSET(0xDC1A210)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXY_OFFSET UNITYSDK_OFFSET(0xDC1A290)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GET_ALLYMASTERID_OFFSET UNITYSDK_OFFSET(0xDC17270)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GET_ENEMYMASTERID_OFFSET UNITYSDK_OFFSET(0xDC17280)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADCHIMERAWITHANCHOR_OFFSET UNITYSDK_OFFSET(0xDC17AC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADCHIMERA_OFFSET UNITYSDK_OFFSET(0xDC183D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADMASTERGROUP_OFFSET UNITYSDK_OFFSET(0xDC193D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_34174C70D4D8D91A_OFFSET UNITYSDK_OFFSET(0xDC17100)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_651389C8EB0A0E71_OFFSET UNITYSDK_OFFSET(0xDC19050)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_7BAF473253F09AFA_OFFSET UNITYSDK_OFFSET(0xDC17E90)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_921FC9B720328DC4_OFFSET UNITYSDK_OFFSET(0xDC1A4E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_99ABFE8933D176BE_OFFSET UNITYSDK_OFFSET(0xDC18330)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_BE3D392B274FB7D7_OFFSET UNITYSDK_OFFSET(0xDC19A20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_D9CE4FE9E294B1B7_OFFSET UNITYSDK_OFFSET(0xDC17FC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0xDC1A360)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_REORDER_OFFSET UNITYSDK_OFFSET(0xDC184A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_RESET_OFFSET UNITYSDK_OFFSET(0xDC19CB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_START_OFFSET UNITYSDK_OFFSET(0xDC17290)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UNLOADMASTERGROUP_OFFSET UNITYSDK_OFFSET(0xDC19350)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UNLOADMASTERNPCMODEL_OFFSET UNITYSDK_OFFSET(0xDC16930)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC17430)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDC1A5C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW__GETPROXIES_B__29_0_OFFSET UNITYSDK_OFFSET(0xDC1A720)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleView_TypeDefinitionIndex = 77900;

	class ChimeraDuelMainPuzzleBattleView : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _ChimeraProxyIDs; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::Prop::DuelChimeraProxy*>* _ChimeraProxyDict; // 0x30
		::System::UInt32 _GroupID; // 0x38
		::RPG::Client::Prop::ChimeraDuelNpcModelView* _AllyMaster; // 0x40
		::RPG::Client::Prop::ChimeraDuelNpcModelView* _EnemyMaster; // 0x48
		::System::UInt32 _AllyMasterID; // 0x50
		::System::UInt32 _EnemyMasterID; // 0x54
		::System::Single CostTime; // 0x58
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* VfxPlayer; // 0x60
		::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig* _PrefabConfig; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* AllyMemberSlots; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EnemyMemberSlots; // 0x78
		::UnityEngine::Transform* AllyMasterAnchor; // 0x80
		::UnityEngine::Transform* EnemyMasterAnchor; // 0x88
		::RPG::Client::Prop::ChimeraDuelNpcModelView* AllyHipplenMini; // 0x90
		::RPG::Client::Prop::ChimeraDuelNpcModelView* EnemyHipplenMini; // 0x98
		::UnityEngine::Transform* CentralAnchor; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AllyMasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GET_ALLYMASTERID_OFFSET))(this);
		}

		::System::UInt32 get_EnemyMasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GET_ENEMYMASTERID_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::DuelChimeraProxy* LoadChimeraWithAnchor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADCHIMERAWITHANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D9CE4FE9E294B1B7(::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::RPG::Client::Prop::DuelChimeraProxy* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_D9CE4FE9E294B1B7_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_99ABFE8933D176BE(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_99ABFE8933D176BE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::DuelChimeraProxy* LoadChimera(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADCHIMERA_OFFSET))(this, a1);
		}

		::System::Void Reorder(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_REORDER_OFFSET))(this, a1);
		}

		::System::Void UnloadMasterNpcModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UNLOADMASTERNPCMODEL_OFFSET))(this);
		}

		::System::Void Method_6_34174C70D4D8D91A(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_34174C70D4D8D91A_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::ChimeraDuelNpcModelView* Method_6_651389C8EB0A0E71(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::Prop::ChimeraDuelNpcModelView*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_651389C8EB0A0E71_OFFSET))(this, a1, a2);
		}

		::System::Void UnloadMasterGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_UNLOADMASTERGROUP_OFFSET))(this);
		}

		::System::Void LoadMasterGroup(::RPG::Client::ChimeraDuelGameSessionBattle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_LOADMASTERGROUP_OFFSET))(this, a1);
		}

		::System::Void Method_6_BE3D392B274FB7D7(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_BE3D392B274FB7D7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetMasterTalkAnchor(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETMASTERTALKANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_RESET_OFFSET))(this);
		}

		::System::Void Method_6_7BAF473253F09AFA(::RPG::Client::Prop::DuelChimeraProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_7BAF473253F09AFA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXYLIST_OFFSET))(this);
		}

		::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETPROXY_OFFSET))(this, a1);
		}

		::System::Void RemoveProxy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_REMOVEPROXY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetAllyMemberSlots()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETALLYMEMBERSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetEnemyMemberSlots()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETENEMYMEMBERSLOTS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMasterAnchor(::RPG::GameCore::ChimeraDuelTeamType a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_GETMASTERANCHOR_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelNpcModelView* Method_6_921FC9B720328DC4(::RPG::GameCore::ChimeraDuelNpcType a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::RPG::Client::Prop::ChimeraDuelNpcModelView*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcType, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW_METHOD_6_921FC9B720328DC4_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::DuelChimeraProxy* _GetProxies_b__29_0(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW__GETPROXIES_B__29_0_OFFSET))(this, a1);
		}
	};
}
