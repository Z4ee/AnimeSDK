#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckVisionAxis; }

#define CLASS_2_3DECAB416F6B1081_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x18BD18B0)
#define CLASS_2_3DECAB416F6B1081__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD18A0)

inline static constexpr unsigned int Class_2_3DECAB416F6B1081_TypeDefinitionIndex = 54591;

class Class_2_3DECAB416F6B1081 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckVisionAxis* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckVisionAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckVisionAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_3DECAB416F6B1081__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DECAB416F6B1081_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}
};
