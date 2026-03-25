#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ADD_ONENTERED_OFFSET UNITYSDK_OFFSET(0xA04F500)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETCHIMERADUELGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA04FE10)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0xA04F5C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xA04F4B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_1_OFFSET UNITYSDK_OFFSET(0xA04F820)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_OFFSET UNITYSDK_OFFSET(0xA04F640)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA04FF70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA050190)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0xA04F600)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_REMOVE_ONENTERED_OFFSET UNITYSDK_OFFSET(0xA04F560)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA050300)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0502F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__SHOWUI_OFFSET UNITYSDK_OFFSET(0xA04FFE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xA050350)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA050360)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleEntranceState_TypeDefinitionIndex = 63825;

	class ChimeraDuelMainPuzzleEntranceState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		static ::System::String** StaticGet__UIPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleEntranceState_TypeDefinitionIndex)->GetStaticField(0x47DC0);
		}
		static ::System::String** StaticGet__UIName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleEntranceState_TypeDefinitionIndex)->GetStaticField(0x47DC8);
		}
		::System::Action* OnEntered; // 0x28
		::System::Boolean _WouldEnterByUI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__CCTOR_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GET__STATETYPE_OFFSET))(this);
		}

		::System::Void add_OnEntered(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ADD_ONENTERED_OFFSET))(this, value);
		}

		::System::Void remove_OnEntered(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_REMOVE_ONENTERED_OFFSET))(this, value);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void LoadLineup(::System::UInt32 masterID, ::Il2CppArray<::RPG::GameCore::DynamicValue*>* chimeraIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_OFFSET))(this, masterID, chimeraIDs);
		}

		::System::Void LoadLineup_1(::System::UInt32 masterID, ::Il2CppArray<::System::UInt32>* chimeraIDs, ::System::Boolean isPlayChangeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_LOADLINEUP_1_OFFSET))(this, masterID, chimeraIDs, isPlayChangeAnim);
		}

		::UnityEngine::GameObject* GetChimeraDuelGameObject(::System::Int32 index)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_GETCHIMERADUELGAMEOBJECT_OFFSET))(this, index);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE__SHOWUI_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCESTATE___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}
	};
}
