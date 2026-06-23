#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_5_F5E525937B4D15FE;

#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_CHECKHASSAFETYAREA_OFFSET UNITYSDK_OFFSET(0x17E804C0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_FORCEUPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x17E80B00)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETCURRENTMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x17E80AC0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETGAMEMIXEDMODEBYPOS_OFFSET UNITYSDK_OFFSET(0x17E80790)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_DEFAULTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x17E806F0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_MODEDETECTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x17E806E0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x17E80700)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E80560)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E80680)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x17E80600)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_SETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x17E80C60)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x17E80930)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_UPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x17E80A20)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E80CC0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__TRYSETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x17E80BA0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E80CE0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E80D70)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x17E80E00)

namespace MoleMole
{
	inline static constexpr unsigned int GameMixedModeSubSystem_TypeDefinitionIndex = 61533;

	class GameMixedModeSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GameMixedModeSubSystem*>
	{
	public:
		static ::MoleMole::GameMixedModeSubSystem** StaticGet__lazyInst()
		{
			return (::MoleMole::GameMixedModeSubSystem**)Il2CppClass::FromTypeDefinitionIndex(GameMixedModeSubSystem_TypeDefinitionIndex)->GetStaticField(0x44E20);
		}
		// static const ::System::Single ModeSwitchMinDistance; // 0x0
		::Class_1_01E3578B80D3E1F9* _modeDetectCategoryArea; // 0x10
		::Class_5_F5E525937B4D15FE* _ctx; // 0x18
		::Class_1_01E3578B80D3E1F9* _defaultCategoryArea; // 0x20
		::UnityEngine::Vector3 _currentMarkPos; // 0x28
		::System::Boolean _isWillDestroy; // 0x34
		::Enum_3_982178F761E7F1DC _currentMixedModeType; // 0x38
		::System::Int32 AutoSwitchDisableCount; // 0x3C
		::Enum_3_982178F761E7F1DC _nextMixedModeType; // 0x40
		::Unity::Jobs::JobHandle _lastDetectJobHandle; // 0x48

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

		::System::Void InitMixedMode(::Class_5_F5E525937B4D15FE* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_F5E525937B4D15FE*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET))(this, ctx);
		}

		::System::Void StartUpdateMixedMode(::Class_5_F5E525937B4D15FE* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_F5E525937B4D15FE*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET))(this, ctx);
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
