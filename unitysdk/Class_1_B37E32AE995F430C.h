#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B37E32AE995F430C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF5DF0)

inline static constexpr unsigned int Class_1_B37E32AE995F430C_TypeDefinitionIndex = 53796;

class Class_1_B37E32AE995F430C : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::BattleExtraPropertyAddition Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B37E32AE995F430C__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
