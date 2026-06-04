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

#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEAUTOMATCHGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xCAF3470)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEGUIDEHINT_OFFSET UNITYSDK_OFFSET(0xCAF32A0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETALLNODEID_OFFSET UNITYSDK_OFFSET(0xCAF47F0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETX_OFFSET UNITYSDK_OFFSET(0xCAF4870)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETOFFSETY_OFFSET UNITYSDK_OFFSET(0xCAF48D0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAF4830)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAF3D40)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEX_OFFSET UNITYSDK_OFFSET(0xCAF4930)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETSCALEY_OFFSET UNITYSDK_OFFSET(0xCAF4990)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xCAF5780)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCAF5790)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xCAF3E90)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__COPYSIZE_OFFSET UNITYSDK_OFFSET(0xCAF5720)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__HASMULTINODE_OFFSET UNITYSDK_OFFSET(0xCAF4F10)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xCAF56E0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET UNITYSDK_OFFSET(0xCAF5740)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_OVERRIDEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAF3C90)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETCUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAF3420)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDESHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF3B10)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDEUICONFIG_OFFSET UNITYSDK_OFFSET(0xCAF3CF0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCAF57A0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET__COPYSIZE_OFFSET UNITYSDK_OFFSET(0xCAF5730)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SYNC_OFFSET UNITYSDK_OFFSET(0xCAF49F0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCAF31F0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF30F0)
#define RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF5690)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideConfigWrapper_TypeDefinitionIndex = 63820;

	class TutorialGuideConfigWrapper : public ::System::Object
	{
	public:
		::RPG::GameCore::TutorialGuideShowConfig* _ShowConfig; // 0x10
		::System::Collections::Generic::IList_1<::System::String*>* _NodeIDList; // 0x18
		::System::String* _PrefabPath; // 0x20
		::RPG::GameCore::TutorialGuideUIContextConfig* _GuideUIConfig; // 0x28
		::System::Boolean __CopySize_k__BackingField; // 0x30
		::System::UInt32 _InstanceID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialGuideConfigWrapper* CreateGuideHint(::RPG::GameCore::TutorialGuideHintType a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
		{
			return ((::RPG::Client::TutorialGuideConfigWrapper*(*)(::RPG::GameCore::TutorialGuideHintType, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEGUIDEHINT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TutorialGuideConfigWrapper* CreateAutoMatchGuideHint(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Boolean a2, ::UnityEngine::Rect a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::TutorialGuideConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_CREATEAUTOMATCHGUIDEHINT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SetGuideShowConfig(::RPG::GameCore::TutorialGuideShowConfig* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowConfig*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDESHOWCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void OverridePrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_OVERRIDEPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void SetGuideUIConfig(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETGUIDEUICONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode()
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETRUNTIMETUTORIALNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* GetAllNodeID()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GETALLNODEID_OFFSET))(this);
		}

		::System::Void SetCustomPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SETCUSTOMPREFABPATH_OFFSET))(this, a1);
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

		::System::Void Sync(::UnityEngine::RectTransform* a1, ::RPG::Client::RuntimeTutorialNode* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::RuntimeTutorialNode*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__NEEDSYNC_OFFSET))(this);
		}

		::System::Boolean get__CopySize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_GET__COPYSIZE_OFFSET))(this);
		}

		::System::Void set__CopySize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET__COPYSIZE_OFFSET))(this, a1);
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

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDECONFIGWRAPPER_SET_INSTANCEID_OFFSET))(this, a1);
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
