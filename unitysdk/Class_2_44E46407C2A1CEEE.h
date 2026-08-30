#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_44E46407C2A1CEEE_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x157C7BC0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_28BE423D20CA4F29_OFFSET UNITYSDK_OFFSET(0x157C75D0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x157C7C40)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x157C79D0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_7296B494BA8564A3_OFFSET UNITYSDK_OFFSET(0x157C7FE0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x157C6B10)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x157C7DF0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x157C73E0)
#define CLASS_2_44E46407C2A1CEEE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x157C7F20)
#define CLASS_2_44E46407C2A1CEEE_TICK_OFFSET UNITYSDK_OFFSET(0x157C7F70)
#define CLASS_2_44E46407C2A1CEEE__CTOR_OFFSET UNITYSDK_OFFSET(0x157C6B00)

inline static constexpr unsigned int Class_2_44E46407C2A1CEEE_TypeDefinitionIndex = 56460;

class Class_2_44E46407C2A1CEEE : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* FHBCGGCMHGL; // 0x28
	::RPG::GameCore::SkillCharacterComponent* CJOLLMNNCPE; // 0x30
	::RPG::GameCore::GameEntity* JMHLJHCDPJJ; // 0x38
	::System::UInt32 INIMEDHEMHB; // 0x40

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	static ::System::Boolean Method_2_7296B494BA8564A3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_7296B494BA8564A3_OFFSET))(a1);
	}

	::System::Boolean Method_2_28BE423D20CA4F29(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_28BE423D20CA4F29_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E46407C2A1CEEE_METHOD_2_B556EADFE34BD60F_OFFSET))(this);
	}
};
