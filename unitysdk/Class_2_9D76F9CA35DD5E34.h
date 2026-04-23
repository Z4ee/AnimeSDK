#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8F84180)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_28BE423D20CA4F29_OFFSET UNITYSDK_OFFSET(0x8F83950)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x8F83000)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x8F83D60)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x8F84050)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x8F83750)
#define CLASS_2_9D76F9CA35DD5E34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F84200)
#define CLASS_2_9D76F9CA35DD5E34_TICK_OFFSET UNITYSDK_OFFSET(0x8F84250)
#define CLASS_2_9D76F9CA35DD5E34__CTOR_OFFSET UNITYSDK_OFFSET(0x8F82FF0)

inline static constexpr unsigned int Class_2_9D76F9CA35DD5E34_TypeDefinitionIndex = 51863;

class Class_2_9D76F9CA35DD5E34 : public ::Class_1_20D3150E1235DCB5
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_2_1; // 0x28
	::RPG::GameCore::GameEntity* Field_2_0; // 0x30
	::System::UInt32 Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Boolean Method_2_28BE423D20CA4F29(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_28BE423D20CA4F29_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D76F9CA35DD5E34_METHOD_2_B556EADFE34BD60F_OFFSET))(this);
	}
};
