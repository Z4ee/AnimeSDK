#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchController_MarbleSealAnchor; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_CREATECTRL_OFFSET UNITYSDK_OFFSET(0x9C04CC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C054E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_GETMARBLETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9C05DB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9C04D30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_ISMEMBERCHANGED_OFFSET UNITYSDK_OFFSET(0x9C05F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETOPPONENTMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x9C05B30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETSELFMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x9C05790)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C04CB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x9C06110)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITANCHORS_OFFSET UNITYSDK_OFFSET(0x9C05240)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITCAMERAANCHORNAME_OFFSET UNITYSDK_OFFSET(0x9C05FB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESEALANCHOR_OFFSET UNITYSDK_OFFSET(0x9C05930)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESUBSEALANCHOR_OFFSET UNITYSDK_OFFSET(0x9C05A70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0x9C05100)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchController_TypeDefinitionIndex = 68925;

	class MarbleMatchController : public ::System::Object
	{
	public:
		// static const ::System::String* _ANCHOR_NAME_FORMAT; // 0x0
		::RPG::GameCore::LevelAreaManager* _LevelAreaMgr; // 0x10
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*>* _MarbleSealAnchors; // 0x18
		::System::String* _CameraAnchorName; // 0x20
		::System::UInt32 _GroupID; // 0x28
		::System::UInt32 _MarbleSealCountEachTeam; // 0x2C
		::System::Single _Scale; // 0x30
		::System::Boolean _Dirty; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleMatchController* CreateCtrl()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_CREATECTRL_OFFSET))();
		}

		::System::Void Init(::System::UInt32 marbleSealCountEachTeam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_INIT_OFFSET))(this, marbleSealCountEachTeam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetSelfMarbleSeal(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* team)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETSELFMARBLESEAL_OFFSET))(this, team);
		}

		::System::Void SetOpponentMarbleSeal(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* team)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETOPPONENTMARBLESEAL_OFFSET))(this, team);
		}

		::UnityEngine::Transform* GetMarbleTransform(::System::UInt32 teamIndex, ::System::Boolean isEnemy)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_GETMARBLETRANSFORM_OFFSET))(this, teamIndex, isEnemy);
		}

		::System::Boolean IsMemberChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_ISMEMBERCHANGED_OFFSET))(this);
		}

		::System::Void _SwitchCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SWITCHCAMERA_OFFSET))(this);
		}

		::System::Void _InitAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITANCHORS_OFFSET))(this);
		}

		::System::Void _DeactiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__DEACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _SetMarbleSealAnchor(::RPG::Client::ActivityMarble::MarbleSealData* data, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor* anchor, ::System::Boolean isEnemy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESEALANCHOR_OFFSET))(this, data, anchor, isEnemy);
		}

		::System::Void _SetMarbleSubSealAnchor(::RPG::Client::ActivityMarble::MarbleSealData* data, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor* anchor)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESUBSEALANCHOR_OFFSET))(this, data, anchor);
		}

		::System::Void _InitCameraAnchorName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITCAMERAANCHORNAME_OFFSET))(this);
		}
	};
}
