#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateView.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelBattlePrefabConfig; }
namespace RPG::Client::Prop { class ChimeraDuelEntranceChimeraSlot; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xC513D60)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC513E30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_GETCHIMERADUELGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC5138F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_LOADLINEUP_OFFSET UNITYSDK_OFFSET(0xC513390)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xC5146D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_36D9A2B328C51377_OFFSET UNITYSDK_OFFSET(0xC514580)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0xC513F70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC513C80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_D958BE5293B4CE71_OFFSET UNITYSDK_OFFSET(0xC5142D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC514840)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5148A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleEntranceView_TypeDefinitionIndex = 72895;

	class ChimeraDuelMainPuzzleEntranceView : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView
	{
	public:
		::UnityEngine::Transform* MasterAnchor; // 0x28
		::Il2CppArray<::RPG::Client::Prop::ChimeraDuelEntranceChimeraSlot*>* ChimeraAnchors; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* _ChimeraInstances; // 0x38
		::UnityEngine::GameObject* _MasterInstance; // 0x40
		::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig* _PrefabConfig; // 0x48
		::System::UInt32 _CurrentMasterID; // 0x50
		::Cinemachine::CinemachineVirtualCamera* _ActiveCamera; // 0x58
		::System::String* _UpdateChangeEffectPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetChimeraDuelGameObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_GETCHIMERADUELGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void LoadLineup(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_LOADLINEUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_3A08FD6F6C9BA32C(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_3A08FD6F6C9BA32C_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_6_D958BE5293B4CE71(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_D958BE5293B4CE71_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_36D9A2B328C51377(::RPG::GameCore::ChimeraBattleAnimationType a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_36D9A2B328C51377_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_21886A8411E71157_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
