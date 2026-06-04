#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeValidItem; }

#define CLASS_2_5F4001BCEA7E8470_METHOD_2_5FDEFF0F1923DDCF_OFFSET UNITYSDK_OFFSET(0x18B846A0)
#define CLASS_2_5F4001BCEA7E8470__CTOR_OFFSET UNITYSDK_OFFSET(0x18B84690)

inline static constexpr unsigned int Class_2_5F4001BCEA7E8470_TypeDefinitionIndex = 35052;

class Class_2_5F4001BCEA7E8470 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionChangeValidItem* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeValidItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeValidItem*))((::PBYTE)hIl2Cpp + CLASS_2_5F4001BCEA7E8470__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FDEFF0F1923DDCF(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5F4001BCEA7E8470_METHOD_2_5FDEFF0F1923DDCF_OFFSET))(this, a1, a2, a3);
	}
};
