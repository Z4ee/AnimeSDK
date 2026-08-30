#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_5FA6F7B2482A3E07_METHOD_2_958B126D55B718A5_OFFSET UNITYSDK_OFFSET(0x160B9570)
#define CLASS_2_5FA6F7B2482A3E07_METHOD_2_F719CD6CA9B3F622_OFFSET UNITYSDK_OFFSET(0x160B9620)
#define CLASS_2_5FA6F7B2482A3E07__CTOR_OFFSET UNITYSDK_OFFSET(0x160B9800)
#define CLASS_2_5FA6F7B2482A3E07__ONBIND_OFFSET UNITYSDK_OFFSET(0x160B94C0)

inline static constexpr unsigned int Class_2_5FA6F7B2482A3E07_TypeDefinitionIndex = 72194;

class Class_2_5FA6F7B2482A3E07 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Image* LEFBNCHKJIG; // 0x60
	::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x68
	::UnityEngine::UI::Text* CJKKKGDDKHC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA6F7B2482A3E07__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FA6F7B2482A3E07__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_958B126D55B718A5(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_5FA6F7B2482A3E07_METHOD_2_958B126D55B718A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F719CD6CA9B3F622(::RPG::Client::GridFightTraitConfigBase* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5FA6F7B2482A3E07_METHOD_2_F719CD6CA9B3F622_OFFSET))(this, a1, a2);
	}
};
