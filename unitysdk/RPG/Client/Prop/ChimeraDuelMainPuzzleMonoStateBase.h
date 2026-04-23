#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_144075C1871C33A9;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADD2E60)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_EXIT_OFFSET UNITYSDK_OFFSET(0xADD3110)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xADD29F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__PREFAB_OFFSET UNITYSDK_OFFSET(0xADD2930)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xADD29E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_INIT_OFFSET UNITYSDK_OFFSET(0xADD2A00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xADC8210)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADC8D00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADD2A60)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SET__VIEW_OFFSET UNITYSDK_OFFSET(0xADD29D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xADD2EB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CACHEVIRTUALCAMERAOBJECT_OFFSET UNITYSDK_OFFSET(0xADD2D40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CLEARVIEWONEXIT_OFFSET UNITYSDK_OFFSET(0xADD2CB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xADC9270)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADD31E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__PREPAREVIEWONENTER_OFFSET UNITYSDK_OFFSET(0xADD2AE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMonoStateBase_TypeDefinitionIndex = 71879;

	class ChimeraDuelMainPuzzleMonoStateBase : public ::System::Object
	{
	public:
		::Class_1_144075C1871C33A9* _SharedContext; // 0x10
		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* _StateMachine; // 0x18
		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* __View_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get__Prefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__PREFAB_OFFSET))(this);
		}

		::System::Void set__View(::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SET__VIEW_OFFSET))(this, value);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* get__View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET__VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get_StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* stateMachine, ::Class_1_144075C1871C33A9* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*, ::Class_1_144075C1871C33A9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_INIT_OFFSET))(this, stateMachine, context);
		}

		::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_PREPAREONSTARTPUZZLE_OFFSET))(this);
		}

		::System::Void _PrepareViewOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__PREPAREVIEWONENTER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_ONEXIT_OFFSET))(this);
		}

		::System::Void _ClearViewOnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CLEARVIEWONEXIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void SwitchTo(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_SWITCHTO_OFFSET))(this, newState);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE_EXIT_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__ONUISCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::System::Void _CacheVirtualCameraObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEBASE__CACHEVIRTUALCAMERAOBJECT_OFFSET))(this);
		}
	};
}
