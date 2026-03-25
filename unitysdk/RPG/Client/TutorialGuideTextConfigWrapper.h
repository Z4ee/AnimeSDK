#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigType.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigWrapper.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::Client { class TutorialGuideWeakConfigWrapper; }
namespace RPG::GameCore { class TutorialGuideTalkDataRow; }
namespace RPG::GameCore { class TutorialGuideTextAdaptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMDIRECTIONGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xA640750)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMWEAKDIRECTIONGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xA640C10)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xA6402A0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEWEAKGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xA640970)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETACTIONNAME_OFFSET UNITYSDK_OFFSET(0xA640DA0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETCONTENTPATH_OFFSET UNITYSDK_OFFSET(0xA640FC0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETGUIDETALKDATAROW_OFFSET UNITYSDK_OFFSET(0xA640DE0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETKEYMAPPATH_OFFSET UNITYSDK_OFFSET(0xA640EF0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTCONTENT_OFFSET UNITYSDK_OFFSET(0xA640D40)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTPATH_OFFSET UNITYSDK_OFFSET(0xA640E20)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xA641950)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_ISSHOWKEYMAP_OFFSET UNITYSDK_OFFSET(0xA641960)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xA6419C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET UNITYSDK_OFFSET(0xA6411A0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_OFFSET UNITYSDK_OFFSET(0xA641060)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETACTIONNAME_OFFSET UNITYSDK_OFFSET(0xA641570)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETGUIDETALKID_OFFSET UNITYSDK_OFFSET(0xA6415C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETTEXT_OFFSET UNITYSDK_OFFSET(0xA641230)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA640260)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA640440)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_1_OFFSET UNITYSDK_OFFSET(0xA6405D0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA6408C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETWEAKPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA640B10)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xA6417D0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xA641A80)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xA641A20)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideTextConfigWrapper_TypeDefinitionIndex = 55685;

	class TutorialGuideTextConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::System::String* _ActionName; // 0x38
		::RPG::GameCore::TutorialGuideTalkDataRow* _GuideTalkRow; // 0x40
		::RPG::GameCore::TutorialGuideTextAdaptConfig* _AdaptionConfig; // 0x48
		::RPG::Client::TutorialGuideConfigType _ConfigType; // 0x50
		::RPG::GameCore::TutorialGuideDirectionType _DirectionType; // 0x54
		::RPG::Client::TextID _TextContent; // 0x58

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__CTOR_OFFSET))(this, nodeIDList);
		}

		static ::RPG::Client::TutorialGuideTextConfigWrapper* CreateGuideText(::RPG::GameCore::TutorialGuideTextType textType, ::System::Collections::Generic::IList_1<::System::String*>* nodeIDList, ::System::Boolean isBlock, ::UnityEngine::Rect rect)
		{
			return ((::RPG::Client::TutorialGuideTextConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTextType, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEGUIDETEXT_OFFSET))(textType, nodeIDList, isBlock, rect);
		}

		static ::RPG::Client::TutorialGuideTextConfigWrapper* CreateCustomDirectionGuideText(::RPG::GameCore::TutorialGuideTextType textType, ::System::Collections::Generic::IList_1<::System::String*>* nodeIDList, ::RPG::GameCore::TutorialGuideDirectionType directionType)
		{
			return ((::RPG::Client::TutorialGuideTextConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTextType, ::System::Collections::Generic::IList_1<::System::String*>*, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMDIRECTIONGUIDETEXT_OFFSET))(textType, nodeIDList, directionType);
		}

		static ::RPG::Client::TutorialGuideWeakConfigWrapper* CreateWeakGuideText(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList, ::UnityEngine::Rect rect, ::System::Single lifeTime)
		{
			return ((::RPG::Client::TutorialGuideWeakConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEWEAKGUIDETEXT_OFFSET))(nodeIDList, rect, lifeTime);
		}

		static ::RPG::Client::TutorialGuideWeakConfigWrapper* CreateCustomWeakDirectionGuideText(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList, ::RPG::GameCore::TutorialGuideDirectionType directionType, ::System::Single lifeTime)
		{
			return ((::RPG::Client::TutorialGuideWeakConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::RPG::GameCore::TutorialGuideDirectionType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMWEAKDIRECTIONGUIDETEXT_OFFSET))(nodeIDList, directionType, lifeTime);
		}

		::RPG::Client::TextID GetTextContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTCONTENT_OFFSET))(this);
		}

		::System::String* GetActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETACTIONNAME_OFFSET))(this);
		}

		::RPG::GameCore::TutorialGuideTalkDataRow* GetGuideTalkDataRow()
		{
			return ((::RPG::GameCore::TutorialGuideTalkDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETGUIDETALKDATAROW_OFFSET))(this);
		}

		::System::String* GetTextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTPATH_OFFSET))(this);
		}

		::System::String* GetKeyMapPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETKEYMAPPATH_OFFSET))(this);
		}

		::System::String* GetContentPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETCONTENTPATH_OFFSET))(this);
		}

		::System::Void RefreshAdaption(::RPG::Client::RuntimeTutorialNode* tutorialNode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_OFFSET))(this, tutorialNode);
		}

		::System::Void RefreshAdaption_1(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET))(this, rect);
		}

		::System::Void SetText(::System::String* textID, ::System::String* textIDPC, ::System::String* textIDController)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETTEXT_OFFSET))(this, textID, textIDPC, textIDController);
		}

		::System::Void SetActionName(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETACTIONNAME_OFFSET))(this, actionName);
		}

		::System::Void SetGuideTalkID(::System::UInt32 guideTalkID, ::System::UInt32 guideTalkIDPC, ::System::UInt32 guideTalkIDController)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETGUIDETALKID_OFFSET))(this, guideTalkID, guideTalkIDPC, guideTalkIDController);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, rect);
		}

		::System::String* _GetPrefabPath(::RPG::GameCore::TutorialGuideDirectionType directionType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_OFFSET))(this, directionType);
		}

		::System::String* _GetPrefabPath_1(::System::Boolean isBlock, ::UnityEngine::Rect rect)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_1_OFFSET))(this, isBlock, rect);
		}

		::System::String* _GetWeakPrefabPath(::UnityEngine::Rect rect)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETWEAKPREFABPATH_OFFSET))(this, rect);
		}

		static ::RPG::GameCore::TutorialGuideTextAdaptConfig* _GetAdaptionConfig(::RPG::GameCore::TutorialGuideTextType textType)
		{
			return ((::RPG::GameCore::TutorialGuideTextAdaptConfig*(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET))(textType);
		}

		::RPG::Client::TutorialGuideConfigType get_ConfigType()
		{
			return ((::RPG::Client::TutorialGuideConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShowKeyMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_ISSHOWKEYMAP_OFFSET))(this);
		}

		::System::Boolean get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET__NEEDSYNC_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSetShowConfig(::UnityEngine::Rect P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET))(this);
		}
	};
}
