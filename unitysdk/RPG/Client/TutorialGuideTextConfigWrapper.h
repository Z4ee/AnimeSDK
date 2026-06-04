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

#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMDIRECTIONGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xCAF72C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMWEAKDIRECTIONGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xCAF76F0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xCAF6EA0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEWEAKGUIDETEXT_OFFSET UNITYSDK_OFFSET(0xCAF7480)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETACTIONNAME_OFFSET UNITYSDK_OFFSET(0xCAF7880)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETCONTENTPATH_OFFSET UNITYSDK_OFFSET(0xCAF7AA0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETGUIDETALKDATAROW_OFFSET UNITYSDK_OFFSET(0xCAF78C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETKEYMAPPATH_OFFSET UNITYSDK_OFFSET(0xCAF79D0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTCONTENT_OFFSET UNITYSDK_OFFSET(0xCAF7820)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GETTEXTPATH_OFFSET UNITYSDK_OFFSET(0xCAF7900)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xCAF8450)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET_ISSHOWKEYMAP_OFFSET UNITYSDK_OFFSET(0xCAF8460)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xCAF84C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET UNITYSDK_OFFSET(0xCAF7C80)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_OFFSET UNITYSDK_OFFSET(0xCAF7B40)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETACTIONNAME_OFFSET UNITYSDK_OFFSET(0xCAF8070)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETGUIDETALKID_OFFSET UNITYSDK_OFFSET(0xCAF80C0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETTEXT_OFFSET UNITYSDK_OFFSET(0xCAF7D10)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF6E60)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF7010)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_1_OFFSET UNITYSDK_OFFSET(0xCAF7170)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAF73F0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETWEAKPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAF7620)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF82D0)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xCAF8580)
#define RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF8520)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideTextConfigWrapper_TypeDefinitionIndex = 63823;

	class TutorialGuideTextConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::System::String* _ActionName; // 0x38
		::RPG::GameCore::TutorialGuideTextAdaptConfig* _AdaptionConfig; // 0x40
		::RPG::GameCore::TutorialGuideTalkDataRow* _GuideTalkRow; // 0x48
		::RPG::Client::TextID _TextContent; // 0x50
		::RPG::Client::TutorialGuideConfigType _ConfigType; // 0x60
		::RPG::GameCore::TutorialGuideDirectionType _DirectionType; // 0x64

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialGuideTextConfigWrapper* CreateGuideText(::RPG::GameCore::TutorialGuideTextType a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::System::Boolean a3, ::UnityEngine::Rect a4)
		{
			return ((::RPG::Client::TutorialGuideTextConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTextType, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEGUIDETEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TutorialGuideTextConfigWrapper* CreateCustomDirectionGuideText(::RPG::GameCore::TutorialGuideTextType a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::RPG::GameCore::TutorialGuideDirectionType a3)
		{
			return ((::RPG::Client::TutorialGuideTextConfigWrapper*(*)(::RPG::GameCore::TutorialGuideTextType, ::System::Collections::Generic::IList_1<::System::String*>*, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMDIRECTIONGUIDETEXT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TutorialGuideWeakConfigWrapper* CreateWeakGuideText(::System::Collections::Generic::IList_1<::System::String*>* a1, ::UnityEngine::Rect a2, ::System::Single a3)
		{
			return ((::RPG::Client::TutorialGuideWeakConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATEWEAKGUIDETEXT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TutorialGuideWeakConfigWrapper* CreateCustomWeakDirectionGuideText(::System::Collections::Generic::IList_1<::System::String*>* a1, ::RPG::GameCore::TutorialGuideDirectionType a2, ::System::Single a3)
		{
			return ((::RPG::Client::TutorialGuideWeakConfigWrapper*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::RPG::GameCore::TutorialGuideDirectionType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_CREATECUSTOMWEAKDIRECTIONGUIDETEXT_OFFSET))(a1, a2, a3);
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

		::System::Void RefreshAdaption(::RPG::Client::RuntimeTutorialNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_OFFSET))(this, a1);
		}

		::System::Void RefreshAdaption_1(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_REFRESHADAPTION_1_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETACTIONNAME_OFFSET))(this, a1);
		}

		::System::Void SetGuideTalkID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER_SETGUIDETALKID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnSetShowConfig(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__ONSETSHOWCONFIG_OFFSET))(this, a1);
		}

		::System::String* _GetPrefabPath(::RPG::GameCore::TutorialGuideDirectionType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialGuideDirectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* _GetPrefabPath_1(::System::Boolean a1, ::UnityEngine::Rect a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETPREFABPATH_1_OFFSET))(this, a1, a2);
		}

		::System::String* _GetWeakPrefabPath(::UnityEngine::Rect a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETWEAKPREFABPATH_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::TutorialGuideTextAdaptConfig* _GetAdaptionConfig(::RPG::GameCore::TutorialGuideTextType a1)
		{
			return ((::RPG::GameCore::TutorialGuideTextAdaptConfig*(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER__GETADAPTIONCONFIG_OFFSET))(a1);
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

		::System::Void __iFixBaseProxy__OnSetShowConfig(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY__ONSETSHOWCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_get__NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDETEXTCONFIGWRAPPER___IFIXBASEPROXY_GET__NEEDSYNC_OFFSET))(this);
		}
	};
}
