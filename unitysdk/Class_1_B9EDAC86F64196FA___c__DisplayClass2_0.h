#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15775250)
#define CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS2_0__SYNCHRONIZEONE_B__0_OFFSET UNITYSDK_OFFSET(0x157758E0)

inline static constexpr unsigned int Class_1_B9EDAC86F64196FA___c__DisplayClass2_0_TypeDefinitionIndex = 79510;

class Class_1_B9EDAC86F64196FA___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Func_2<::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint>* __9__0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _SynchronizeOne_b__0(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS2_0__SYNCHRONIZEONE_B__0_OFFSET))(this, a1);
	}
};
