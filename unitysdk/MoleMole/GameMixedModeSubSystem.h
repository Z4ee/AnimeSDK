#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_5_40F16634C043C523;

#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_CHECKHASSAFETYAREA_OFFSET UNITYSDK_OFFSET(0x16B90390)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_FORCEUPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x16B909D0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETCURRENTMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x16B90990)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETGAMEMIXEDMODEBYPOS_OFFSET UNITYSDK_OFFSET(0x16B90660)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_DEFAULTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x16B905C0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GET_MODEDETECTCATEGORYAREA_OFFSET UNITYSDK_OFFSET(0x16B905B0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x16B905D0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B90430)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B90550)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x16B904D0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_SETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x16B90B20)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET UNITYSDK_OFFSET(0x16B90800)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_UPDATEMIXEDMODELOOP_OFFSET UNITYSDK_OFFSET(0x16B908F0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B90B80)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM__TRYSETNEXTGAMEMIXEDMODETYPE_OFFSET UNITYSDK_OFFSET(0x16B90A60)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B90BA0)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B90C30)
#define MOLEMOLE_GAMEMIXEDMODESUBSYSTEM___BASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x16B90CC0)

namespace MoleMole
{
	inline static constexpr unsigned int GameMixedModeSubSystem_TypeDefinitionIndex = 52222;

	class GameMixedModeSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GameMixedModeSubSystem*>
	{
	public:
		static ::MoleMole::GameMixedModeSubSystem** StaticGet__lazyInst()
		{
			return (::MoleMole::GameMixedModeSubSystem**)Il2CppClass::FromTypeDefinitionIndex(GameMixedModeSubSystem_TypeDefinitionIndex)->GetStaticField(0x41CF0);
		}
		// static const ::System::Single ModeSwitchMinDistance; // 0x0
		::Class_5_40F16634C043C523* _ctx; // 0x10
		::Class_1_01E3578B80D3E1F9* _defaultCategoryArea; // 0x18
		::Class_1_01E3578B80D3E1F9* _modeDetectCategoryArea; // 0x20
		::Enum_3_982178F761E7F1DC _currentMixedModeType; // 0x28
		::Enum_3_982178F761E7F1DC _nextMixedModeType; // 0x2C
		::Unity::Jobs::JobHandle _lastDetectJobHandle; // 0x30
		::System::Boolean _isWillDestroy; // 0x40
		::UnityEngine::Vector3 _currentMarkPos; // 0x44

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

		::System::Void InitMixedMode(::Class_5_40F16634C043C523* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_40F16634C043C523*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_INITMIXEDMODE_OFFSET))(this, ctx);
		}

		::System::Void StartUpdateMixedMode(::Class_5_40F16634C043C523* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_40F16634C043C523*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_STARTUPDATEMIXEDMODE_OFFSET))(this, ctx);
		}

		::Enum_3_982178F761E7F1DC GetCurrentMixedModeType()
		{
			return ((::Enum_3_982178F761E7F1DC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_GETCURRENTMIXEDMODETYPE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask UpdateMixedModeLoop()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_UPDATEMIXEDMODELOOP_OFFSET))(this);
		}

		::System::Void ForceUpdateMixedModeLoop(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEMIXEDMODESUBSYSTEM_FORCEUPDATEMIXEDMODELOOP_OFFSET))(this, pos);
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
