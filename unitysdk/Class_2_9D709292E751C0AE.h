#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87F8FFF9F8728678.h"

namespace System { class String; }

#define CLASS_2_9D709292E751C0AE_METHOD_2_DF625BC9B903430E_OFFSET UNITYSDK_OFFSET(0x13B1AF80)
#define CLASS_2_9D709292E751C0AE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1B080)

inline static constexpr unsigned int Class_2_9D709292E751C0AE_TypeDefinitionIndex = 70928;

class Class_2_9D709292E751C0AE : public ::Class_1_87F8FFF9F8728678
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D709292E751C0AE__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DF625BC9B903430E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D709292E751C0AE_METHOD_2_DF625BC9B903430E_OFFSET))(this, a1, a2);
	}
};
