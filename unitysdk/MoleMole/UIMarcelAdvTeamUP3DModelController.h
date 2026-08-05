#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_23D9BB4D5379D91C_2;
class Class_2_C2B4B123B5A9B78A;
class Class_3_C42038ADC368DD79_2;
namespace MoleMole { class MarcelAdvTeamUPContext; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0x18A2B3A0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A2B050)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A2B630)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A2A900)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A2ABE0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET UNITYSDK_OFFSET(0x18A2B0E0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHSCREENPLAYER_OFFSET UNITYSDK_OFFSET(0x18A2BA40)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET UNITYSDK_OFFSET(0x18A2B180)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_RELEASERTUNIT_OFFSET UNITYSDK_OFFSET(0x18A2B570)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18A2B880)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2BDC0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A2BF20)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A2BFB0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A2BFC0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A2BFD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex = 67897;

	class UIMarcelAdvTeamUP3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Boolean* StaticGet_testScreenWidth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex)->GetStaticField(0x121E0);
		}
		::Class_2_23D9BB4D5379D91C_2* _view; // 0x360
		::Class_2_C2B4B123B5A9B78A* _roleUnit; // 0x368
		::MoleMole::MarcelAdvTeamUPContext* _teamUpContext; // 0x370
		::Il2CppArray<::UnityEngine::Transform*>* _buddyObjs; // 0x378
		::System::Collections::Generic::List_1<::System::String*>* _frameTextureKeys; // 0x380
		::MoleMole::ScreenPlayer* _player; // 0x388
		::System::Int32 _rtWidth; // 0x390
		::System::Int32 _rtHeight; // 0x394
		::System::Single _playerIdleTime; // 0x398
		::System::UInt32 _idleVoiceId; // 0x39C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshMyBuddy(::Class_3_C42038ADC368DD79_2* myPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C42038ADC368DD79_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET))(this, myPlayerInfo);
		}

		::System::Void RefreshTeamBuddy(::System::Int32 slot, ::Class_3_C42038ADC368DD79_2* teamPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_C42038ADC368DD79_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET))(this, slot, teamPlayerInfo);
		}

		::System::Void AllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseRTUnit(::System::Boolean isReAlloc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_RELEASERTUNIT_OFFSET))(this, isReAlloc);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshScreenPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHSCREENPLAYER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
