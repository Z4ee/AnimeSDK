#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByCasterAction; }

#define CLASS_3_352DEE339038457B_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x169E7A90)
#define CLASS_3_352DEE339038457B__CTOR_OFFSET UNITYSDK_OFFSET(0x169E7A80)

inline static constexpr unsigned int Class_3_352DEE339038457B_TypeDefinitionIndex = 33198;

class Class_3_352DEE339038457B : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByCasterAction* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCasterAction*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_352DEE339038457B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_352DEE339038457B_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
