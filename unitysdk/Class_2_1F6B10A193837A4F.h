#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_152140BAFD2DB102;
class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_1F6B10A193837A4F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15E5CDE0)
#define CLASS_2_1F6B10A193837A4F_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x15E5C830)
#define CLASS_2_1F6B10A193837A4F_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x15E5CC60)
#define CLASS_2_1F6B10A193837A4F_METHOD_2_996E0DF7AD607754_OFFSET UNITYSDK_OFFSET(0x15E5CB90)
#define CLASS_2_1F6B10A193837A4F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E5CD10)
#define CLASS_2_1F6B10A193837A4F_TICK_OFFSET UNITYSDK_OFFSET(0x15E5CD60)
#define CLASS_2_1F6B10A193837A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C780)

inline static constexpr unsigned int Class_2_1F6B10A193837A4F_TypeDefinitionIndex = 56264;

class Class_2_1F6B10A193837A4F : public ::Class_1_20D3150E1235DCB5
{
public:
	::RPG::GameCore::SkillCharacterComponent* CJOLLMNNCPE; // 0x28
	::System::Boolean LFNCBOONKFB; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_996E0DF7AD607754(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_2_1F6B10A193837A4F_METHOD_2_996E0DF7AD607754_OFFSET))(this, a1);
	}
};
