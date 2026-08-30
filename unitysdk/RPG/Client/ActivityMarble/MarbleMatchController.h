#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchController_MarbleSealAnchor; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_CREATECTRL_OFFSET UNITYSDK_OFFSET(0x1AF9D920)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF9E130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_GETMARBLETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF9EC10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1AF9D990)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_ISMEMBERCHANGED_OFFSET UNITYSDK_OFFSET(0x1AF9EDB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETOPPONENTMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x1AF9E990)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETSELFMARBLESEAL_OFFSET UNITYSDK_OFFSET(0x1AF9E3C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9D910)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1AF9EF60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITANCHORS_OFFSET UNITYSDK_OFFSET(0x1AF9DEA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITCAMERAANCHORNAME_OFFSET UNITYSDK_OFFSET(0x1AF9EE00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESEALANCHOR_OFFSET UNITYSDK_OFFSET(0x1AF9E600)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESUBSEALANCHOR_OFFSET UNITYSDK_OFFSET(0x1AF9E7F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SWITCHCAMERA_OFFSET UNITYSDK_OFFSET(0x1AF9DD60)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleMatchController_TypeDefinitionIndex = 74566;

	class MarbleMatchController : public ::System::Object
	{
	public:
		// static const ::System::String* _ANCHOR_NAME_FORMAT; // 0x0
		::Il2CppArray<::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*>* _MarbleSealAnchors; // 0x10
		::RPG::GameCore::LevelAreaManager* _LevelAreaMgr; // 0x18
		::System::String* _CameraAnchorName; // 0x20
		::System::Single _Scale; // 0x28
		::System::UInt32 _GroupID; // 0x2C
		::System::UInt32 _MarbleSealCountEachTeam; // 0x30
		::System::Boolean _Dirty; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleMatchController* CreateCtrl()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_CREATECTRL_OFFSET))();
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetSelfMarbleSeal(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETSELFMARBLESEAL_OFFSET))(this, a1);
		}

		::System::Void SetOpponentMarbleSeal(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_SETOPPONENTMARBLESEAL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetMarbleTransform(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER_GETMARBLETRANSFORM_OFFSET))(this, a1, a2);
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

		::System::Void _SetMarbleSealAnchor(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESEALANCHOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetMarbleSubSealAnchor(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleMatchController_MarbleSealAnchor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__SETMARBLESUBSEALANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCameraAnchorName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEMATCHCONTROLLER__INITCAMERAANCHORNAME_OFFSET))(this);
		}
	};
}
