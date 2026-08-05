#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_5_BFFF8608392BE06B;

#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_CHECKHASSAFETYAREA_OFFSET UNITYSDK_OFFSET(0x19BF32F0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_FORCEUPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x19BF3930)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETCURRENTMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x19BF38F0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETGAMEMIXEDMODEBYPOS_OFFSET UNITYSDK_OFFSET(0x19BF35C0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_DEFAULTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x19BF3520)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_MODEDETECTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x19BF3510)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x19BF3530)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19BF3390)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19BF34B0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x19BF3430)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_SETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x19BF3A90)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x19BF3760)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_UPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x19BF3850)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF3AF0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__TRYSETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x19BF39D0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19BF3B10)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19BF3BA0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x19BF3C30)

namespace MoleMole
{
	inline static constexpr unsigned int GameMixedModeSubSystem_TypeDefinitionIndex = 71851;

	class GameMixedModeSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GameMixedModeSubSystem*>
	{
	public:
		static ::MoleMole::GameMixedModeSubSystem** StaticGet__lazyInst()
		{
			return (::MoleMole::GameMixedModeSubSystem**)Il2CppClass::FromTypeDefinitionIndex(GameMixedModeSubSystem_TypeDefinitionIndex)->GetStaticField(0x48DD0);
		}
		// static const ::System::Single ModeSwitchMinDistance; // 0x0
		::Class_1_01E3578B80D3E1F9* _defaultCategoryArea; // 0x10
		::Class_5_BFFF8608392BE06B* _ctx; // 0x18
		::Class_1_01E3578B80D3E1F9* _modeDetectCategoryArea; // 0x20
		::Enum_3_982178F761E7F1DC _nextMixedModeType; // 0x28
		::Unity::Jobs::JobHandle _lastDetectJobHandle; // 0x30
		::System::Boolean _isWillDestroy; // 0x40
		::System::Int32 AutoSwitchDisableCount; // 0x44
		::Enum_3_982178F761E7F1DC _currentMixedModeType; // 0x48
		::UnityEngine::Vector3 _currentMarkPos; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Boolean CheckHasSafetyArea(::Class_1_01E3578B80D3E1F9* category)
		{
			return ((::System::Boolean(*)(::Class_1_01E3578B80D3E1F9*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_CHECKHASSAFETYAREA_OFFSET))(category);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONWILLDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::Class_1_01E3578B80D3E1F9* get_ModeDetectCategoryArea()
		{
			return ((::Class_1_01E3578B80D3E1F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_MODEDETECTCATEGORYAREA_OFFSET))(this);
		}

		::Class_1_01E3578B80D3E1F9* get_DefaultCategoryArea()
		{
			return ((::Class_1_01E3578B80D3E1F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_DEFAULTCATEGORYAREA_OFFSET))(this);
		}

		::System::Void InitMixedMode(::Class_5_BFFF8608392BE06B* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_BFFF8608392BE06B*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET))(this, ctx);
		}

		::System::Void StartUpdateMixedMode(::Class_5_BFFF8608392BE06B* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_BFFF8608392BE06B*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET))(this, ctx);
		}

		::Enum_3_982178F761E7F1DC GetCurrentMixedModeType()
		{
			return ((::Enum_3_982178F761E7F1DC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETCURRENTMIXEDMODETYPE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask UpdateMixedModeLoop()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_UPDATEMIXEDMODELOOP_OFFSET))(this);
		}

		::System::Void ForceUpdateMixedModeLoop(::UnityEngine::Vector3 pos, ::Enum_3_F6AB19A8BCD630BB flags)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Enum_3_F6AB19A8BCD630BB))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_FORCEUPDATEMIXEDMODELOOP_OFFSET))(this, pos, flags);
		}

		static ::System::Void _TrySetNextGameMixedModeType(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__TRYSETNEXTGAMEMIXEDMODETYPE_OFFSET))(pos);
		}

		::System::Void SetNextGameMixedModeType(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_SETNEXTGAMEMIXEDMODETYPE_OFFSET))(this, pos);
		}

		::Enum_3_982178F761E7F1DC GetGameMixedModeByPos(::UnityEngine::Vector3& pos)
		{
			return ((::Enum_3_982178F761E7F1DC(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETGAMEMIXEDMODEBYPOS_OFFSET))(this, pos);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONWILLDESTROY_OFFSET))(this);
		}
	};
}
