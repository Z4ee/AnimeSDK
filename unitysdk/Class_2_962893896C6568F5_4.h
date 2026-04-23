#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_56D27126E41B1789.h"

namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_2_962893896C6568F5_4_METHOD_2_61B2BEE1A537C4F9_OFFSET UNITYSDK_OFFSET(0x9705540)
#define CLASS_2_962893896C6568F5_4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9705730)
#define CLASS_2_962893896C6568F5_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9705530)

inline static constexpr unsigned int Class_2_962893896C6568F5_4_TypeDefinitionIndex = 58482;

class Class_2_962893896C6568F5_4 : public ::Class_1_56D27126E41B1789
{
public:
	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_61B2BEE1A537C4F9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_4_METHOD_2_61B2BEE1A537C4F9_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
