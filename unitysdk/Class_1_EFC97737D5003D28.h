#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5E54645B08227;
class Class_1_96586C089CD5CA69;
class Class_1_97F9E33E53026E4C;
namespace System::Collections { class IEnumerator; }

#define CLASS_1_EFC97737D5003D28_METHOD_1_A34A959420794FF1_1_OFFSET UNITYSDK_OFFSET(0x19511D70)
#define CLASS_1_EFC97737D5003D28_METHOD_1_A34A959420794FF1_OFFSET UNITYSDK_OFFSET(0x19511CD0)
#define CLASS_1_EFC97737D5003D28__CTOR_OFFSET UNITYSDK_OFFSET(0x19511BE0)

inline static constexpr unsigned int Class_1_EFC97737D5003D28_TypeDefinitionIndex = 79430;

class Class_1_EFC97737D5003D28 : public ::System::Object
{
public:
	::Class_1_11B5E54645B08227* FKMPGPCHLNL; // 0x10
	::Class_1_97F9E33E53026E4C* GCNNDHCLBPI; // 0x18
	::Class_1_96586C089CD5CA69* CGFKNIOKJAH; // 0x20

	::System::Void _ctor(::Class_1_97F9E33E53026E4C* a1, ::Class_1_11B5E54645B08227* a2, ::Class_1_96586C089CD5CA69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97F9E33E53026E4C*, ::Class_1_11B5E54645B08227*, ::Class_1_96586C089CD5CA69*))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_A34A959420794FF1(::System::UInt32 a1, ::RPG::GameCore::BattleResultState a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28_METHOD_1_A34A959420794FF1_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_A34A959420794FF1_1(::System::UInt32 a1, ::RPG::GameCore::BattleResultState a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLASS_1_EFC97737D5003D28_METHOD_1_A34A959420794FF1_1_OFFSET))(this, a1, a2);
	}
};
