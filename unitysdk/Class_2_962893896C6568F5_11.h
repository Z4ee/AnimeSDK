#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_56D27126E41B1789.h"

namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_2_962893896C6568F5_11_METHOD_2_4B2CD7086A8CA682_OFFSET UNITYSDK_OFFSET(0x11AAF4F0)
#define CLASS_2_962893896C6568F5_11_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11AAF690)
#define CLASS_2_962893896C6568F5_11__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAF4E0)

inline static constexpr unsigned int Class_2_962893896C6568F5_11_TypeDefinitionIndex = 58489;

class Class_2_962893896C6568F5_11 : public ::Class_1_56D27126E41B1789
{
public:
	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_11__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4B2CD7086A8CA682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_11_METHOD_2_4B2CD7086A8CA682_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_962893896C6568F5_11_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
