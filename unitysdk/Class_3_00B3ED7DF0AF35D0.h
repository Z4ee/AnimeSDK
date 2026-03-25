#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class ModifyShieldValueByNewShieldModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_3_00B3ED7DF0AF35D0_METHOD_3_DC39F345B7494F0E_OFFSET UNITYSDK_OFFSET(0x8C93980)
#define CLASS_3_00B3ED7DF0AF35D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C933A0)
#define CLASS_3_00B3ED7DF0AF35D0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C93330)

inline static constexpr unsigned int Class_3_00B3ED7DF0AF35D0_TypeDefinitionIndex = 44196;

class Class_3_00B3ED7DF0AF35D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShieldValueByNewShieldModifier*>
{
public:
	::RPG::GameCore::StringHash Field_3_1; // 0x28
	::RPG::GameCore::StringHash Field_3_0; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*))((::PBYTE)hIl2Cpp + CLASS_3_00B3ED7DF0AF35D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00B3ED7DF0AF35D0_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_3_DC39F345B7494F0E(::RPG::GameCore::AbilityComponent* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_00B3ED7DF0AF35D0_METHOD_3_DC39F345B7494F0E_OFFSET))(this, a1, a2);
	}
};
