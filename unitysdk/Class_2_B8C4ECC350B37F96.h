#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreateManikinEntity; }

#define CLASS_2_B8C4ECC350B37F96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113A5010)
#define CLASS_2_B8C4ECC350B37F96_METHOD_2_648494E60B94E757_OFFSET UNITYSDK_OFFSET(0x113A53E0)
#define CLASS_2_B8C4ECC350B37F96_METHOD_2_76E370440BCD1F7F_OFFSET UNITYSDK_OFFSET(0x113A5540)
#define CLASS_2_B8C4ECC350B37F96_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x113A5060)
#define CLASS_2_B8C4ECC350B37F96_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113A5260)
#define CLASS_2_B8C4ECC350B37F96_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113A5490)
#define CLASS_2_B8C4ECC350B37F96_TICK_OFFSET UNITYSDK_OFFSET(0x113A54E0)
#define CLASS_2_B8C4ECC350B37F96__CTOR_OFFSET UNITYSDK_OFFSET(0x113A5000)

inline static constexpr unsigned int Class_2_B8C4ECC350B37F96_TypeDefinitionIndex = 43254;

class Class_2_B8C4ECC350B37F96 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TrainPartyCreateManikinEntity* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreateManikinEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_76E370440BCD1F7F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_METHOD_2_76E370440BCD1F7F_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_648494E60B94E757()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_METHOD_2_648494E60B94E757_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C4ECC350B37F96_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
