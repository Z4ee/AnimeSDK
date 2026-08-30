#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E7DA329C99460319_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8CA6A0)
#define CLASS_1_E7DA329C99460319_METHOD_1_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x1A8CA920)
#define CLASS_1_E7DA329C99460319_METHOD_1_4C6C81ED3297ACD7_OFFSET UNITYSDK_OFFSET(0x1A8CA6F0)
#define CLASS_1_E7DA329C99460319_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x1A8CA750)
#define CLASS_1_E7DA329C99460319_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1A8CA8C0)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A8CA7E0)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1A8CA880)
#define CLASS_1_E7DA329C99460319_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8CA7A0)
#define CLASS_1_E7DA329C99460319_METHOD_1_EADEF19279DF0D27_OFFSET UNITYSDK_OFFSET(0x1A8CA630)
#define CLASS_1_E7DA329C99460319_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1A8CA820)
#define CLASS_1_E7DA329C99460319__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CAA40)

inline static constexpr unsigned int Class_1_E7DA329C99460319_TypeDefinitionIndex = 60905;

class Class_1_E7DA329C99460319 : public ::System::Object
{
public:
	::RPG::Client::EntityTimelineControlNode* AIGNMECODDJ; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::System::Single KBDPMBDJIOF; // 0x20
	::System::Single PIKFJLPGJJF; // 0x24

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
