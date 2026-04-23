#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBodyBipedChainBlender_1.h"

#define CLASS_2_5EA26E7CA6D6CD47_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92BC310)
#define CLASS_2_5EA26E7CA6D6CD47__CTOR_OFFSET UNITYSDK_OFFSET(0x92BC450)

inline static constexpr unsigned int Class_2_5EA26E7CA6D6CD47_TypeDefinitionIndex = 63260;

class Class_2_5EA26E7CA6D6CD47 : public ::RPG::Client::FullBodyBipedChainBlender_1<::System::Single>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EA26E7CA6D6CD47__CTOR_OFFSET))(this);
	}

	::System::Single Evaluate(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5EA26E7CA6D6CD47_EVALUATE_OFFSET))(this, a1);
	}
};
