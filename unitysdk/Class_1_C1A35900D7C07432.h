#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaTalentBranchLinkWidgetController; }
namespace MoleMole { class UIForbiddenAreaTalentLinkWidgetController; }
namespace MoleMole { class UIForbiddenAreaTalentPointWidgetController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C1A35900D7C07432__CTOR_OFFSET UNITYSDK_OFFSET(0x13CED080)

inline static constexpr unsigned int Class_1_C1A35900D7C07432_TypeDefinitionIndex = 72174;

class Class_1_C1A35900D7C07432 : public ::System::Object
{
public:
	::MoleMole::UIForbiddenAreaTalentPointWidgetController* Field_1_4; // 0x10
	::MoleMole::UIForbiddenAreaTalentLinkWidgetController* Field_1_6; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::MoleMole::UIForbiddenAreaTalentPointWidgetController* Field_1_5; // 0x28
	::MoleMole::UIForbiddenAreaTalentBranchLinkWidgetController* Field_1_7; // 0x30
	::MoleMole::UIForbiddenAreaTalentBranchLinkWidgetController* Field_1_8; // 0x38
	::MoleMole::UIForbiddenAreaTalentPointWidgetController* Field_1_3; // 0x40
	::System::Int32 Field_1_1; // 0x48
	::System::Int32 Field_1_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A35900D7C07432__CTOR_OFFSET))(this);
	}
};
