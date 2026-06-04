#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsCardUseCheckResult.h"

class Class_1_D2E90365D99FC7E6_6;
class Class_1_FF872820A2FF123B;
class Class_3_C71DDDA66421C541;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F585D693B2F4E4F1_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x138E8060)
#define CLASS_2_F585D693B2F4E4F1__CTOR_OFFSET UNITYSDK_OFFSET(0x138E8040)

inline static constexpr unsigned int Class_2_F585D693B2F4E4F1_TypeDefinitionIndex = 56404;

class Class_2_F585D693B2F4E4F1 : public ::Class_1_2231FD56C070349F
{
public:
	::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_6*>* Field_2_0; // 0x18
	::Class_1_FF872820A2FF123B* Field_2_1; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::Class_1_FF872820A2FF123B* a2, ::System::UInt32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult a4, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_6*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::Class_1_FF872820A2FF123B*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_6*>*))((::PBYTE)hIl2Cpp + CLASS_2_F585D693B2F4E4F1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F585D693B2F4E4F1_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}
};
