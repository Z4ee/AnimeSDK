#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeWaitTimeByVote; }

#define CLASS_2_6CCD3F120A12D0AA_METHOD_2_201D16A3250E45E0_OFFSET UNITYSDK_OFFSET(0x17D4B810)
#define CLASS_2_6CCD3F120A12D0AA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4B800)

inline static constexpr unsigned int Class_2_6CCD3F120A12D0AA_TypeDefinitionIndex = 34770;

class Class_2_6CCD3F120A12D0AA : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + CLASS_2_6CCD3F120A12D0AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_201D16A3250E45E0(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CCD3F120A12D0AA_METHOD_2_201D16A3250E45E0_OFFSET))(this, a1, a2, a3);
	}
};
