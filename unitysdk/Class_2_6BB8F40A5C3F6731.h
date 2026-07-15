#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionBubbleCell; }

#define CLASS_2_6BB8F40A5C3F6731_METHOD_2_7F25217324FB4453_OFFSET UNITYSDK_OFFSET(0x17B0E820)
#define CLASS_2_6BB8F40A5C3F6731__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0E810)

inline static constexpr unsigned int Class_2_6BB8F40A5C3F6731_TypeDefinitionIndex = 35817;

class Class_2_6BB8F40A5C3F6731 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*))((::PBYTE)hIl2Cpp + CLASS_2_6BB8F40A5C3F6731__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F25217324FB4453(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6BB8F40A5C3F6731_METHOD_2_7F25217324FB4453_OFFSET))(this, a1, a2, a3);
	}
};
