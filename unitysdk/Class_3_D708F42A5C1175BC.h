#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameModifier_AbilityMaxUsableCount; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D708F42A5C1175BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E0CFD0)
#define CLASS_3_D708F42A5C1175BC_METHOD_3_43A0C4BCAAC2B326_OFFSET UNITYSDK_OFFSET(0x18E0CCC0)
#define CLASS_3_D708F42A5C1175BC_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x18E0CD70)
#define CLASS_3_D708F42A5C1175BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E0CA40)
#define CLASS_3_D708F42A5C1175BC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E0CD20)
#define CLASS_3_D708F42A5C1175BC__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0CA10)

inline static constexpr unsigned int Class_3_D708F42A5C1175BC_TypeDefinitionIndex = 58564;

class Class_3_D708F42A5C1175BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*>
{
public:
	::System::Boolean AMBLEJEBOIA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_3_43A0C4BCAAC2B326(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC_METHOD_3_43A0C4BCAAC2B326_OFFSET))(a1);
	}

	::System::Void Method_3_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D708F42A5C1175BC_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
	}
};
