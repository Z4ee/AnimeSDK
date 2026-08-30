#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseChestSystem_1.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_709E3B23E51567BD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18FDB070)
#define CLASS_2_709E3B23E51567BD_METHOD_2_CF6091CB7ACD16CF_OFFSET UNITYSDK_OFFSET(0x18FDB860)
#define CLASS_2_709E3B23E51567BD_METHOD_2_E360D63C55A15E48_OFFSET UNITYSDK_OFFSET(0x18FDB4D0)
#define CLASS_2_709E3B23E51567BD__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x18FDACE0)
#define CLASS_2_709E3B23E51567BD__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDA8E0)
#define CLASS_2_709E3B23E51567BD__DEPLOYCHEST_OFFSET UNITYSDK_OFFSET(0x18FDAF70)
#define CLASS_2_709E3B23E51567BD__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x18FDAEB0)
#define CLASS_2_709E3B23E51567BD__SOLVESETSTATE_OFFSET UNITYSDK_OFFSET(0x18FDB010)
#define CLASS_2_709E3B23E51567BD__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18FDAC00)

inline static constexpr unsigned int Class_2_709E3B23E51567BD_TypeDefinitionIndex = 76270;

class Class_2_709E3B23E51567BD : public ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x40
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x48
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* MGGKABMNGMN; // 0x50
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* INHFIMENLND; // 0x58
	::System::Int32 NHADOMDPGAL; // 0x60

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__CREATETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _RemoveTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__REMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _DeployChest(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__DEPLOYCHEST_OFFSET))(this, a1);
	}

	::System::Void _SolveSetState(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimChestState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimChestState))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD__SOLVESETSTATE_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_E360D63C55A15E48(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD_METHOD_2_E360D63C55A15E48_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF6091CB7ACD16CF(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_709E3B23E51567BD_METHOD_2_CF6091CB7ACD16CF_OFFSET))(this, a1);
	}
};
