#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCD4DFEA016B7F9.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define CLASS_2_1BBB2601B3EC11EB_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x14A29C90)
#define CLASS_2_1BBB2601B3EC11EB_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14A29D60)
#define CLASS_2_1BBB2601B3EC11EB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A29C80)

inline static constexpr unsigned int Class_2_1BBB2601B3EC11EB_TypeDefinitionIndex = 86366;

class Class_2_1BBB2601B3EC11EB : public ::Class_1_BCCD4DFEA016B7F9
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_1BBB2601B3EC11EB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1BBB2601B3EC11EB_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1BBB2601B3EC11EB_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
