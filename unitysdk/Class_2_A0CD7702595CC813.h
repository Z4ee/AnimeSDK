#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckSkillDependencyAxis; }

#define CLASS_2_A0CD7702595CC813_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x12504520)
#define CLASS_2_A0CD7702595CC813_METHOD_2_E346E758C76E06C9_OFFSET UNITYSDK_OFFSET(0x12504370)
#define CLASS_2_A0CD7702595CC813_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x12504300)
#define CLASS_2_A0CD7702595CC813__CTOR_OFFSET UNITYSDK_OFFSET(0x125042F0)

inline static constexpr unsigned int Class_2_A0CD7702595CC813_TypeDefinitionIndex = 50149;

class Class_2_A0CD7702595CC813 : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckSkillDependencyAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillDependencyAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillDependencyAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_E346E758C76E06C9(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_E346E758C76E06C9_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
