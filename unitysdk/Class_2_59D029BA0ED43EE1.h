#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBodyBipedChainBlender_1.h"

#define CLASS_2_59D029BA0ED43EE1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x130A4FF0)
#define CLASS_2_59D029BA0ED43EE1__CTOR_OFFSET UNITYSDK_OFFSET(0x130A50E0)

inline static constexpr unsigned int Class_2_59D029BA0ED43EE1_TypeDefinitionIndex = 68563;

class Class_2_59D029BA0ED43EE1 : public ::RPG::Client::FullBodyBipedChainBlender_1<::System::Single>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59D029BA0ED43EE1__CTOR_OFFSET))(this);
	}

	::System::Single Evaluate(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59D029BA0ED43EE1_EVALUATE_OFFSET))(this, a1);
	}
};
