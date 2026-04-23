#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleByDefenderFeature; }

#define CLASS_3_811101AE06ED81AB_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x17DDDE70)
#define CLASS_3_811101AE06ED81AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDDE50)

inline static constexpr unsigned int Class_3_811101AE06ED81AB_TypeDefinitionIndex = 38991;

class Class_3_811101AE06ED81AB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByDefenderFeature* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByDefenderFeature* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByDefenderFeature*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_811101AE06ED81AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_811101AE06ED81AB_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
