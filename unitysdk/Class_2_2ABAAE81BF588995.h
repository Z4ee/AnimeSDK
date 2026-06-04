#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FF829EFDD29B81.h"

namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2ABAAE81BF588995_METHOD_2_06714CF212D39DB9_OFFSET UNITYSDK_OFFSET(0x1422BFC0)
#define CLASS_2_2ABAAE81BF588995_METHOD_2_4B7DD3E1AD69760F_OFFSET UNITYSDK_OFFSET(0x1422BEF0)
#define CLASS_2_2ABAAE81BF588995__CTOR_OFFSET UNITYSDK_OFFSET(0x1422BE60)

inline static constexpr unsigned int Class_2_2ABAAE81BF588995_TypeDefinitionIndex = 72445;

class Class_2_2ABAAE81BF588995 : public ::Class_1_B8FF829EFDD29B81
{
public:
	::Class_1_B8FF829EFDD29B81* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_B8FF829EFDD29B81* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8FF829EFDD29B81*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ABAAE81BF588995__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_4B7DD3E1AD69760F(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_2ABAAE81BF588995_METHOD_2_4B7DD3E1AD69760F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_06714CF212D39DB9(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_2ABAAE81BF588995_METHOD_2_06714CF212D39DB9_OFFSET))(this, a1);
	}
};
