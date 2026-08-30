#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_56D27126E41B1789.h"

namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_2_962893896C6568F5_5_METHOD_2_6192246143E6A40B_OFFSET UNITYSDK_OFFSET(0x176F6DE0)
#define CLASS_2_962893896C6568F5_5__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6DD0)

inline static constexpr unsigned int Class_2_962893896C6568F5_5_TypeDefinitionIndex = 63537;

class Class_2_962893896C6568F5_5 : public ::Class_1_56D27126E41B1789
{
public:
	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_6192246143E6A40B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_5_METHOD_2_6192246143E6A40B_OFFSET))(this);
	}
};
