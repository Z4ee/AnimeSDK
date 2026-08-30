#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_C91FC990AC75FA28_METHOD_2_78249B19E68F1C21_OFFSET UNITYSDK_OFFSET(0xBFADEF0)
#define CLASS_2_C91FC990AC75FA28__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAE0E0)
#define CLASS_2_C91FC990AC75FA28__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFADE50)

inline static constexpr unsigned int Class_2_C91FC990AC75FA28_TypeDefinitionIndex = 72168;

class Class_2_C91FC990AC75FA28 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
	::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91FC990AC75FA28__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91FC990AC75FA28__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_78249B19E68F1C21(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_C91FC990AC75FA28_METHOD_2_78249B19E68F1C21_OFFSET))(this, a1);
	}
};
