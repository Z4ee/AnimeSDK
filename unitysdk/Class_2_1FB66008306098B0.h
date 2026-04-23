#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0B2943A83765539.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture; }

#define CLASS_2_1FB66008306098B0_METHOD_2_0ADE6075E68BECB1_OFFSET UNITYSDK_OFFSET(0x117FFD60)
#define CLASS_2_1FB66008306098B0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x117FFDD0)
#define CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x117FFC90)
#define CLASS_2_1FB66008306098B0_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x117FFCE0)
#define CLASS_2_1FB66008306098B0__CTOR_OFFSET UNITYSDK_OFFSET(0x117FFC70)

inline static constexpr unsigned int Class_2_1FB66008306098B0_TypeDefinitionIndex = 64679;

class Class_2_1FB66008306098B0 : public ::Class_1_E0B2943A83765539
{
public:
	::UnityEngine::AnimationCurve* Field_2_12; // 0x20
	::UnityEngine::Texture* Field_2_11; // 0x28
	::System::Single Field_2_10; // 0x30
	::System::Single Field_2_8; // 0x34
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_3; // 0x3C
	::System::Single Field_2_1; // 0x40
	::System::Single Field_2_5; // 0x44
	::RPG::CustomRP::ColorGradingGradual Field_2_0; // 0x48
	::System::Single Field_2_2; // 0x4C
	::System::Single Field_2_9; // 0x50
	::System::Single Field_2_6; // 0x54
	::System::Single Field_2_4; // 0x58

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_0ADE6075E68BECB1()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_0ADE6075E68BECB1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
