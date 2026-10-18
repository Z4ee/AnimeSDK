#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_603;
class Class_0_16E4307DCC419505_620;
class Class_2_B17E52118274EB03;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F381B5B19F220415_GET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15C8C540)
#define CLASS_1_F381B5B19F220415_METHOD_1_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0x15C8C1D0)
#define CLASS_1_F381B5B19F220415_METHOD_1_19B06E910111E423_OFFSET UNITYSDK_OFFSET(0x15C8C4D0)
#define CLASS_1_F381B5B19F220415_METHOD_1_2C94CDB22F392264_OFFSET UNITYSDK_OFFSET(0x15C8BFF0)
#define CLASS_1_F381B5B19F220415_METHOD_1_3537A38B592D454A_OFFSET UNITYSDK_OFFSET(0x15C8C270)
#define CLASS_1_F381B5B19F220415_METHOD_1_B3A624069DA9AF1B_OFFSET UNITYSDK_OFFSET(0x15C8BB60)
#define CLASS_1_F381B5B19F220415_METHOD_1_CA8DEC0C24E88E8A_OFFSET UNITYSDK_OFFSET(0x15C8BE70)
#define CLASS_1_F381B5B19F220415_METHOD_1_FB463B822ED24C2E_OFFSET UNITYSDK_OFFSET(0x15C8BC80)
#define CLASS_1_F381B5B19F220415_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15C8B980)
#define CLASS_1_F381B5B19F220415_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15C8BA70)
#define CLASS_1_F381B5B19F220415_SET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15C8C550)
#define CLASS_1_F381B5B19F220415__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8C560)

inline static constexpr unsigned int Class_1_F381B5B19F220415_TypeDefinitionIndex = 54120;

class Class_1_F381B5B19F220415 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_B17E52118274EB03*>* CNMPKHNBCFE; // 0x18
	::Class_0_16E4307DCC419505_620* _SnapshotProcessor_k__BackingField; // 0x20

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

	::RPG::GameCore::GameEntity* Method_1_FB463B822ED24C2E(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_603* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_603*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_FB463B822ED24C2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C94CDB22F392264(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_603* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_603*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_2C94CDB22F392264_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::Class_2_B17E52118274EB03* Method_1_CA8DEC0C24E88E8A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_B17E52118274EB03*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_CA8DEC0C24E88E8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3537A38B592D454A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_3537A38B592D454A_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntity* Method_1_19B06E910111E423(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_METHOD_1_19B06E910111E423_OFFSET))(a1);
	}

	::Class_0_16E4307DCC419505_620* get_SnapshotProcessor()
	{
		return ((::Class_0_16E4307DCC419505_620*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_GET_SNAPSHOTPROCESSOR_OFFSET))(this);
	}

	::System::Void set_SnapshotProcessor(::Class_0_16E4307DCC419505_620* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_620*))((::PBYTE)hIl2Cpp + CLASS_1_F381B5B19F220415_SET_SNAPSHOTPROCESSOR_OFFSET))(this, a1);
	}
};
