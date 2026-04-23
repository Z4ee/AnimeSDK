#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_37D655FAABC4D43A___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1254C8F0)
#define CLASS_2_37D655FAABC4D43A___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1254CAE0)

inline static constexpr unsigned int Class_2_37D655FAABC4D43A___c__DisplayClass5_0_TypeDefinitionIndex = 65746;

class Class_2_37D655FAABC4D43A___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _SetupView_b__0(::RPG::GameCore::DynamicFloat* x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___C__DISPLAYCLASS5_0__SETUPVIEW_B__0_OFFSET))(this, x);
	}
};
