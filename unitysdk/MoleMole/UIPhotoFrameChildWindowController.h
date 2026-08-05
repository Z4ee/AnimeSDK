#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_79AE422BA06F6D26_174;
class Class_2_79AE422BA06F6D26_174_Class_2_0CFC8DCC343CD856;
class PhotoFrame;
namespace MoleMole { class MainCityPhotoPopContext; }
namespace MoleMole { class PhotoFrameCustomWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIStickerShowWidgetController; }
namespace MoleMole::Config { class ConfigPhotoCameraFramePhotoSetting; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17574560)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_GET__PHOTOFRAMESETTING_OFFSET UNITYSDK_OFFSET(0x175707E0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_INITPHOTOFRAME_OFFSET UNITYSDK_OFFSET(0x17570800)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEINNER_OFFSET UNITYSDK_OFFSET(0x17571170)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEOUTER_OFFSET UNITYSDK_OFFSET(0x17571AB0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEPHOTO_OFFSET UNITYSDK_OFFSET(0x17570E90)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADFRAMEASSETS_OFFSET UNITYSDK_OFFSET(0x17572F90)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17574770)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONPHOTOPLAYERINFOCHANGE_OFFSET UNITYSDK_OFFSET(0x17574360)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x175744C0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17574800)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17574570)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17574680)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSINNER_OFFSET UNITYSDK_OFFSET(0x17572350)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x175722F0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSOUTER_OFFSET UNITYSDK_OFFSET(0x17572850)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSSCALE_OFFSET UNITYSDK_OFFSET(0x17572E80)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_REFRESHMPTEAMMATEINFO_OFFSET UNITYSDK_OFFSET(0x17573390)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_REFRESHPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x17573400)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SETPHOTOSTEP1_OFFSET UNITYSDK_OFFSET(0x17570960)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SET__PHOTOFRAMESETTING_OFFSET UNITYSDK_OFFSET(0x175707F0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SHOWPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x17573BC0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SHOWSTICKERS_OFFSET UNITYSDK_OFFSET(0x175715B0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175748A0)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17574990)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17574A20)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17574A30)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17574A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoFrameChildWindowController_TypeDefinitionIndex = 59524;

	class UIPhotoFrameChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting* __photoFrameSetting_k__BackingField; // 0x318
		::PhotoFrame* _photoFrame; // 0x320
		::UnityEngine::Texture* photoTex; // 0x328
		::UnityEngine::Vector2 m_textureSize; // 0x330
		::System::Single m_textureAspect; // 0x338
		::UnityEngine::Vector2 m_textureSizeInPhotoImage; // 0x33C
		::MoleMole::PhotoFrameCustomWidgetController* _InnerWidget; // 0x348
		::MoleMole::PhotoFrameCustomWidgetController* _OuterBackWidget; // 0x350
		::MoleMole::PhotoFrameCustomWidgetController* _OuterFrontWidget; // 0x358
		::System::Boolean _NeedShowTeammateInfo; // 0x360
		::System::Collections::Generic::List_1<::System::UInt32>* _teammateList; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIStickerShowWidgetController*>* _stickerWidgetList; // 0x370
		::Class_2_79AE422BA06F6D26_174* _view; // 0x378
		::MoleMole::MainCityPhotoPopContext* _context; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting* get__photoFrameSetting()
		{
			return ((::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_GET__PHOTOFRAMESETTING_OFFSET))(this);
		}

		::System::Void set__photoFrameSetting(::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SET__PHOTOFRAMESETTING_OFFSET))(this, value);
		}

		::System::Void InitPhotoFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_INITPHOTOFRAME_OFFSET))(this);
		}

		::System::Void SetPhotoStep1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SETPHOTOSTEP1_OFFSET))(this);
		}

		::System::Void ProcessNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSNEXTFRAME_OFFSET))(this);
		}

		::System::Void ProcessInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSINNER_OFFSET))(this);
		}

		::System::Void ProcessOuter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSOUTER_OFFSET))(this);
		}

		::System::Void ProcessScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_PROCESSSCALE_OFFSET))(this);
		}

		::System::Void LoadFrameAssets(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent, ::MoleMole::PhotoFrameCustomWidgetController*& widget)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::MoleMole::PhotoFrameCustomWidgetController*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADFRAMEASSETS_OFFSET))(this, assetPath, parent, widget);
		}

		::System::Void LoadConfigSetFrameInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEINNER_OFFSET))(this);
		}

		::System::Void LoadConfigSetFrameOuter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEOUTER_OFFSET))(this);
		}

		::System::Void LoadConfigSetFramePhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_LOADCONFIGSETFRAMEPHOTO_OFFSET))(this);
		}

		::System::Void RefreshMPTeammateInfo(::System::Collections::Generic::List_1<::System::UInt32>* teammateList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_REFRESHMPTEAMMATEINFO_OFFSET))(this, teammateList);
		}

		::System::Boolean ShowPlatformInfo(::Class_2_79AE422BA06F6D26_174_Class_2_0CFC8DCC343CD856* view, ::System::UInt32 uid, ::System::Boolean isShowPlatform)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_79AE422BA06F6D26_174_Class_2_0CFC8DCC343CD856*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SHOWPLATFORMINFO_OFFSET))(this, view, uid, isShowPlatform);
		}

		::System::Void OnPhotoPlayerInfoChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONPHOTOPLAYERINFOCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshPlayerInfo(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_REFRESHPLAYERINFO_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void ShowStickers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_SHOWSTICKERS_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
