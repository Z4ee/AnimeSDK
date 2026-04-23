#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7FDBB1F35A937052_METHOD_2_05B2F72F98EC81FB_OFFSET UNITYSDK_OFFSET(0x124C4050)
#define CLASS_2_7FDBB1F35A937052__CTOR_OFFSET UNITYSDK_OFFSET(0x124C4190)
#define CLASS_2_7FDBB1F35A937052__ONBIND_OFFSET UNITYSDK_OFFSET(0x124C3FB0)
#define CLASS_2_7FDBB1F35A937052___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x124C41C0)

inline static constexpr unsigned int Class_2_7FDBB1F35A937052_TypeDefinitionIndex = 66548;

class Class_2_7FDBB1F35A937052 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::MonoUIColorSwitcher* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDBB1F35A937052__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDBB1F35A937052__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_05B2F72F98EC81FB(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_7FDBB1F35A937052_METHOD_2_05B2F72F98EC81FB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FDBB1F35A937052___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
