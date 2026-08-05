#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_A8902709072EE71F_CLASS_1_B7650CDBAD082F15_COMPARETO_OFFSET UNITYSDK_OFFSET(0x11EA8C00)
#define CLASS_1_A8902709072EE71F_CLASS_1_B7650CDBAD082F15__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA8340)

inline static constexpr unsigned int Class_1_A8902709072EE71F_Class_1_B7650CDBAD082F15_TypeDefinitionIndex = 48875;

class Class_1_A8902709072EE71F_Class_1_B7650CDBAD082F15 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_1_B7650CDBAD082F15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 CompareTo(::Class_1_A8902709072EE71F_Class_1_B7650CDBAD082F15* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A8902709072EE71F_Class_1_B7650CDBAD082F15*))((::PBYTE)hIl2Cpp + CLASS_1_A8902709072EE71F_CLASS_1_B7650CDBAD082F15_COMPARETO_OFFSET))(this, a1);
	}
};
