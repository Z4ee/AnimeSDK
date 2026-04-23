#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseChestSystem_1.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"

class Class_1_4D11CE62B2BEC69E;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_18678530C6A46D22_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA55D780)
#define CLASS_2_18678530C6A46D22_METHOD_2_66072E2AF1BBDD70_OFFSET UNITYSDK_OFFSET(0xA55DD40)
#define CLASS_2_18678530C6A46D22_METHOD_2_FA85C25E5B64BAE6_OFFSET UNITYSDK_OFFSET(0xA55DFB0)
#define CLASS_2_18678530C6A46D22__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xA55D2C0)
#define CLASS_2_18678530C6A46D22__CTOR_OFFSET UNITYSDK_OFFSET(0xA55CC10)
#define CLASS_2_18678530C6A46D22__DEPLOYCHEST_OFFSET UNITYSDK_OFFSET(0xA55D600)
#define CLASS_2_18678530C6A46D22__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0xA55D540)
#define CLASS_2_18678530C6A46D22__SOLVESETSTATE_OFFSET UNITYSDK_OFFSET(0xA55D720)
#define CLASS_2_18678530C6A46D22__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA55D0A0)
#define CLASS_2_18678530C6A46D22___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA55E110)
#define CLASS_2_18678530C6A46D22___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xA55E100)

inline static constexpr unsigned int Class_2_18678530C6A46D22_TypeDefinitionIndex = 70470;

class Class_2_18678530C6A46D22 : public ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_2_3; // 0x40
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_2_4; // 0x48
	::Class_3_D6E9A038FA23103A* Field_2_2; // 0x50
	::Class_1_4D11CE62B2BEC69E* Field_2_1; // 0x58
	::System::Int32 Field_2_0; // 0x60

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__CREATETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _RemoveTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__REMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _DeployChest(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__DEPLOYCHEST_OFFSET))(this, a1);
	}

	::System::Void _SolveSetState(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimChestState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimChestState))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22__SOLVESETSTATE_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_66072E2AF1BBDD70(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22_METHOD_2_66072E2AF1BBDD70_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA85C25E5B64BAE6(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22_METHOD_2_FA85C25E5B64BAE6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18678530C6A46D22___IFIXBASEPROXY_EXECUTE_OFFSET))(this);
	}
};
