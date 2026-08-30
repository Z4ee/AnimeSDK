#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_APPENDBATTLEAREABLOCKROOT_OFFSET UNITYSDK_OFFSET(0x194F8F70)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0x194F9070)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0x194F8920)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITORIGINPOS_OFFSET UNITYSDK_OFFSET(0x194F8AB0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITROTATION_OFFSET UNITYSDK_OFFSET(0x194F8B20)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x194F83D0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x194F87A0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_MOVESTAGEDELTAVEC_OFFSET UNITYSDK_OFFSET(0x194F8D20)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_MOVESTAGETOTARGET_OFFSET UNITYSDK_OFFSET(0x194F8C20)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x194F8E30)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194F86E0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_RESETSTAGEPOS_OFFSET UNITYSDK_OFFSET(0x194F8EA0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETBASEOFFSET_OFFSET UNITYSDK_OFFSET(0x194F8BA0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETOWNERBLOCK_OFFSET UNITYSDK_OFFSET(0x194F8750)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGEIFHIDE_OFFSET UNITYSDK_OFFSET(0x194F8860)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x194F8560)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x194F84D0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x194F9090)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelStageVisableController_TypeDefinitionIndex = 68830;

	class LevelStageVisableController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean FFDHFOLFEJG; // 0x18
		::System::Single KIAMFMFGILL; // 0x1C
		::System::Single PIHKJCAMPNH; // 0x20
		::System::Boolean JLMOIIFJJEA; // 0x24
		::UnityEngine::Vector3 MEDPKIEKODB; // 0x28
		::UnityEngine::Vector3 HDEHFEKOGOK; // 0x34
		::UnityEngine::Vector3 BOCBLEMEPMB; // 0x40
		::UnityEngine::Vector3 IFBNHAPIBEP; // 0x4C
		::System::Collections::Generic::List_1<::RPG::Client::LevelStageVisableController*>* IMMJAOCDEAA; // 0x58
		::Class_1_303D5A33D1401D59* FKBJADHDHFO; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetOwnerBlock(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETOWNERBLOCK_OFFSET))(this, a1);
		}

		::System::Void ShowStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGE_OFFSET))(this, a1);
		}

		::System::Void ShowStageIfHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGEIFHIDE_OFFSET))(this);
		}

		::System::Void HideStage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_HIDESTAGE_OFFSET))(this, a1);
		}

		::System::Void InitOriginPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITORIGINPOS_OFFSET))(this, a1);
		}

		::System::Void InitRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITROTATION_OFFSET))(this, a1);
		}

		::System::Void SetBaseOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETBASEOFFSET_OFFSET))(this, a1);
		}

		::System::Void MoveStageToTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_MOVESTAGETOTARGET_OFFSET))(this, a1);
		}

		::System::Void MoveStageDeltaVec(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_MOVESTAGEDELTAVEC_OFFSET))(this, a1);
		}

		::System::Void OnBattleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONBATTLEFINISH_OFFSET))(this);
		}

		::System::Void ResetStagePos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_RESETSTAGEPOS_OFFSET))(this);
		}

		::System::Void AppendBattleAreaBlockRoot(::RPG::Client::LevelStageVisableController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelStageVisableController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_APPENDBATTLEAREABLOCKROOT_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_BaseOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_GET_BASEOFFSET_OFFSET))(this);
		}
	};
}
