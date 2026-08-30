#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_3_F10D795907445CF3;
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_E8307A20000A791C_METHOD_1_0190D525C31177C7_OFFSET UNITYSDK_OFFSET(0x187F8470)
#define CLASS_1_E8307A20000A791C_METHOD_1_30E3686648EB2364_OFFSET UNITYSDK_OFFSET(0x187F8B50)
#define CLASS_1_E8307A20000A791C_METHOD_1_3B7A575DD9CEE3CE_OFFSET UNITYSDK_OFFSET(0x187F87F0)
#define CLASS_1_E8307A20000A791C_METHOD_1_47C82DE92F8683DE_OFFSET UNITYSDK_OFFSET(0x187F88F0)
#define CLASS_1_E8307A20000A791C__CTOR_OFFSET UNITYSDK_OFFSET(0x187F8E30)

inline static constexpr unsigned int Class_1_E8307A20000A791C_TypeDefinitionIndex = 55072;

class Class_1_E8307A20000A791C : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* GEKIGCNCNBH; // 0x10
	::Class_1_5F51D4049EA87B7B* EKIJFPIPCKF; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x20
	::Class_3_F10D795907445CF3* EABKOHGCHFP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8307A20000A791C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0190D525C31177C7(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_E8307A20000A791C_METHOD_1_0190D525C31177C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_47C82DE92F8683DE(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_E8307A20000A791C_METHOD_1_47C82DE92F8683DE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B7A575DD9CEE3CE(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_E8307A20000A791C_METHOD_1_3B7A575DD9CEE3CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_30E3686648EB2364(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_E8307A20000A791C_METHOD_1_30E3686648EB2364_OFFSET))(this, a1);
	}
};
