#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C3043088B2B3050_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17696720)
#define CLASS_3_7C3043088B2B3050_EVALUATE_OFFSET UNITYSDK_OFFSET(0x176967F0)
#define CLASS_3_7C3043088B2B3050_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x176968A0)
#define CLASS_3_7C3043088B2B3050_METHOD_3_9EC654A69B4EBC33_OFFSET UNITYSDK_OFFSET(0x176969E0)
#define CLASS_3_7C3043088B2B3050__CTOR_OFFSET UNITYSDK_OFFSET(0x17696630)

inline static constexpr unsigned int Class_3_7C3043088B2B3050_TypeDefinitionIndex = 55395;

class Class_3_7C3043088B2B3050 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTurnCountMatch*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::RPG::GameCore::TeamType Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x34
	::System::UInt32 Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_3_9EC654A69B4EBC33(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_METHOD_3_9EC654A69B4EBC33_OFFSET))(this, a1);
	}
};
