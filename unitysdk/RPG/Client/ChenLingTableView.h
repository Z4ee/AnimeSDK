#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChenLingTableBattleScene; }
namespace RPG::Client { class ChenLingTablePrepareScene; }
namespace RPG::Client { class ChenLingTableScene; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGTABLEVIEW_GET_CURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x935EA30)
#define RPG_CLIENT_CHENLINGTABLEVIEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x935EE90)
#define RPG_CLIENT_CHENLINGTABLEVIEW_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0x935F390)
#define RPG_CLIENT_CHENLINGTABLEVIEW_RESETAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x935EB70)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SET_CURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x935EA40)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x935EA50)
#define RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHSCENE_OFFSET UNITYSDK_OFFSET(0x935ECC0)
#define RPG_CLIENT_CHENLINGTABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x935F410)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTableView_TypeDefinitionIndex = 59378;

	class ChenLingTableView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ChenLingTablePrepareScene* _PrepareScene; // 0x18
		::RPG::Client::ChenLingTableBattleScene* _BattleScene; // 0x20
		::UnityEngine::Transform* _AudioListener; // 0x28
		::RPG::Client::ChenLingTableScene* _CurrentScene_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChenLingTableScene* get_CurrentScene()
		{
			return ((::RPG::Client::ChenLingTableScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_GET_CURRENTSCENE_OFFSET))(this);
		}

		::System::Void set_CurrentScene(::RPG::Client::ChenLingTableScene* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableScene*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SET_CURRENTSCENE_OFFSET))(this, value);
		}

		::System::Void SwitchAudioListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHAUDIOLISTENER_OFFSET))(this);
		}

		::System::Void ResetAudioListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_RESETAUDIOLISTENER_OFFSET))(this);
		}

		::System::Void SwitchScene(::RPG::Client::ChenLingTableSceneType sceneType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableSceneType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_SWITCHSCENE_OFFSET))(this, sceneType);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEVIEW_ONUISCREENSIZECHANGE_OFFSET))(this);
		}
	};
}
