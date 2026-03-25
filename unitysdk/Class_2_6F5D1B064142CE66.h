#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_6F5D1B064142CE66_GobackStage.h"

class Class_1_69FF5DE516C87A66;
class Class_2_3F4D673D3F90D12C;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCGoback; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6F5D1B064142CE66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1116A630)
#define CLASS_2_6F5D1B064142CE66_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x1116AC90)
#define CLASS_2_6F5D1B064142CE66_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1116AD60)
#define CLASS_2_6F5D1B064142CE66_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x1116A9B0)
#define CLASS_2_6F5D1B064142CE66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1116A720)
#define CLASS_2_6F5D1B064142CE66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1116AB00)
#define CLASS_2_6F5D1B064142CE66_TICK_OFFSET UNITYSDK_OFFSET(0x1116ABD0)
#define CLASS_2_6F5D1B064142CE66__CTOR_OFFSET UNITYSDK_OFFSET(0x1116A220)

inline static constexpr unsigned int Class_2_6F5D1B064142CE66_TypeDefinitionIndex = 42437;

class Class_2_6F5D1B064142CE66 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* Field_2_5; // 0x18
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::RPG::GameCore::AdvNPCGoback* Field_2_0; // 0x38
	::Class_2_A0580152EB393340* Field_2_7; // 0x40
	::Class_1_69FF5DE516C87A66* Field_2_3; // 0x48
	::Class_2_3F4D673D3F90D12C* Field_2_8; // 0x50
	::Class_2_469A56953483CA0D* Field_2_6; // 0x58
	::Class_2_6F5D1B064142CE66_GobackStage Field_2_9; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGoback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F5D1B064142CE66_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
