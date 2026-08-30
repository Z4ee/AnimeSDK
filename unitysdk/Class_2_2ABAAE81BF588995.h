#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FF829EFDD29B81.h"

namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2ABAAE81BF588995_METHOD_2_E2D07EC15AA24C11_OFFSET UNITYSDK_OFFSET(0x18E58A50)
#define CLASS_2_2ABAAE81BF588995__CTOR_OFFSET UNITYSDK_OFFSET(0x18E589C0)

inline static constexpr unsigned int Class_2_2ABAAE81BF588995_TypeDefinitionIndex = 77454;

class Class_2_2ABAAE81BF588995 : public ::Class_1_B8FF829EFDD29B81
{
public:
	::Class_1_B8FF829EFDD29B81* LNGNFBOLKDD; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* AEJNBIDCBCM; // 0x48

	::System::Void _ctor(::Class_1_B8FF829EFDD29B81* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8FF829EFDD29B81*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ABAAE81BF588995__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_E2D07EC15AA24C11(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_2ABAAE81BF588995_METHOD_2_E2D07EC15AA24C11_OFFSET))(this, a1);
	}
};
