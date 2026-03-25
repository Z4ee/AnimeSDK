#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkWeatherInEffect; }

#define CLASS_2_7974FB57182FAE99_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x165F0BF0)
#define CLASS_2_7974FB57182FAE99__CTOR_OFFSET UNITYSDK_OFFSET(0x165F0BE0)

inline static constexpr unsigned int Class_2_7974FB57182FAE99_TypeDefinitionIndex = 28416;

class Class_2_7974FB57182FAE99 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* Field_2_0; // 0x18
	::Class_1_B1A7D8EBAB39D13D* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_7974FB57182FAE99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7974FB57182FAE99_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
