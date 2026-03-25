#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

class Class_2_17EBC0007C623767;
namespace RPG::Client { class ChimeraDuelBattlePageViewModel; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET UNITYSDK_OFFSET(0xA04A6F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0xA0495F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xA049580)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xA049530)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xA04A470)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA0496D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA049ED0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0xA049690)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET UNITYSDK_OFFSET(0xA049AB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xA049C40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA04A760)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xA04A4C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET UNITYSDK_OFFSET(0xA049990)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xA04A780)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA04A790)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleState_TypeDefinitionIndex = 63819;

	class ChimeraDuelMainPuzzleBattleState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::RPG::Client::ChimeraDuelBattlePageViewModel* _ViewModel; // 0x28
		::System::Boolean _WouldEnterByUI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* get_View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET))(this);
		}

		::System::Void StartGame(::RPG::Client::ChimeraDuelBattlePageViewModel* vm)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET))(this, vm);
		}

		::Class_2_17EBC0007C623767* _CreateInitParams(::RPG::Client::ChimeraDuelBattlePageViewModel* vm)
		{
			return ((::Class_2_17EBC0007C623767*(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET))(this, vm);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _TryShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET))(this);
		}

		::System::Void LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET))(this);
		}

		::System::Void _LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET))(this);
		}

		::System::Void DestroyChimeraControl(::System::Int32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET))(this, uniqueID);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}
	};
}
