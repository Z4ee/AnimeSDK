#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_987;
class Class_0_16E4307DCC419505_988;
class Class_0_16E4307DCC419505_989;
class Class_0_16E4307DCC419505_990;
class Class_0_16E4307DCC419505_991;
class Class_0_16E4307DCC419505_992;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9EA5030)
#define RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x9EA34F0)
#define RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET UNITYSDK_OFFSET(0x9EA51C0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x9EA46A0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0x9EA49B0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0x9EA4B30)
#define RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x9EA5300)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET UNITYSDK_OFFSET(0x9EA15B0)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET UNITYSDK_OFFSET(0x9EA5360)
#define RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x9EA28B0)
#define RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x9EA4F60)
#define RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET UNITYSDK_OFFSET(0x9EA2D60)
#define RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x9EA2BE0)
#define RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9EA4520)
#define RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x9EA4500)
#define RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET UNITYSDK_OFFSET(0x9EA4540)
#define RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x9EA2090)
#define RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9EA1270)
#define RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0x9EA4620)
#define RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET UNITYSDK_OFFSET(0x9EA4CC0)
#define RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9EA4530)
#define RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x9EA4510)
#define RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x9EA4820)
#define RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9EA53C0)
#define RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET UNITYSDK_OFFSET(0x9EA4E90)
#define RPG_CLIENT_BOOKLETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA33B0)
#define RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET UNITYSDK_OFFSET(0x9EA4D50)
#define RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9EA4F00)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletView_TypeDefinitionIndex = 66697;

	class BookletView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_990*>* _Plugins; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_991*>* _UpdatableList; // 0x20
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

		::System::Void set_Owner(::RPG::Client::UIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET))(this, value);
		}

		::RPG::Client::Booklet* get_Context()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::RPG::Client::Booklet* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Booklet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void GotoSection(::System::UInt32 sectionID, ::System::Int32 spreadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET))(this, sectionID, spreadIndex);
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

		::System::Void Init(::RPG::Client::UIController* owner, ::RPG::Client::Booklet* context, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* panelCreator, ::System::Action_1<::System::UInt32>* panelDestroyer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET))(this, owner, context, panelCreator, panelDestroyer);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_987* InstantiateElement(::UnityEngine::Transform* root, ::Class_0_16E4307DCC419505_987* parent, ::RPG::GameCore::Booklet::ElementConfig* config)
		{
			return ((::Class_0_16E4307DCC419505_987*(*)(::PVOID, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_987*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET))(this, root, parent, config);
		}

		::System::Void DestroyElement(::Class_0_16E4307DCC419505_987*& element)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_987*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET))(this, element);
		}

		::Class_0_16E4307DCC419505_987* FindElement(::System::UInt32 elementID)
		{
			return ((::Class_0_16E4307DCC419505_987*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET))(this, elementID);
		}

		::System::Void FireEvent(::Class_0_16E4307DCC419505_992* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_992*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET))(this, evt);
		}

		::System::Void AttachPlugin(::Class_0_16E4307DCC419505_990* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_990*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET))(this, plugin);
		}

		::System::Void Accept(::Class_0_16E4307DCC419505_988* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_988*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Void CreatePanel(::RPG::Client::BookletLuaPanelParam* panelParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET))(this, panelParam);
		}

		::System::Void DestroyPanel(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET))(this, panelID);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET))(this);
		}

		::System::String* _GetPrefabPath(::System::UInt32 prefabID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET))(this, prefabID);
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
