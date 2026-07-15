#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E7DA329C99460319_CLEAR_OFFSET UNITYSDK_OFFSET(0x19364930)
#define CLASS_1_E7DA329C99460319_METHOD_1_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x19364BB0)
#define CLASS_1_E7DA329C99460319_METHOD_1_4C6C81ED3297ACD7_OFFSET UNITYSDK_OFFSET(0x19364980)
#define CLASS_1_E7DA329C99460319_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x193649E0)
#define CLASS_1_E7DA329C99460319_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x19364B50)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19364A70)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x19364B10)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19364A30)
#define CLASS_1_E7DA329C99460319_METHOD_1_EADEF19279DF0D27_OFFSET UNITYSDK_OFFSET(0x193648C0)
#define CLASS_1_E7DA329C99460319_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x19364AB0)
#define CLASS_1_E7DA329C99460319__CTOR_OFFSET UNITYSDK_OFFSET(0x19364CD0)

inline static constexpr unsigned int Class_1_E7DA329C99460319_TypeDefinitionIndex = 58078;

class Class_1_E7DA329C99460319 : public ::System::Object
{
public:
	::RPG::Client::EntityTimelineControlNode* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EADEF19279DF0D27(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::Client::EntityTimelineControlNode* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_EADEF19279DF0D27_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4C6C81ED3297ACD7(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_4C6C81ED3297ACD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DA329C99460319_METHOD_1_1EDDD623459E1A71_OFFSET))(this);
	}
};
