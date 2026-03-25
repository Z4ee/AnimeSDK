#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEAUTOMATCHGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xA63C690)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xA63C490)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETALLNODEID_OFFSET UNITYSDK_OFFSET(0xA63DAE0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETX_OFFSET UNITYSDK_OFFSET(0xA63DB60)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETY_OFFSET UNITYSDK_OFFSET(0xA63DBC0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA63DB20)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xA63CFD0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEX_OFFSET UNITYSDK_OFFSET(0xA63DC20)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEY_OFFSET UNITYSDK_OFFSET(0xA63DC80)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xA63EA80)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA63EA90)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xA63D120)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__COPYSIZE_OFFSET UNITYSDK_OFFSET(0xA63EA20)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__HASMULTINODE_OFFSET UNITYSDK_OFFSET(0xA63E200)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xA63E9E0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET UNITYSDK_OFFSET(0xA63EA40)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_OVERRIDEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA63CF20)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETCUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA63C640)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDESHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xA63CD70)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xA63CF80)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA63EAA0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET__COPYSIZE_OFFSET UNITYSDK_OFFSET(0xA63EA30)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SYNC_OFFSET UNITYSDK_OFFSET(0xA63DCE0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA63C3E0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA63C2E0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xA63E990)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideConfigWrapper_TypeDefinitionIndex = 55682;

	class TutorialGuideConfigWrapper : public ::System::Object
	{
	public:
		::RPG::GameCore::TutorialGuideShowConfig* _ShowConfig; // 0x10
		::System::Collections::Generic::IList_1<::System::String*>* _NodeIDList; // 0x18
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x20
		::System::String* _PrefabPath; // 0x28
		::System::UInt32 _InstanceID_k__BackingField; // 0x30
		::System::Boolean __CopySize_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_1_OFFSET))(this, nodeIDList);
		}

		static ::RPG::Client::TutorialGuideConfigWrapper* CreateGuideHint(::RPG::GameCore::TutorialGuideHintType hintType, ::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::RPG::Client::TutorialGuideConfigWrapper*(*)(::RPG::GameCore::TutorialGuideHintType, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEGUIDEHINT_OFFSET))(hintType, nodeIDList);
		}

		static ::RPG::Client::TutorialGuideConfigWrapper* CreateAutoMatchGuideHint(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList, ::System::Boolean isBlock, ::UnityEngine::Rect rect, ::System::Boolean isWeakGuide)
		{
			return ((::RPG::Client::TutorialGuideConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEAUTOMATCHGUIDEHINT_OFFSET))(nodeIDList, isBlock, rect, isWeakGuide);
		}

		::System::Void SetGuideShowConfig(::RPG::GameCore::TutorialGuideShowConfig* config, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowConfig*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDESHOWCONFIG_OFFSET))(this, config, rect);
		}

		::System::Void OverridePrefabPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_OVERRIDEPREFABPATH_OFFSET))(this, path);
		}

		::System::Void SetGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDEUICONFIG_OFFSET))(this, Config);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode()
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETRUNTIMETUTORIALNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* GetAllNodeID()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETALLNODEID_OFFSET))(this);
		}

		::System::Void SetCustomPrefabPath(::System::String* prefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETCUSTOMPREFABPATH_OFFSET))(this, prefabPath);
		}

		::System::String* GetPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETPREFABPATH_OFFSET))(this);
		}

		::System::Single GetOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETX_OFFSET))(this);
		}

		::System::Single GetOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETY_OFFSET))(this);
		}

		::System::Single GetScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEX_OFFSET))(this);
		}

		::System::Single GetScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEY_OFFSET))(this);
		}

		::System::Void Sync(::UnityEngine::RectTransform* rt, ::RPG::Client::RuntimeTutorialNode* tutorialNode, ::System::Boolean copySize, ::System::Boolean copyPos, ::System::Boolean useMultiNodeSync)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::RuntimeTutorialNode*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SYNC_OFFSET))(this, rt, tutorialNode, copySize, copyPos, useMultiNodeSync);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, rect);
		}

		::System::Boolean get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__NEEDSYNC_OFFSET))(this);
		}

		::System::Boolean get__CopySize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__COPYSIZE_OFFSET))(this);
		}

		::System::Void set__CopySize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET__COPYSIZE_OFFSET))(this, value);
		}

		::System::Boolean get__UseOriginRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET))(this);
		}

		::RPG::Client::TutorialGuideConfigType get_ConfigType()
		{
			return ((::RPG::Client::TutorialGuideConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::String* get_NodeID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_NODEID_OFFSET))(this);
		}

		::System::Boolean get__HasMultiNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__HASMULTINODE_OFFSET))(this);
		}
	};
}
