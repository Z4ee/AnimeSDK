#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_9B635DC3F867E2EE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_144DFA50A8BEA507_METHOD_2_2FC887146F7D9C32_OFFSET UNITYSDK_OFFSET(0x12841040)
#define CLASS_2_144DFA50A8BEA507_METHOD_2_4EED7DA7D786E14A_OFFSET UNITYSDK_OFFSET(0x12841120)
#define CLASS_2_144DFA50A8BEA507_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x12840FF0)
#define CLASS_2_144DFA50A8BEA507_METHOD_2_D8A4BC1054496B19_OFFSET UNITYSDK_OFFSET(0x12840EA0)
#define CLASS_2_144DFA50A8BEA507__CTOR_OFFSET UNITYSDK_OFFSET(0x12841380)

inline static constexpr unsigned int Class_2_144DFA50A8BEA507_TypeDefinitionIndex = 49517;

class Class_2_144DFA50A8BEA507 : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Action* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9B635DC3F867E2EE*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144DFA50A8BEA507__CTOR_OFFSET))(this);
	}

	::Class_1_9B635DC3F867E2EE* Method_2_D8A4BC1054496B19(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a5)
	{
		return ((::Class_1_9B635DC3F867E2EE*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + CLASS_2_144DFA50A8BEA507_METHOD_2_D8A4BC1054496B19_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2FC887146F7D9C32(::Class_1_9B635DC3F867E2EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B635DC3F867E2EE*))((::PBYTE)hIl2Cpp + CLASS_2_144DFA50A8BEA507_METHOD_2_2FC887146F7D9C32_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_4EED7DA7D786E14A(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + CLASS_2_144DFA50A8BEA507_METHOD_2_4EED7DA7D786E14A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144DFA50A8BEA507_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
