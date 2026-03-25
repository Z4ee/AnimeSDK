#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_235374933CBF16FF;
class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace System { class String; }

#define CLASS_1_137C00B46E99044C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1661DFF0)
#define CLASS_1_137C00B46E99044C_METHOD_1_203B4F56870F86E4_OFFSET UNITYSDK_OFFSET(0x165F76A0)
#define CLASS_1_137C00B46E99044C_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1661DEE0)
#define CLASS_1_137C00B46E99044C_METHOD_1_571EF0D173D444DE_OFFSET UNITYSDK_OFFSET(0x1661E060)
#define CLASS_1_137C00B46E99044C_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x1661DF30)
#define CLASS_1_137C00B46E99044C_METHOD_1_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x1661DF80)
#define CLASS_1_137C00B46E99044C__CTOR_OFFSET UNITYSDK_OFFSET(0x1661DE60)

inline static constexpr unsigned int Class_1_137C00B46E99044C_TypeDefinitionIndex = 28559;

class Class_1_137C00B46E99044C : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatSkillConfig* Field_1_0; // 0x10
	::Class_1_235374933CBF16FF* Field_1_1; // 0x18
	::Class_2_843468DEB2C89684* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_843468DEB2C89684* a1, ::RPG::GameCore::DiceCombatSkillConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_843468DEB2C89684*, ::RPG::GameCore::DiceCombatSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatModifierConfig* Method_1_571EF0D173D444DE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_571EF0D173D444DE_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatInsertAbilityConfig* Method_1_203B4F56870F86E4(::System::String* a1)
	{
		return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_137C00B46E99044C_METHOD_1_203B4F56870F86E4_OFFSET))(this, a1);
	}
};
