#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
class Class_1_6B41D5D37BA0605F;
class Class_1_CA3918258B4D86BD;
class Class_1_DD365D3DF2F2F979;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FC660)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHMAZEINFO_OFFSET UNITYSDK_OFFSET(0xB3FC8C0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHREPLAYINFO_OFFSET UNITYSDK_OFFSET(0xB3FD560)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERREPLAYWITHMAZEINFO_OFFSET UNITYSDK_OFFSET(0xB3FD210)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xB3FC6B0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETENVIROMNENTPROFILEBYPLANEANDFLOOR_OFFSET UNITYSDK_OFFSET(0xB3FC870)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB3FCFC0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_GET_ISBATTLEENTERING_OFFSET UNITYSDK_OFFSET(0xB3FD900)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB3FCED0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xB3FCF30)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xB3FCE70)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3FC650)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERBATTLEWITHMAZEINFONEXTFRAME_OFFSET UNITYSDK_OFFSET(0xB3FD0F0)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERREPLAYWITHMAZEINFONEXTFRAME_OFFSET UNITYSDK_OFFSET(0xB3FD180)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xB3FD910)
#define RPG_CLIENT_BATTLELINEUPGAMEPHASE__INITUI_OFFSET UNITYSDK_OFFSET(0xB3FD010)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLineupGamePhase_TypeDefinitionIndex = 57008;

	class BattleLineupGamePhase : public ::System::Object
	{
	public:
		static ::Class_1_DD365D3DF2F2F979** StaticGet_LastInitParam()
		{
			return (::Class_1_DD365D3DF2F2F979**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupGamePhase_TypeDefinitionIndex)->GetStaticField(0x152A0);
		}
		::Class_1_CA3918258B4D86BD* _ReplayData; // 0x10
		::System::String* _ReplayPath; // 0x18
		::System::String* _EnviroProfile; // 0x20
		::RPG::Client::EnvironmentSystem* _EnvironmentSystem; // 0x28
		::Class_1_DD365D3DF2F2F979* _InitParam; // 0x30
		::RPG::GameCore::BattleLineupData* _BattleLineupData; // 0x38
		::System::Boolean TriggerBattleFromDevPage; // 0x40
		::System::Boolean _DirectKill; // 0x41
		::System::Nullable_1<::System::Int32> _LogicRandomSeedOverride; // 0x44
		::System::Boolean _IsBattleEntering; // 0x4C
		::System::Boolean _SkipVerify; // 0x4D
		::System::Boolean _AutoBattle; // 0x4E
		::System::Boolean _Simulate; // 0x4F
		::System::UInt32 _BattleAreaID; // 0x50
		::System::UInt32 _PlaneID; // 0x54
		::System::UInt32 _FloorID; // 0x58
		::System::UInt32 _UnifiedBattleAreaID; // 0x5C
		::System::UInt32 _GroupID; // 0x60

		::System::Void _ctor(::Class_1_DD365D3DF2F2F979* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD365D3DF2F2F979*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void _InitUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__INITUI_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* _EnterBattleWithMazeInfoNextFrame()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERBATTLEWITHMAZEINFONEXTFRAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* _EnterReplayWithMazeInfoNextFrame()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTERREPLAYWITHMAZEINFONEXTFRAME_OFFSET))(this);
		}

		static ::System::String* GetEnviromnentProfileByPlaneAndFloor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GETENVIROMNENTPROFILEBYPLANEANDFLOOR_OFFSET))(a1, a2);
		}

		::System::Void EnterBattleWithMazeInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::BattleLineupData* a5, ::System::String* a6, ::System::Nullable_1<::System::Int32> a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::BattleLineupData*, ::System::String*, ::System::Nullable_1<::System::Int32>, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHMAZEINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EnterReplayWithMazeInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5, ::System::String* a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERREPLAYWITHMAZEINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EnterBattleWithReplayInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5, ::System::String* a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_ENTERBATTLEWITHREPLAYINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean get_IsBattleEntering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE_GET_ISBATTLEENTERING_OFFSET))(this);
		}

		::System::Void _Enter_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELINEUPGAMEPHASE__ENTER_B__2_0_OFFSET))(this);
		}
	};
}
