#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1300;
class Class_1_634284739E90CAFA;
class Class_1_F557D8DF0E2B57A7;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_1B85A1A2F31A0618_METHOD_1_099C21CA35AAE6DE_OFFSET UNITYSDK_OFFSET(0x188D5430)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_61D599FAED813BA8_OFFSET UNITYSDK_OFFSET(0x188D5680)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_6F7A18E5270890F6_OFFSET UNITYSDK_OFFSET(0x188D5B30)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_8F39F8A81222DA5E_OFFSET UNITYSDK_OFFSET(0x188D4C80)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_B7D002671AEB91ED_OFFSET UNITYSDK_OFFSET(0x188D48E0)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_CC649AF123E98A3C_OFFSET UNITYSDK_OFFSET(0x188D5930)
#define CLASS_1_1B85A1A2F31A0618_METHOD_1_FE9136FE91B29A40_OFFSET UNITYSDK_OFFSET(0x188D4BA0)
#define CLASS_1_1B85A1A2F31A0618__CTOR_OFFSET UNITYSDK_OFFSET(0x188D4270)

inline static constexpr unsigned int Class_1_1B85A1A2F31A0618_TypeDefinitionIndex = 77331;

class Class_1_1B85A1A2F31A0618 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingBattleBuffType, ::Class_0_16E4307DCC419505_1300*>* LKLHBHDHGII; // 0x10
	::Class_2_2090B77B5C7838F2* EEFMDEHLLFI; // 0x18
	::Class_1_F557D8DF0E2B57A7* JGPAKHPHKCN; // 0x20
	::Class_3_543326C044264182* PDENFEFCAGN; // 0x28

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7D002671AEB91ED(::Class_2_6B60059019300BAD* a1, ::Class_1_634284739E90CAFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_B7D002671AEB91ED_OFFSET))(this, a1, a2);
	}

	::Class_1_634284739E90CAFA* Method_1_8F39F8A81222DA5E(::Class_2_6B60059019300BAD* a1, ::Class_1_634284739E90CAFA* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_1_634284739E90CAFA*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_634284739E90CAFA*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_8F39F8A81222DA5E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_099C21CA35AAE6DE(::Class_2_6B60059019300BAD* a1, ::Class_1_634284739E90CAFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_099C21CA35AAE6DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_61D599FAED813BA8(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_61D599FAED813BA8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CC649AF123E98A3C(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_CC649AF123E98A3C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::Class_1_634284739E90CAFA*>* Method_1_6F7A18E5270890F6(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_634284739E90CAFA*>*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_6F7A18E5270890F6_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1300* Method_1_FE9136FE91B29A40(::RPG::GameCore::ChenLingBattleBuffType a1)
	{
		return ((::Class_0_16E4307DCC419505_1300*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618_METHOD_1_FE9136FE91B29A40_OFFSET))(this, a1);
	}
};
