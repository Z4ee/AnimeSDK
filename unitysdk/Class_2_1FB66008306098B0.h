#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6B6A4C789452DEC6.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture; }

#define CLASS_2_1FB66008306098B0_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x14B948C0)
#define CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x14B94870)
#define CLASS_2_1FB66008306098B0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B94850)

inline static constexpr unsigned int Class_2_1FB66008306098B0_TypeDefinitionIndex = 67017;

class Class_2_1FB66008306098B0 : public ::Class_1_6B6A4C789452DEC6
{
public:
	::UnityEngine::AnimationCurve* Field_2_0; // 0x20
	::UnityEngine::Texture* Field_2_1; // 0x28
	::System::Single Field_2_2; // 0x30
	::RPG::CustomRP::ColorGradingGradual Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_7; // 0x44
	::System::Single Field_2_8; // 0x48
	::System::Single Field_2_9; // 0x4C
	::System::Single Field_2_10; // 0x50
	::System::Single Field_2_11; // 0x54
	::System::Single Field_2_12; // 0x58

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}
};
