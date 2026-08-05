#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_54B6207171F8D635___C_METHOD_1_26D960C4A13E91EE_OFFSET UNITYSDK_OFFSET(0x14EF71E0)
#define CLASS_2_54B6207171F8D635___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EF7190)
#define CLASS_2_54B6207171F8D635___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF71D0)

inline static constexpr unsigned int Class_2_54B6207171F8D635___c_TypeDefinitionIndex = 88175;

class Class_2_54B6207171F8D635___c : public ::System::Object
{
public:
	static ::Class_2_54B6207171F8D635___c** StaticGet___9()
	{
		return (::Class_2_54B6207171F8D635___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54B6207171F8D635___c_TypeDefinitionIndex)->GetStaticField(0x31470);
	}
	static ::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>** StaticGet___9__63_0()
	{
		return (::System::Comparison_1<::MoleMole::BattleGameWeatherAndTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_54B6207171F8D635___c_TypeDefinitionIndex)->GetStaticField(0x31478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_26D960C4A13E91EE(::MoleMole::BattleGameWeatherAndTime a1, ::MoleMole::BattleGameWeatherAndTime a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635___C_METHOD_1_26D960C4A13E91EE_OFFSET))(this, a1, a2);
	}
};
