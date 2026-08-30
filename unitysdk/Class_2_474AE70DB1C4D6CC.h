#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckSkillSPAxis; }

#define CLASS_2_474AE70DB1C4D6CC_METHOD_2_BE253ACF49BE36BD_OFFSET UNITYSDK_OFFSET(0x165B0A80)
#define CLASS_2_474AE70DB1C4D6CC_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x165B0A10)
#define CLASS_2_474AE70DB1C4D6CC__CTOR_OFFSET UNITYSDK_OFFSET(0x165B0A00)

inline static constexpr unsigned int Class_2_474AE70DB1C4D6CC_TypeDefinitionIndex = 54586;

class Class_2_474AE70DB1C4D6CC : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckSkillSPAxis* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillSPAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillSPAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_BE253ACF49BE36BD(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC_METHOD_2_BE253ACF49BE36BD_OFFSET))(this, a1);
	}
};
