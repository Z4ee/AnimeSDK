#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_APPENDBATTLEAREABLOCKROOT_OFFSET UNITYSDK_OFFSET(0xBD6F4F0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0xBD6F5F0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0xBD6EFB0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITORIGINPOS_OFFSET UNITYSDK_OFFSET(0xBD6F140)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INITROTATION_OFFSET UNITYSDK_OFFSET(0xBD6F1B0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xBD6EA60)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBD6EE30)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_MOVESTAGETOTARGET_OFFSET UNITYSDK_OFFSET(0xBD6F2B0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xBD6F3B0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBD6ED70)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_RESETSTAGEPOS_OFFSET UNITYSDK_OFFSET(0xBD6F420)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETBASEOFFSET_OFFSET UNITYSDK_OFFSET(0xBD6F230)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SETOWNERBLOCK_OFFSET UNITYSDK_OFFSET(0xBD6EDE0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGEIFHIDE_OFFSET UNITYSDK_OFFSET(0xBD6EEF0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0xBD6EBF0)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBD6EB60)
#define RPG_CLIENT_LEVELSTAGEVISABLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6F610)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelStageVisableController_TypeDefinitionIndex = 64421;

	class LevelStageVisableController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::System::Single Field_5_2; // 0x20
		::System::Boolean Field_5_3; // 0x24
		::UnityEngine::Vector3 Field_5_4; // 0x28
		::UnityEngine::Vector3 Field_5_5; // 0x34
		::UnityEngine::Vector3 Field_5_6; // 0x40
		::UnityEngine::Vector3 Field_5_7; // 0x4C
		::System::Collections::Generic::List_1<::RPG::Client::LevelStageVisableController*>* Field_5_8; // 0x58
		::Class_1_303D5A33D1401D59* Field_5_9; // 0x60

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
