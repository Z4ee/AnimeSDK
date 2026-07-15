#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/Struct_2_82A1455F3BBBFC10.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1106;
class Class_0_16E4307DCC419505_1107;
class Class_0_16E4307DCC419505_1108;
class Class_1_36EF8C2CE98EB276;
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_UITRANSITIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18318DD0)
#define RPG_CLIENT_UITRANSITIONMANAGER_EXIT_OFFSET UNITYSDK_OFFSET(0x18318760)
#define RPG_CLIENT_UITRANSITIONMANAGER_FORCEFINISHSWITCH_OFFSET UNITYSDK_OFFSET(0x18318A50)
#define RPG_CLIENT_UITRANSITIONMANAGER_HASANYTRANSITION_OFFSET UNITYSDK_OFFSET(0x18318D70)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISABOVEBLACKSTYLE_OFFSET UNITYSDK_OFFSET(0x18319770)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISBELOWBLACKSTYLE_OFFSET UNITYSDK_OFFSET(0x183197C0)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISCLOSEWITHCUT_OFFSET UNITYSDK_OFFSET(0x18319860)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISENTERWITHCUT_OFFSET UNITYSDK_OFFSET(0x183198B0)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISENTERWITHFASTFORWARDSTYLE_OFFSET UNITYSDK_OFFSET(0x18319950)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISEXITWITHCUT_OFFSET UNITYSDK_OFFSET(0x18319810)
#define RPG_CLIENT_UITRANSITIONMANAGER_ISOPENWITHCUT_OFFSET UNITYSDK_OFFSET(0x18319900)
#define RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDENEXTTRANSITIONFACTORY_OFFSET UNITYSDK_OFFSET(0x183178C0)
#define RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDENEXTTRANSITION_OFFSET UNITYSDK_OFFSET(0x18317770)
#define RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDETRANSITIONANIMTYPE_OFFSET UNITYSDK_OFFSET(0x18317910)
#define RPG_CLIENT_UITRANSITIONMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x18318450)
#define RPG_CLIENT_UITRANSITIONMANAGER_SWITCHBACK_OFFSET UNITYSDK_OFFSET(0x183180B0)
#define RPG_CLIENT_UITRANSITIONMANAGER_SWITCHOPEN_OFFSET UNITYSDK_OFFSET(0x18317B30)
#define RPG_CLIENT_UITRANSITIONMANAGER__CLEAROVERRIDE_OFFSET UNITYSDK_OFFSET(0x183191C0)
#define RPG_CLIENT_UITRANSITIONMANAGER__CREATETRANSITION_OFFSET UNITYSDK_OFFSET(0x18317F70)
#define RPG_CLIENT_UITRANSITIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18319A90)
#define RPG_CLIENT_UITRANSITIONMANAGER__GETANIMTYPE_OFFSET UNITYSDK_OFFSET(0x183195D0)
#define RPG_CLIENT_UITRANSITIONMANAGER__GETTRANSITIONFACTORY_OFFSET UNITYSDK_OFFSET(0x18319170)
#define RPG_CLIENT_UITRANSITIONMANAGER__GETTRANSITIONOPTION_OFFSET UNITYSDK_OFFSET(0x18318E20)
#define RPG_CLIENT_UITRANSITIONMANAGER__MAKETRANSITIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x18319210)
#define RPG_CLIENT_UITRANSITIONMANAGER__ONCLOSETRANSITIONFINISHED_OFFSET UNITYSDK_OFFSET(0x18319A40)
#define RPG_CLIENT_UITRANSITIONMANAGER__ONSHOWTRANSITIONFINISHED_OFFSET UNITYSDK_OFFSET(0x183199F0)
#define RPG_CLIENT_UITRANSITIONMANAGER__ONSWITCHTRANSITIONFINISHED_OFFSET UNITYSDK_OFFSET(0x183199A0)
#define RPG_CLIENT_UITRANSITIONMANAGER__SETNEXTTRANSITIONOPTION_OFFSET UNITYSDK_OFFSET(0x18317850)

namespace RPG::Client
{
	inline static constexpr unsigned int UITransitionManager_TypeDefinitionIndex = 69775;

