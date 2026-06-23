#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class AvatarShowSettingDefault; }
namespace MoleMole { class ConfigUIAvatarShow; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETAVATARSHOWSETTINGCOMMON_OFFSET UNITYSDK_OFFSET(0x1A07C690)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETCOMMONLIGHTSETTINGBYTYPE_OFFSET UNITYSDK_OFFSET(0x1A07BC70)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETDEFAULTUIAVATARSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07BAA0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETHOLLOWCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1A07AB50)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETPAGESWITCHINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A07B9F0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETRENDERLAYERBYUIRTSHOWLAYER_OFFSET UNITYSDK_OFFSET(0x1A07B280)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUI3DMODELSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07E490)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARMAINPAGEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A07D250)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07C340)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYMAINPAGEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A07DC20)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07D4C0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIEQUIPSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07E1E0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIVOLUMEASSETPATH_OFFSET UNITYSDK_OFFSET(0x1A07BFE0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIWEAPONSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A07DF30)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIAVATARSHOWSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A07B330)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIBUDDYSHOWSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A07ABD0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1A07A740)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A07A850)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADUIAVATARDATAFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A07A930)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARUIMAINPAGERUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1A07CFB0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYUIMAINPAGERUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1A07D8D0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07E740)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData_TypeDefinitionIndex = 82012;

	class ConfigUIAvatarShowData : public ::System::Object
	{
	public:
		static ::MoleMole::ConfigUIAvatarShow** StaticGet__configUIAvatarShow()
		{
			return (::MoleMole::ConfigUIAvatarShow**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x30540);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>** StaticGet_templist()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShowData_TypeDefinitionIndex)->GetStaticField(0x30548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA__CCTOR_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
		}

		static ::MoleMole::ConfigUIAvatarShow* GetHollowCameraConfig()
		{
			return ((::MoleMole::ConfigUIAvatarShow*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETHOLLOWCAMERACONFIG_OFFSET))();
		}

		static ::System::Void ReloadUIAvatarDataFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_RELOADUIAVATARDATAFROMFILE_OFFSET))(isAync, complete);
		}

		static ::System::Void ReBuildUIBuddyShowSettingData(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIBUDDYSHOWSETTINGDATA_OFFSET))(isAync, complete);
		}

		static ::System::Int32 GetRenderLayerByUIRTShowLayer(::Enum_3_BB702611CCC85D7E showLayer)
		{
			return ((::System::Int32(*)(::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETRENDERLAYERBYUIRTSHOWLAYER_OFFSET))(showLayer);
		}

		static ::System::Void ReBuildUIAvatarShowSettingData(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_REBUILDUIAVATARSHOWSETTINGDATA_OFFSET))(isAync, complete);
		}

		static ::System::Single GetPageSwitchInterval()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETPAGESWITCHINTERVAL_OFFSET))();
		}

		static ::MoleMole::AvatarShowSettingDefault* GetDefaultUiAvatarShowSetting()
		{
			return ((::MoleMole::AvatarShowSettingDefault*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETDEFAULTUIAVATARSHOWSETTING_OFFSET))();
		}

		static ::MoleMole::UIAvatarLightSetting* GetCommonLightSettingByType(::System::String* ctrlName)
		{
			return ((::MoleMole::UIAvatarLightSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETCOMMONLIGHTSETTINGBYTYPE_OFFSET))(ctrlName);
		}

		static ::System::String* GetUIVolumeAssetPath(::System::String* ctrlName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIVOLUMEASSETPATH_OFFSET))(ctrlName);
		}

		static ::MoleMole::AvatarShowSetting* GetUIAvatarShowSetting(::System::String* ctrlName, ::System::Int32 AvatarID, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIndex)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARSHOWSETTING_OFFSET))(ctrlName, AvatarID, ShowTypeIndex, fromTypeName, showSettingTypeIndex);
		}

		static ::System::Boolean TryGetAvatarUIMainPageRuntimeInfo(::System::Int32 avatarID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETAVATARUIMAINPAGERUNTIMEINFO_OFFSET))(avatarID, info);
		}

		static ::System::String* GetUIAvatarMainPagePrefabPath(::System::Int32 avatarID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIAVATARMAINPAGEPREFABPATH_OFFSET))(avatarID);
		}

		static ::MoleMole::AvatarShowSetting* GetUIBuddyShowSetting(::System::String* ctrlName, ::System::Int32 BuddyID, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYSHOWSETTING_OFFSET))(ctrlName, BuddyID, ShowTypeIndex, fromTypeName);
		}

		static ::System::Boolean TryGetBuddyUIMainPageRuntimeInfo(::System::Int32 buddyID, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_TRYGETBUDDYUIMAINPAGERUNTIMEINFO_OFFSET))(buddyID, info);
		}

		static ::System::String* GetUIBuddyMainPagePrefabPath(::System::Int32 buddyID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIBUDDYMAINPAGEPREFABPATH_OFFSET))(buddyID);
		}

		static ::MoleMole::AvatarShowSetting* GetUIWeaponShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIWEAPONSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName);
		}

		static ::MoleMole::AvatarShowSetting* GetUIEquipShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUIEQUIPSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName);
		}

		static ::MoleMole::AvatarShowSetting* GetUI3DModelShowSetting(::System::String* ctrlName, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIdx)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETUI3DMODELSHOWSETTING_OFFSET))(ctrlName, ShowTypeIndex, fromTypeName, showSettingTypeIdx);
		}

		static ::MoleMole::AvatarShowSetting* GetAvatarShowSettingCommon(::System::String* ctrlName, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* UIShowAvatarSettings, ::System::Int32 ShowTypeIndex, ::System::String* fromTypeName, ::System::Int32 showSettingTypeIndex)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_GETAVATARSHOWSETTINGCOMMON_OFFSET))(ctrlName, UIShowAvatarSettings, ShowTypeIndex, fromTypeName, showSettingTypeIndex);
		}
	};
}
