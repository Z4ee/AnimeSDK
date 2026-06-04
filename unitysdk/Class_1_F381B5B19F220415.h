#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_456;
class Class_0_16E4307DCC419505_473;
class Class_2_598F931966315ABD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F381B5B19F220415_GET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13B121A0)
#define CLASS_1_F381B5B19F220415_METHOD_1_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0x13B11E30)
#define CLASS_1_F381B5B19F220415_METHOD_1_19B06E910111E423_OFFSET UNITYSDK_OFFSET(0x13B12130)
#define CLASS_1_F381B5B19F220415_METHOD_1_2C94CDB22F392264_OFFSET UNITYSDK_OFFSET(0x13B11C50)
#define CLASS_1_F381B5B19F220415_METHOD_1_3537A38B592D454A_OFFSET UNITYSDK_OFFSET(0x13B11ED0)
#define CLASS_1_F381B5B19F220415_METHOD_1_B3A624069DA9AF1B_OFFSET UNITYSDK_OFFSET(0x13B117C0)
#define CLASS_1_F381B5B19F220415_METHOD_1_CA8DEC0C24E88E8A_OFFSET UNITYSDK_OFFSET(0x13B11AD0)
#define CLASS_1_F381B5B19F220415_METHOD_1_FB463B822ED24C2E_OFFSET UNITYSDK_OFFSET(0x13B118E0)
#define CLASS_1_F381B5B19F220415_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x13B115C0)
#define CLASS_1_F381B5B19F220415_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x13B116C0)
#define CLASS_1_F381B5B19F220415_SET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13B121B0)
#define CLASS_1_F381B5B19F220415__CTOR_OFFSET UNITYSDK_OFFSET(0x13B121C0)

inline static constexpr unsigned int Class_1_F381B5B19F220415_TypeDefinitionIndex = 50568;

class Class_1_F381B5B19F220415 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_598F931966315ABD*>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_473* _SnapshotProcessor_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_ONPLUGINUNINIT_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B3A624069DA9AF1B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_B3A624069DA9AF1B_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FB463B822ED24C2E(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_456* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_456*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_FB463B822ED24C2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C94CDB22F392264(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_456* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_456*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_2C94CDB22F392264_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::Class_2_598F931966315ABD* Method_1_CA8DEC0C24E88E8A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_598F931966315ABD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_CA8DEC0C24E88E8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3537A38B592D454A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_3537A38B592D454A_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntity* Method_1_19B06E910111E423(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_19B06E910111E423_OFFSET))(a1);
	}

	::Class_0_16E4307DCC419505_473* get_SnapshotProcessor()
	{
		return ((::Class_0_16E4307DCC419505_473*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_GET_SNAPSHOTPROCESSOR_OFFSET))(this);
	}

	::System::Void set_SnapshotProcessor(::Class_0_16E4307DCC419505_473* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_473*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_SET_SNAPSHOTPROCESSOR_OFFSET))(this, a1);
	}
};
