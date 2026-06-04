#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckSkillDependencyAxis; }

#define CLASS_2_A0CD7702595CC813_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xAB68780)
#define CLASS_2_A0CD7702595CC813_METHOD_2_E346E758C76E06C9_OFFSET UNITYSDK_OFFSET(0xAB685E0)
#define CLASS_2_A0CD7702595CC813_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0xAB68570)
#define CLASS_2_A0CD7702595CC813__CTOR_OFFSET UNITYSDK_OFFSET(0xAB68560)

inline static constexpr unsigned int Class_2_A0CD7702595CC813_TypeDefinitionIndex = 50816;

class Class_2_A0CD7702595CC813 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckSkillDependencyAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillDependencyAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillDependencyAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_E346E758C76E06C9(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_E346E758C76E06C9_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0CD7702595CC813_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
