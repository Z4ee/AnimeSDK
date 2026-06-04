#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1037;
class Class_0_16E4307DCC419505_1038;
class Class_0_16E4307DCC419505_1039;
class Class_0_16E4307DCC419505_1040;
class Class_0_16E4307DCC419505_1041;
class Class_0_16E4307DCC419505_1042;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET UNITYSDK_OFFSET(0xB4415C0)
#define RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0xB43F9E0)
#define RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET UNITYSDK_OFFSET(0xB441780)
#define RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0xB440AC0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0xB440E60)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0xB441020)
#define RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xB4419F0)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET UNITYSDK_OFFSET(0xB43D890)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET UNITYSDK_OFFSET(0xB441A60)
#define RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0xB43ED90)
#define RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0xB4414F0)
#define RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET UNITYSDK_OFFSET(0xB43F210)
#define RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB43F060)
#define RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB440940)
#define RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB440920)
#define RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET UNITYSDK_OFFSET(0xB440960)
#define RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xB43E590)
#define RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET UNITYSDK_OFFSET(0xB43D540)
#define RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xB440A40)
#define RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET UNITYSDK_OFFSET(0xB4411F0)
#define RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB440950)
#define RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB440930)
#define RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET UNITYSDK_OFFSET(0xB440C80)
#define RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xB441AD0)
#define RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET UNITYSDK_OFFSET(0xB4413F0)
#define RPG_CLIENT_BOOKLETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB43F850)
#define RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET UNITYSDK_OFFSET(0xB441280)
#define RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB441490)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletView_TypeDefinitionIndex = 67637;

	class BookletView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1040*>* _Plugins; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1041*>* _UpdatableList; // 0x20
		::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* _PanelCreator; // 0x28
		::System::Action_1<::System::UInt32>* _PanelDestroyer; // 0x30
		::RPG::Client::UIController* _Owner_k__BackingField; // 0x38
		::RPG::Client::Booklet* _Context_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Owner()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::Client::Booklet* get_Context()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::RPG::Client::Booklet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Booklet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET))(this, a1);
		}

		::System::Void GotoSection(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET))(this, a1, a2);
		}

		::System::Void AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET))(this);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET))(this);
		}

		::System::Void ForceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET))(this);
		}

		::System::Boolean CheckIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET))(this);
		}

		::System::Boolean CheckIsReplaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* a1, ::RPG::Client::Booklet* a2, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1037* InstantiateElement(::UnityEngine::Transform* a1, ::Class_0_16E4307DCC419505_1037* a2, ::RPG::GameCore::Booklet::ElementConfig* a3)
		{
			return ((::Class_0_16E4307DCC419505_1037*(*)(::PVOID, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_1037*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DestroyElement(::Class_0_16E4307DCC419505_1037*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1037*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1037* FindElement(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_1037*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET))(this, a1);
		}

		::System::Void FireEvent(::Class_0_16E4307DCC419505_1042* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET))(this, a1);
		}

		::System::Void AttachPlugin(::Class_0_16E4307DCC419505_1040* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1040*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET))(this, a1);
		}

		::System::Void Accept(::Class_0_16E4307DCC419505_1038* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1038*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET))(this, a1);
		}

		::System::Void CreatePanel(::RPG::Client::BookletLuaPanelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET))(this, a1);
		}

		::System::Void DestroyPanel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET))(this);
		}

		::System::String* _GetPrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void _DetachAllPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET))(this);
		}

		::System::Void _ClearUpdatableList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET))(this);
		}
	};
}
