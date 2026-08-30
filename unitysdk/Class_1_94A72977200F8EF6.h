#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillSubTargetType.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillTargetConfig; }

#define CLASS_1_94A72977200F8EF6_METHOD_1_0CA679F761F9ED6A_OFFSET UNITYSDK_OFFSET(0x1CA76FE0)
#define CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_1_OFFSET UNITYSDK_OFFSET(0x1CA76EC0)
#define CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_2_OFFSET UNITYSDK_OFFSET(0x1CA76EE0)
#define CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_OFFSET UNITYSDK_OFFSET(0x1CA76E90)
#define CLASS_1_94A72977200F8EF6_METHOD_1_9AEEA6ADBB24A6B5_OFFSET UNITYSDK_OFFSET(0x1CA76EB0)
#define CLASS_1_94A72977200F8EF6_METHOD_1_AF748F92F03CF64C_OFFSET UNITYSDK_OFFSET(0x1CA76F10)
#define CLASS_1_94A72977200F8EF6_METHOD_1_B10B22029B057625_OFFSET UNITYSDK_OFFSET(0x1CA76F70)
#define CLASS_1_94A72977200F8EF6_METHOD_1_B22751FD3EB9D693_OFFSET UNITYSDK_OFFSET(0x1CA76EF0)

inline static constexpr unsigned int Class_1_94A72977200F8EF6_TypeDefinitionIndex = 24574;

class Class_1_94A72977200F8EF6 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_3A951A569B92DFA5(::RPG::GameCore::SkillTargetType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9AEEA6ADBB24A6B5(::RPG::GameCore::SkillSubTargetType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillSubTargetType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_9AEEA6ADBB24A6B5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3A951A569B92DFA5_1(::RPG::GameCore::SkillTargetType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3A951A569B92DFA5_2(::RPG::GameCore::SkillTargetType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_3A951A569B92DFA5_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B22751FD3EB9D693(::RPG::GameCore::SkillTargetType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_B22751FD3EB9D693_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AF748F92F03CF64C(::RPG::GameCore::SkillTargetType a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_AF748F92F03CF64C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::TeamType Method_1_B10B22029B057625(::RPG::GameCore::SkillTargetType a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::RPG::GameCore::TeamType(*)(::RPG::GameCore::SkillTargetType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_B10B22029B057625_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0CA679F761F9ED6A(::RPG::GameCore::SkillTargetConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SkillTargetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_94A72977200F8EF6_METHOD_1_0CA679F761F9ED6A_OFFSET))(a1);
	}
};
