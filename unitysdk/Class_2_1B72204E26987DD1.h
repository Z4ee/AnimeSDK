#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionRoulette; }

#define CLASS_2_1B72204E26987DD1_METHOD_2_FF4554316D21AF15_OFFSET UNITYSDK_OFFSET(0x154131A0)
#define CLASS_2_1B72204E26987DD1__CTOR_OFFSET UNITYSDK_OFFSET(0x15413190)

inline static constexpr unsigned int Class_2_1B72204E26987DD1_TypeDefinitionIndex = 36706;

class Class_2_1B72204E26987DD1 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionRoulette* PDFMAIPKLAE; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionRoulette* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + CLASS_2_1B72204E26987DD1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF4554316D21AF15(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1B72204E26987DD1_METHOD_2_FF4554316D21AF15_OFFSET))(this, a1, a2, a3);
	}
};
