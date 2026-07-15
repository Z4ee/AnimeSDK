#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseChestSystem_1.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8680086CACBE51E9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x188CA700)
#define CLASS_2_8680086CACBE51E9_METHOD_2_8E815BF684A5A750_OFFSET UNITYSDK_OFFSET(0x188CAB40)
#define CLASS_2_8680086CACBE51E9_METHOD_2_CF6091CB7ACD16CF_OFFSET UNITYSDK_OFFSET(0x188CAE10)
#define CLASS_2_8680086CACBE51E9__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x188CA3C0)
#define CLASS_2_8680086CACBE51E9__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA010)
#define CLASS_2_8680086CACBE51E9__DEPLOYCHEST_OFFSET UNITYSDK_OFFSET(0x188CA600)
#define CLASS_2_8680086CACBE51E9__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x188CA560)
#define CLASS_2_8680086CACBE51E9__SOLVESETSTATE_OFFSET UNITYSDK_OFFSET(0x188CA6A0)
#define CLASS_2_8680086CACBE51E9__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x188CA310)

inline static constexpr unsigned int Class_2_8680086CACBE51E9_TypeDefinitionIndex = 72810;

class Class_2_8680086CACBE51E9 : public ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_1_2CDF619C23140440* Field_2_0; // 0x40
	::Class_3_001D9EA49F6215B6* Field_2_1; // 0x48
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_2_2; // 0x50
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_2_3; // 0x58
	::System::Int32 Field_2_4; // 0x60

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__CREATETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _RemoveTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__REMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _DeployChest(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__DEPLOYCHEST_OFFSET))(this, a1);
	}

	::System::Void _SolveSetState(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimChestState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimChestState))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9__SOLVESETSTATE_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_8E815BF684A5A750(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9_METHOD_2_8E815BF684A5A750_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF6091CB7ACD16CF(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_8680086CACBE51E9_METHOD_2_CF6091CB7ACD16CF_OFFSET))(this, a1);
	}
};
