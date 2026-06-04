#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_56D27126E41B1789.h"

namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_2_962893896C6568F5_METHOD_2_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x13736100)
#define CLASS_2_962893896C6568F5_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13736350)
#define CLASS_2_962893896C6568F5__CTOR_OFFSET UNITYSDK_OFFSET(0x137360F0)

inline static constexpr unsigned int Class_2_962893896C6568F5_TypeDefinitionIndex = 59407;

class Class_2_962893896C6568F5 : public ::Class_1_56D27126E41B1789
{
public:
	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_METHOD_2_9809C99861C91775_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
