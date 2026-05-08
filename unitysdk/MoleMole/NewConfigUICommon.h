#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_413;
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigUICommon_DamageText; }
namespace MoleMole { class ConfigUICommon_GameStart; }
namespace MoleMole { class ConfigUICommon_HollowCard; }
namespace MoleMole { class ConfigUICommon_I18NImage; }
namespace MoleMole { class ConfigUICommon_Input; }
namespace MoleMole { class ConfigUICommon_Misc; }
namespace MoleMole { class ConfigUICommon_Performance; }
namespace MoleMole { class ConfigUICommon_UIPage; }
namespace MoleMole { class ConfigUIDamageTextItem; }
namespace MoleMole { class ConfigUIGameStartItem; }
namespace MoleMole { class ConfigUIHollowCardItem; }
namespace MoleMole { class ConfigUII18NImageItem; }
namespace MoleMole { class ConfigUIInputItem; }
namespace MoleMole { class ConfigUIMiscItem; }
namespace MoleMole { class ConfigUIPageItem; }
namespace MoleMole { class ConfigUIPerformanceItem; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEWCONFIGUICOMMON_GETALLSUBCONFIGS_OFFSET UNITYSDK_OFFSET(0x15B47CD0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETBUTTONCLICKCOLDDOWN_OFFSET UNITYSDK_OFFSET(0x15B49460)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETCARDOPTIONBGCOLOR_OFFSET UNITYSDK_OFFSET(0x15B48790)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETCARDOPTIONRARITYBGCOLOR_OFFSET UNITYSDK_OFFSET(0x15B48A30)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETGENERALICONBADGEDATA_OFFSET UNITYSDK_OFFSET(0x15B49250)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETITEMRARITYBGCOLOR_OFFSET UNITYSDK_OFFSET(0x15B48CF0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETOVERRIDESIZE_OFFSET UNITYSDK_OFFSET(0x15B48390)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETROLERARITYICONPATH_OFFSET UNITYSDK_OFFSET(0x15B484F0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADENDEFFECT_OFFSET UNITYSDK_OFFSET(0x15B481D0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADLOOPEFFECT_OFFSET UNITYSDK_OFFSET(0x15B48010)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADSTARTEFFECT_OFFSET UNITYSDK_OFFSET(0x15B47E50)
#define MOLEMOLE_NEWCONFIGUICOMMON_GETUITOKENDIALOGCONFIGSBYTYPE_OFFSET UNITYSDK_OFFSET(0x15B48F80)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x15B47BB0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONGAMESTART_OFFSET UNITYSDK_OFFSET(0x15B47A20)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONHOLLOWCARD_OFFSET UNITYSDK_OFFSET(0x15B47B60)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONI18NIMAGE_OFFSET UNITYSDK_OFFSET(0x15B47C10)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONINPUT_OFFSET UNITYSDK_OFFSET(0x15B47C70)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONMISC_OFFSET UNITYSDK_OFFSET(0x15B47A70)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15B47AC0)
#define MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONUIPAGE_OFFSET UNITYSDK_OFFSET(0x15B47B10)
#define MOLEMOLE_NEWCONFIGUICOMMON__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B49550)
#define MOLEMOLE_NEWCONFIGUICOMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x15B494F0)

namespace MoleMole
{
	inline static constexpr unsigned int NewConfigUICommon_TypeDefinitionIndex = 49038;

	class NewConfigUICommon : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::UnityEngine::Color* StaticGet_S_DefaultAvatarUIColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NewConfigUICommon_TypeDefinitionIndex)->GetStaticField(0x10410);
		}
		::MoleMole::ConfigUIGameStartItem* GameStartConfig; // 0x58
		::MoleMole::ConfigUIMiscItem* MiscsConfig; // 0x60
		::MoleMole::ConfigUIPerformanceItem* PerformanceConfig; // 0x68
		::MoleMole::ConfigUIPageItem* UIPageConfig; // 0x70
		::MoleMole::ConfigUIHollowCardItem* HollowConfig; // 0x78
		::MoleMole::ConfigUIDamageTextItem* DamageTextConfig; // 0x80
		::MoleMole::ConfigUII18NImageItem* I18NImage; // 0x88
		::MoleMole::ConfigUIInputItem* Input; // 0x90
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* _allSubConfigs; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON__CCTOR_OFFSET))();
		}

		::MoleMole::ConfigUICommon_GameStart* get_ConfigUICommonGameStart()
		{
			return ((::MoleMole::ConfigUICommon_GameStart*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONGAMESTART_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Misc* get_ConfigUICommonMisc()
		{
			return ((::MoleMole::ConfigUICommon_Misc*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONMISC_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Performance* get_ConfigUICommonPerformance()
		{
			return ((::MoleMole::ConfigUICommon_Performance*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONPERFORMANCE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_UIPage* get_ConfigUICommonUIPage()
		{
			return ((::MoleMole::ConfigUICommon_UIPage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONUIPAGE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_HollowCard* get_ConfigUICommonHollowCard()
		{
			return ((::MoleMole::ConfigUICommon_HollowCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONHOLLOWCARD_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_DamageText* get_ConfigUICommonDamageText()
		{
			return ((::MoleMole::ConfigUICommon_DamageText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONDAMAGETEXT_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_I18NImage* get_ConfigUICommonI18NImage()
		{
			return ((::MoleMole::ConfigUICommon_I18NImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONI18NIMAGE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input* get_ConfigUICommonInput()
		{
			return ((::MoleMole::ConfigUICommon_Input*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GET_CONFIGUICOMMONINPUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>* GetAllSubConfigs()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_413*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETALLSUBCONFIGS_OFFSET))(this);
		}

		::System::String* GetStanimaOverloadStartEffect(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADSTARTEFFECT_OFFSET))(this, level);
		}

		::System::String* GetStanimaOverloadLoopEffect(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADLOOPEFFECT_OFFSET))(this, level);
		}

		::System::String* GetStanimaOverloadEndEffect(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETSTANIMAOVERLOADENDEFFECT_OFFSET))(this, level);
		}

		::UnityEngine::Vector2 GetOverrideSize(::System::String* key)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETOVERRIDESIZE_OFFSET))(this, key);
		}

		::System::String* GetRoleRarityIconPath(::System::Int32 rolerarity, ::System::Boolean issamll)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETROLERARITYICONPATH_OFFSET))(this, rolerarity, issamll);
		}

		::UnityEngine::Color GetCardOptionBgColor(::System::String* type)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETCARDOPTIONBGCOLOR_OFFSET))(this, type);
		}

		::UnityEngine::Color GetCardOptionRarityBgColor(::System::Int32 type)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETCARDOPTIONRARITYBGCOLOR_OFFSET))(this, type);
		}

		::UnityEngine::Color GetItemRarityBgColor(::System::Int32 itemRarity)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETITEMRARITYBGCOLOR_OFFSET))(this, itemRarity);
		}

		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* GetUiTokenDialogConfigsByType(::System::String* uiType)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETUITOKENDIALOGCONFIGSBYTYPE_OFFSET))(this, uiType);
		}

		::MoleMole::ConfigGeneralIconBadgeColor* GetGeneralIconBadgeData(::System::Int32 id)
		{
			return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETGENERALICONBADGEDATA_OFFSET))(this, id);
		}

		::System::Single GetButtonClickColdDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGUICOMMON_GETBUTTONCLICKCOLDDOWN_OFFSET))(this);
		}
	};
}
