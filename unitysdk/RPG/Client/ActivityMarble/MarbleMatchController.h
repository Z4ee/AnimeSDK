#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchController_MarbleSealAnchor; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_CREATECTRL_OFFSET UNITYSDK_OFFSET(0x8F5B120)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F5B560)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_GETMARBLETRANSFORM_OFFSET UNITYSDK_OFFSET(0x8F5BE30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x8F5B190)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_ISMEMBERCHANGED_OFFSET UNITYSDK_OFFSET(0x8F5BFE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETOPPONENTMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x8F5BBB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETSELFMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x8F5B810)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F5B110)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x8F5C570)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITANCHORS_OFFSET UNITYSDK_OFFSET(0x8F5C220)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITCAMERAANCHORNAME_OFFSET UNITYSDK_OFFSET(0x8F5C170)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESEALANCHOR_OFFSET UNITYSDK_OFFSET(0x8F5B9B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESUBSEALANCHOR_OFFSET UNITYSDK_OFFSET(0x8F5BAF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0x8F5C030)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchController_TypeDefinitionIndex = 61419;

	class MarbleMatchController : public ::System::Object
	{
	public:
		// static const ::System::String* _ANCHOR_NAME_FORMAT; // 0x0
		::RPG::GameCore::LevelAreaManager* _LevelAreaMgr; // 0x10
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*>* _MarbleSealAnchors; // 0x18
		::System::String* _CameraAnchorName; // 0x20
		::System::UInt32 _MarbleSealCountEachTeam; // 0x28
		::System::Single _Scale; // 0x2C
		::System::UInt32 _GroupID; // 0x30
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
