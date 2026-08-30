#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_0_16E4307DCC419505_585;
class Class_0_16E4307DCC419505_586;
class Class_1_0BA87B0B199639ED;
class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D90D29A0DA06B4F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB840040)
#define CLASS_1_D90D29A0DA06B4F8_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB8400B0)
#define CLASS_1_D90D29A0DA06B4F8_GET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0xB840530)
#define CLASS_1_D90D29A0DA06B4F8_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xB840510)
#define CLASS_1_D90D29A0DA06B4F8_GET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB840490)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xB840230)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xB840520)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_5F2BD4DA4DAE944B_OFFSET UNITYSDK_OFFSET(0xB840480)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_867A3FAA5DC7C039_OFFSET UNITYSDK_OFFSET(0xB83F910)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_B48B9ACDE1338CE6_OFFSET UNITYSDK_OFFSET(0xB8403C0)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xB83FA40)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB8402C0)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB840340)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB840380)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8401B0)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_D2BC6DEA9272918D_OFFSET UNITYSDK_OFFSET(0xB83ECC0)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xB83EE40)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_F004EAAEA47E15E3_OFFSET UNITYSDK_OFFSET(0xB8404B0)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB840470)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_F4E5958F2AE995E5_OFFSET UNITYSDK_OFFSET(0xB83FE50)
#define CLASS_1_D90D29A0DA06B4F8_METHOD_1_F7B0A9079CE9AD22_OFFSET UNITYSDK_OFFSET(0xB840100)
#define CLASS_1_D90D29A0DA06B4F8_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xB840160)
#define CLASS_1_D90D29A0DA06B4F8_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB8401F0)
#define CLASS_1_D90D29A0DA06B4F8_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB840300)
#define CLASS_1_D90D29A0DA06B4F8_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xB840280)
#define CLASS_1_D90D29A0DA06B4F8_SET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0xB840540)
#define CLASS_1_D90D29A0DA06B4F8_SET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB8404A0)
#define CLASS_1_D90D29A0DA06B4F8__CTOR_OFFSET UNITYSDK_OFFSET(0xB840550)

inline static constexpr unsigned int Class_1_D90D29A0DA06B4F8_TypeDefinitionIndex = 56205;

class Class_1_D90D29A0DA06B4F8 : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D90D29A0DA06B4F8*, ::Class_0_16E4307DCC419505_585*>** StaticGet_MOKOMLHIBFB()
	{
		return (::System::Func_2<::Class_1_D90D29A0DA06B4F8*, ::Class_0_16E4307DCC419505_585*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D90D29A0DA06B4F8_TypeDefinitionIndex)->GetStaticField(0x10AC0);
	}
	::Class_1_0BA87B0B199639ED* _ProgressMonitor_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_586*>* IDNFBOPGOKF; // 0x18
	::RPG::GameCore::TurnBasedGameMode* __GameMode_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_585* NHNHKBJJKPP; // 0x28
	::System::Boolean BFPNJHNHPKC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2BC6DEA9272918D(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_D2BC6DEA9272918D_OFFSET))(this, a1);
	}

	::System::Void Method_1_867A3FAA5DC7C039(::RPG::GameCore::GameModeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_867A3FAA5DC7C039_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_F4E5958F2AE995E5(::RPG::GameCore::EventType a1, ::Class_0_16E4307DCC419505_460* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_F4E5958F2AE995E5_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_DISPOSE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7B0A9079CE9AD22(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_F7B0A9079CE9AD22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_B48B9ACDE1338CE6(::RPG::GameCore::TaskContext* a1, ::Class_1_843DD6330B22E422*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_1_843DD6330B22E422*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_B48B9ACDE1338CE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_1_5F2BD4DA4DAE944B()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_5F2BD4DA4DAE944B_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* get__GameMode()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_GET__GAMEMODE_OFFSET))(this);
	}

	::System::Void set__GameMode(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_SET__GAMEMODE_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleLineupData* Method_1_F004EAAEA47E15E3()
	{
		return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_F004EAAEA47E15E3_OFFSET))(this);
	}

	::Class_1_D90D29A0DA06B4F8_ERegisterMode get_RegisterMode()
	{
		return ((::Class_1_D90D29A0DA06B4F8_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_GET_REGISTERMODE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_585* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_585*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::Class_1_0BA87B0B199639ED* get_ProgressMonitor()
	{
		return ((::Class_1_0BA87B0B199639ED*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_GET_PROGRESSMONITOR_OFFSET))(this);
	}

	::System::Void set_ProgressMonitor(::Class_1_0BA87B0B199639ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BA87B0B199639ED*))((::PBYTE)hIl2Cpp + CLASS_1_D90D29A0DA06B4F8_SET_PROGRESSMONITOR_OFFSET))(this, a1);
	}
};