	class UITransitionManager : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1107* _PageFactory; // 0x10
		::Class_1_36EF8C2CE98EB276* _CurrCloseTransition; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_82A1455F3BBBFC10>*>* _TransitionMap; // 0x20
		::Class_1_36EF8C2CE98EB276* _CurrOpenTransition; // 0x28
		::Class_0_16E4307DCC419505_1108* _DialogFactory; // 0x30
		::Class_1_36EF8C2CE98EB276* _CurrSwitchTransition; // 0x38
		::Class_0_16E4307DCC419505_1107* _NextTransitionFactory; // 0x40
		::System::Nullable_1<::Struct_2_82A1455F3BBBFC10> _NextTransitionOption; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OverrideNextTransition(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDENEXTTRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideNextTransitionFactory(::Class_0_16E4307DCC419505_1107* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDENEXTTRANSITIONFACTORY_OFFSET))(this, a1);
		}

		::System::Void OverrideTransitionAnimType(::System::String* a1, ::System::String* a2, ::RPG::Client::UITransitionAnimType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::UITransitionAnimType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_OVERRIDETRANSITIONANIMTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwitchOpen(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_SWITCHOPEN_OFFSET))(this, a1);
		}

		::System::Void SwitchBack(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_SWITCHBACK_OFFSET))(this, a1);
		}

		::System::Void Show(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void Exit(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_EXIT_OFFSET))(this, a1);
		}

		::System::Void ForceFinishSwitch(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_FORCEFINISHSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasAnyTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_HASANYTRANSITION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1106* _CreateTransition(::Class_1_36EF8C2CE98EB276* a1)
		{
			return ((::Class_0_16E4307DCC419505_1106*(*)(::PVOID, ::Class_1_36EF8C2CE98EB276*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__CREATETRANSITION_OFFSET))(this, a1);
		}

		::System::Void _SetNextTransitionOption(::Struct_2_82A1455F3BBBFC10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_82A1455F3BBBFC10))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__SETNEXTTRANSITIONOPTION_OFFSET))(this, a1);
		}

		::Struct_2_82A1455F3BBBFC10 _GetTransitionOption(::Class_1_36EF8C2CE98EB276* a1)
		{
			return ((::Struct_2_82A1455F3BBBFC10(*)(::PVOID, ::Class_1_36EF8C2CE98EB276*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__GETTRANSITIONOPTION_OFFSET))(this, a1);
		}

		::Struct_2_82A1455F3BBBFC10 _MakeTransitionOptions(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2, ::System::Boolean a3)
		{
			return ((::Struct_2_82A1455F3BBBFC10(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__MAKETRANSITIONOPTIONS_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_1107* _GetTransitionFactory()
		{
			return ((::Class_0_16E4307DCC419505_1107*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__GETTRANSITIONFACTORY_OFFSET))(this);
		}

		::System::Void _ClearOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__CLEAROVERRIDE_OFFSET))(this);
		}

		::RPG::Client::UITransitionAnimType _GetAnimType(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::RPG::Client::UITransitionAnimType(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__GETANIMTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchTransitionFinished(::Class_1_36EF8C2CE98EB276* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36EF8C2CE98EB276*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__ONSWITCHTRANSITIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnShowTransitionFinished(::Class_1_36EF8C2CE98EB276* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36EF8C2CE98EB276*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__ONSHOWTRANSITIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnCloseTransitionFinished(::Class_1_36EF8C2CE98EB276* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36EF8C2CE98EB276*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER__ONCLOSETRANSITIONFINISHED_OFFSET))(this, a1);
		}

		static ::System::Boolean IsAboveBlackStyle(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISABOVEBLACKSTYLE_OFFSET))(a1);
		}

		static ::System::Boolean IsBelowBlackStyle(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISBELOWBLACKSTYLE_OFFSET))(a1);
		}

		static ::System::Boolean IsOpenWithCut(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISOPENWITHCUT_OFFSET))(a1);
		}

		static ::System::Boolean IsCloseWithCut(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISCLOSEWITHCUT_OFFSET))(a1);
		}

		static ::System::Boolean IsEnterWithCut(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISENTERWITHCUT_OFFSET))(a1);
		}

		static ::System::Boolean IsExitWithCut(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISEXITWITHCUT_OFFSET))(a1);
		}

		static ::System::Boolean IsEnterWithFastForwardStyle(::RPG::Client::UIController_TransitionStyle a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITRANSITIONMANAGER_ISENTERWITHFASTFORWARDSTYLE_OFFSET))(a1);
		}
	};
}
