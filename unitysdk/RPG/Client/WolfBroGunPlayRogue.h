#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRogue_TurnInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_CREATEROADMAP_OFFSET UNITYSDK_OFFSET(0xE465560)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_EVALUATEGIFTLEVEL_OFFSET UNITYSDK_OFFSET(0xE464DD0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GETINITINFO_OFFSET UNITYSDK_OFFSET(0xE45E2D0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xE465FE0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_CURRENTPLAYERHP_OFFSET UNITYSDK_OFFSET(0xE466000)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xE465F30)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_MAXPLAYERHP_OFFSET UNITYSDK_OFFSET(0xE465900)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xE465FC0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xE465FB0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xE466040)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE466020)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNSCORES_OFFSET UNITYSDK_OFFSET(0xE466060)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_MODIFYPLAYERHP_OFFSET UNITYSDK_OFFSET(0xE465D40)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE465EB0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONTIMETICK_OFFSET UNITYSDK_OFFSET(0xE465DE0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_PLAYTURN_OFFSET UNITYSDK_OFFSET(0xE465AA0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_PREPAREUPDATETURN_OFFSET UNITYSDK_OFFSET(0xE465E60)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_REFRESH_OFFSET UNITYSDK_OFFSET(0xE465AE0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xE465FF0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_CURRENTPLAYERHP_OFFSET UNITYSDK_OFFSET(0xE466010)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xE465FD0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xE466050)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE466030)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_STARTUP_OFFSET UNITYSDK_OFFSET(0xE465650)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_UPDATETURN_OFFSET UNITYSDK_OFFSET(0xE465A10)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE__CTOR_OFFSET UNITYSDK_OFFSET(0xE466070)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE__STARTUP_B__2_0_OFFSET UNITYSDK_OFFSET(0xE4660D0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRogue_TypeDefinitionIndex = 68757;

	class WolfBroGunPlayRogue : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::WolfBroGunPlayPuzzleBoard* _Puzzle_k__BackingField; // 0x18
		::System::Single _AccelTimeScaleValue_k__BackingField; // 0x20
		::System::Int32 _CurrentPlayerHP_k__BackingField; // 0x24
		::System::Int32 _TurnCount_k__BackingField; // 0x28
		::System::Single _TurnCountDown_k__BackingField; // 0x2C
		::System::Int32 DIBCJFHECGB; // 0x30
		::System::Boolean HOFNBFACAGN; // 0x34
		::System::Int32 BADKJLOIICO; // 0x38
		::Il2CppArray<::System::Single>* JDBOIKJAIKO; // 0x40
		::System::Boolean HFOCJDCPMDG; // 0x48
		::System::Boolean isBossMode; // 0x49
		::Il2CppArray<::RPG::Client::WolfBroGunPlayRogue_TurnInfo>* turnInfos; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE__CTOR_OFFSET))(this);
		}

		::Class_1_2BF31F3092BDFD9E* CreateRoadMap()
		{
			return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_CREATEROADMAP_OFFSET))(this);
		}

		::System::Object* GetInitInfo()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GETINITINFO_OFFSET))(this);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_STARTUP_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_2BF31F3092BDFD9E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_REFRESH_OFFSET))(this, a1);
		}

		::System::Void OnTimeTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONTIMETICK_OFFSET))(this, a1);
		}

		::System::Void PrepareUpdateTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_PREPAREUPDATETURN_OFFSET))(this);
		}

		::System::Void UpdateTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_UPDATETURN_OFFSET))(this);
		}

		::System::Void PlayTurn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_PLAYTURN_OFFSET))(this);
		}

		::System::Void ModifyPlayerHP(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_MODIFYPLAYERHP_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ISFINISH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TIMESCALE_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayPuzzleBoard* get_Puzzle()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_PUZZLE_OFFSET))(this);
		}

		::System::Void set_Puzzle(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_PUZZLE_OFFSET))(this, a1);
		}

		::System::Single get_AccelTimeScaleValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ACCELTIMESCALEVALUE_OFFSET))(this);
		}

		::System::Void set_AccelTimeScaleValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_ACCELTIMESCALEVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPlayerHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_CURRENTPLAYERHP_OFFSET))(this);
		}

		::System::Void set_CurrentPlayerHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_CURRENTPLAYERHP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxPlayerHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_MAXPLAYERHP_OFFSET))(this);
		}

		::System::Int32 get_TurnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNT_OFFSET))(this);
		}

		::System::Void set_TurnCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNT_OFFSET))(this, a1);
		}

		::System::Single get_TurnCountDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNTDOWN_OFFSET))(this);
		}

		::System::Void set_TurnCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNTDOWN_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_TurnScores()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNSCORES_OFFSET))(this);
		}

		::System::Int32 EvaluateGiftLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE_EVALUATEGIFTLEVEL_OFFSET))(this);
		}

		::System::Void _Startup_b__2_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUE__STARTUP_B__2_0_OFFSET))(this, a1);
		}
	};
}
