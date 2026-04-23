#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigType.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigWrapper.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTalkListType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::GameCore { class TutorialGuideTalkListAdaptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEAUTOGUIDETALKDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0xB395DC0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIGWITHOUTNODE_OFFSET UNITYSDK_OFFSET(0xB3963B0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0xB3961A0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GETGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xB3964C0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xB396D00)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xB396D10)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET UNITYSDK_OFFSET(0xB3965E0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_OFFSET UNITYSDK_OFFSET(0xB396500)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_SETGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xB396470)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB395DB0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xB395EE0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_1_OFFSET UNITYSDK_OFFSET(0xB396070)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_OFFSET UNITYSDK_OFFSET(0xB3962A0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xB396910)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xB396DC0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xB396D60)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideTalkDialogConfigWrapper_TypeDefinitionIndex = 62887;

	class TutorialGuideTalkDialogConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _GuideIDList; // 0x38
		::RPG::GameCore::TutorialGuideTalkListAdaptConfig* _AdaptionConfig; // 0x40
		::RPG::GameCore::TutorialGuideDirectionType _DirectionType; // 0x48

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__CTOR_OFFSET))(this, nodeIDList);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateAutoGuideTalkDialogConfig(::System::String* nodeID, ::RPG::GameCore::TutorialGuideTalkListType type, ::UnityEngine::Rect rect)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::System::String*, ::RPG::GameCore::TutorialGuideTalkListType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEAUTOGUIDETALKDIALOGCONFIG_OFFSET))(nodeID, type, rect);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateGuideTalkDialogConfig(::System::String* nodeID, ::RPG::GameCore::TutorialGuideTalkListType type, ::RPG::GameCore::TutorialGuideDirectionType directionType)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::System::String*, ::RPG::GameCore::TutorialGuideTalkListType, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIG_OFFSET))(nodeID, type, directionType);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateGuideTalkDialogConfigWithoutNode(::RPG::GameCore::TutorialGuideTalkListType type, ::RPG::GameCore::TutorialGuideDirectionType directionType)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTalkListType, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIGWITHOUTNODE_OFFSET))(type, directionType);
		}

		::System::Void SetGuideIDList(::System::Collections::Generic::IList_1<::System::UInt32>* guideIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_SETGUIDEIDLIST_OFFSET))(this, guideIDList);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetGuideIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GETGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void RefreshAdaption(::RPG::Client::RuntimeTutorialNode* tutorialNode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_OFFSET))(this, tutorialNode);
		}

		::System::Void RefreshAdaption_1(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET))(this, rect);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, rect);
		}

		::System::Void _Init(::RPG::GameCore::TutorialGuideDirectionType directionType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_OFFSET))(this, directionType);
		}

		::System::Void _Init_1(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_1_OFFSET))(this, rect);
		}

		static ::RPG::GameCore::TutorialGuideTalkListAdaptConfig* _GetAdaptionConfig(::RPG::GameCore::TutorialGuideTalkListType type)
		{
			return ((::RPG::GameCore::TutorialGuideTalkListAdaptConfig*(*)(::RPG::GameCore::TutorialGuideTalkListType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET))(type);
		}

		::RPG::Client::TutorialGuideConfigType get_ConfigType()
		{
			return ((::RPG::Client::TutorialGuideConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET))(this);
		}

		::System::Boolean get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET__NEEDSYNC_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSetShowConfig(::UnityEngine::Rect P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET))(this);
		}
	};
}
