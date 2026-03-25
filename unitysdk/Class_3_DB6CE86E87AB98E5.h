#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByCheckSealId; }

#define CLASS_3_DB6CE86E87AB98E5_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x16852EF0)
#define CLASS_3_DB6CE86E87AB98E5__CTOR_OFFSET UNITYSDK_OFFSET(0x16852ED0)

inline static constexpr unsigned int Class_3_DB6CE86E87AB98E5_TypeDefinitionIndex = 33208;

class Class_3_DB6CE86E87AB98E5 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckSealId* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealId* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealId*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_DB6CE86E87AB98E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB6CE86E87AB98E5_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
