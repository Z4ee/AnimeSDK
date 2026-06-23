#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0EAF9D2EC965AF17___C_METHOD_1_26D960C4A13E91EE_OFFSET UNITYSDK_OFFSET(0x145B77A0)
#define CLASS_2_0EAF9D2EC965AF17___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145B7750)
#define CLASS_2_0EAF9D2EC965AF17___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145B7790)

inline static constexpr unsigned int Class_2_0EAF9D2EC965AF17___c_TypeDefinitionIndex = 78893;

class Class_2_0EAF9D2EC965AF17___c : public ::System::Object
{
public:
	static ::Class_2_0EAF9D2EC965AF17___c** StaticGet___9()
	{
		return (::Class_2_0EAF9D2EC965AF17___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EAF9D2EC965AF17___c_TypeDefinitionIndex)->GetStaticField(0x390F0);
	}
	static ::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>** StaticGet___9__41_0()
	{
		return (::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EAF9D2EC965AF17___c_TypeDefinitionIndex)->GetStaticField(0x390F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_26D960C4A13E91EE(::MoleMole::BattleGameWeatherAndTime a1, ::MoleMole::BattleGameWeatherAndTime a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17___C_METHOD_1_26D960C4A13E91EE_OFFSET))(this, a1, a2);
	}
};
