#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0B2943A83765539.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_74361E0442AB1DB0_METHOD_2_0ADE6075E68BECB1_OFFSET UNITYSDK_OFFSET(0x1239A350)
#define CLASS_2_74361E0442AB1DB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1239A2D0)
#define CLASS_2_74361E0442AB1DB0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1239A3C0)
#define CLASS_2_74361E0442AB1DB0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x1239A280)
#define CLASS_2_74361E0442AB1DB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1239A250)

inline static constexpr unsigned int Class_2_74361E0442AB1DB0_TypeDefinitionIndex = 64682;

class Class_2_74361E0442AB1DB0 : public ::Class_1_E0B2943A83765539
{
public:
	::UnityEngine::AnimationCurve* Field_2_9; // 0x20
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28
	::System::Single Field_2_2; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_1; // 0x38
	::System::Single Field_2_7; // 0x3C
	::System::Int32 Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44
	::System::Boolean Field_2_8; // 0x48
	::System::Single Field_2_3; // 0x4C

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_0ADE6075E68BECB1()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_0ADE6075E68BECB1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
