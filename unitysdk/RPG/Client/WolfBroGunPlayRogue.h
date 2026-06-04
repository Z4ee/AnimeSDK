#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRogue_TurnInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_CREATEROADMAP_OFFSET UNITYSDK_OFFSET(0xCC38B80)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_EVALUATEGIFTLEVEL_OFFSET UNITYSDK_OFFSET(0xCC38310)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GETINITINFO_OFFSET UNITYSDK_OFFSET(0xCC320C0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xCC39580)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_CURRENTPLAYERHP_OFFSET UNITYSDK_OFFSET(0xCC395A0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCC394D0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_MAXPLAYERHP_OFFSET UNITYSDK_OFFSET(0xCC38EA0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xCC39560)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xCC39550)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xCC395E0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xCC395C0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_GET_TURNSCORES_OFFSET UNITYSDK_OFFSET(0xCC39600)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_MODIFYPLAYERHP_OFFSET UNITYSDK_OFFSET(0xCC392E0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCC39450)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_ONTIMETICK_OFFSET UNITYSDK_OFFSET(0xCC39380)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_PLAYTURN_OFFSET UNITYSDK_OFFSET(0xCC39040)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_PREPAREUPDATETURN_OFFSET UNITYSDK_OFFSET(0xCC39400)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_REFRESH_OFFSET UNITYSDK_OFFSET(0xCC39080)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_ACCELTIMESCALEVALUE_OFFSET UNITYSDK_OFFSET(0xCC39590)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_CURRENTPLAYERHP_OFFSET UNITYSDK_OFFSET(0xCC395B0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xCC39570)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xCC395F0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0xCC395D0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_STARTUP_OFFSET UNITYSDK_OFFSET(0xCC38C70)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE_UPDATETURN_OFFSET UNITYSDK_OFFSET(0xCC38FB0)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC39610)
#define RPG_CLIENT_WOLFBROGUNPLAYROGUE__STARTUP_B__2_0_OFFSET UNITYSDK_OFFSET(0xCC39670)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRogue_TypeDefinitionIndex = 64315;

	class WolfBroGunPlayRogue : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::WolfBroGunPlayPuzzleBoard* _Puzzle_k__BackingField; // 0x18
		::System::Single _AccelTimeScaleValue_k__BackingField; // 0x20
		::System::Int32 _CurrentPlayerHP_k__BackingField; // 0x24
		::System::Int32 _TurnCount_k__BackingField; // 0x28
		::System::Single _TurnCountDown_k__BackingField; // 0x2C
		::System::Int32 Field_5_5; // 0x30
		::System::Boolean Field_5_6; // 0x34
		::System::Int32 Field_5_7; // 0x38
		::Il2CppArray<::System::Single>* Field_5_8; // 0x40
		::System::Boolean Field_5_9; // 0x48
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
