#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckCurrentAIPhaseAxis; }

#define CLASS_2_7E61EDEB571619E9_METHOD_2_CA1B81A004A48872_OFFSET UNITYSDK_OFFSET(0x188D17D0)
#define CLASS_2_7E61EDEB571619E9__CTOR_OFFSET UNITYSDK_OFFSET(0x188D17C0)

inline static constexpr unsigned int Class_2_7E61EDEB571619E9_TypeDefinitionIndex = 54580;

class Class_2_7E61EDEB571619E9 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckCurrentAIPhaseAxis* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckCurrentAIPhaseAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckCurrentAIPhaseAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_CA1B81A004A48872()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9_METHOD_2_CA1B81A004A48872_OFFSET))(this);
	}
};
