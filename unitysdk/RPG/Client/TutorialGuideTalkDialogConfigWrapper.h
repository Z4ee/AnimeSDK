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

#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEAUTOGUIDETALKDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF5EC0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIGWITHOUTNODE_OFFSET UNITYSDK_OFFSET(0xCAF6490)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF6290)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GETGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xCAF65A0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xCAF6D60)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xCAF6D70)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET UNITYSDK_OFFSET(0xCAF66C0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_OFFSET UNITYSDK_OFFSET(0xCAF65E0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_SETGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xCAF6550)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF5EB0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF5FD0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_1_OFFSET UNITYSDK_OFFSET(0xCAF6160)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_OFFSET UNITYSDK_OFFSET(0xCAF6380)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF69F0)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xCAF6E20)
#define RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF6DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideTalkDialogConfigWrapper_TypeDefinitionIndex = 63822;

	class TutorialGuideTalkDialogConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::RPG::GameCore::TutorialGuideTalkListAdaptConfig* _AdaptionConfig; // 0x38
		::System::Collections::Generic::IList_1<::System::UInt32>* _GuideIDList; // 0x40
		::RPG::GameCore::TutorialGuideDirectionType _DirectionType; // 0x48

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateAutoGuideTalkDialogConfig(::System::String* a1, ::RPG::GameCore::TutorialGuideTalkListType a2, ::UnityEngine::Rect a3)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::System::String*, ::RPG::GameCore::TutorialGuideTalkListType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEAUTOGUIDETALKDIALOGCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateGuideTalkDialogConfig(::System::String* a1, ::RPG::GameCore::TutorialGuideTalkListType a2, ::RPG::GameCore::TutorialGuideDirectionType a3)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::System::String*, ::RPG::GameCore::TutorialGuideTalkListType, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TutorialGuideTalkDialogConfigWrapper* CreateGuideTalkDialogConfigWithoutNode(::RPG::GameCore::TutorialGuideTalkListType a1, ::RPG::GameCore::TutorialGuideDirectionType a2)
		{
			return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTalkListType, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_CREATEGUIDETALKDIALOGCONFIGWITHOUTNODE_OFFSET))(a1, a2);
		}

		::System::Void SetGuideIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_SETGUIDEIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetGuideIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GETGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void RefreshAdaption(::RPG::Client::RuntimeTutorialNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_OFFSET))(this, a1);
		}

		::System::Void RefreshAdaption_1(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET))(this, a1);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, a1);
		}

		::System::Void _Init(::RPG::GameCore::TutorialGuideDirectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_OFFSET))(this, a1);
		}

		::System::Void _Init_1(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__INIT_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::TutorialGuideTalkListAdaptConfig* _GetAdaptionConfig(::RPG::GameCore::TutorialGuideTalkListType a1)
		{
			return ((::RPG::GameCore::TutorialGuideTalkListAdaptConfig*(*)(::RPG::GameCore::TutorialGuideTalkListType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET))(a1);
		}

		::RPG::Client::TutorialGuideConfigType get_ConfigType()
		{
			return ((::RPG::Client::TutorialGuideConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET))(this);
		}

		::System::Boolean get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER_GET__NEEDSYNC_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSetShowConfig(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETALKDIALOGCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET))(this);
		}
	};
}
