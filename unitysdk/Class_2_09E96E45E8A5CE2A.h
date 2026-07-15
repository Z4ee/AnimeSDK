#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckTargetDistanceAxis; }

#define CLASS_2_09E96E45E8A5CE2A_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x140D4B10)
#define CLASS_2_09E96E45E8A5CE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x140D4B00)

inline static constexpr unsigned int Class_2_09E96E45E8A5CE2A_TypeDefinitionIndex = 51904;

class Class_2_09E96E45E8A5CE2A : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	::RPG::GameCore::CheckTargetDistanceAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTargetDistanceAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTargetDistanceAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_09E96E45E8A5CE2A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E96E45E8A5CE2A_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}
};
