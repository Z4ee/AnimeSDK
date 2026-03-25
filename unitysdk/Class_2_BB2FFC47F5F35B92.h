#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_36006FC25F5DDC69.h"

namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BB2FFC47F5F35B92_METHOD_2_2DCB654D884123AC_OFFSET UNITYSDK_OFFSET(0x8820BF0)
#define CLASS_2_BB2FFC47F5F35B92_METHOD_2_CD28046FA6026F26_OFFSET UNITYSDK_OFFSET(0x8820B30)
#define CLASS_2_BB2FFC47F5F35B92__CTOR_OFFSET UNITYSDK_OFFSET(0x8820AC0)

inline static constexpr unsigned int Class_2_BB2FFC47F5F35B92_TypeDefinitionIndex = 63383;

class Class_2_BB2FFC47F5F35B92 : public ::Class_1_36006FC25F5DDC69
{
public:
	::Class_1_36006FC25F5DDC69* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_36006FC25F5DDC69* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36006FC25F5DDC69*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BB2FFC47F5F35B92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_CD28046FA6026F26(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_BB2FFC47F5F35B92_METHOD_2_CD28046FA6026F26_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_2DCB654D884123AC(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* P0)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_BB2FFC47F5F35B92_METHOD_2_2DCB654D884123AC_OFFSET))(this, P0);
	}
};
