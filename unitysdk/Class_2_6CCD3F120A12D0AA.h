#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeWaitTimeByVote; }

#define CLASS_2_6CCD3F120A12D0AA_METHOD_2_201D16A3250E45E0_OFFSET UNITYSDK_OFFSET(0x17B07FF0)
#define CLASS_2_6CCD3F120A12D0AA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B07FE0)

inline static constexpr unsigned int Class_2_6CCD3F120A12D0AA_TypeDefinitionIndex = 35835;

class Class_2_6CCD3F120A12D0AA : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + CLASS_2_6CCD3F120A12D0AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_201D16A3250E45E0(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CCD3F120A12D0AA_METHOD_2_201D16A3250E45E0_OFFSET))(this, a1, a2, a3);
	}
};
