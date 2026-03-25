#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreateAvatarEntity; }

#define CLASS_2_9ED55D95EFFCACD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11054410)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_3B59FF842335F9D6_OFFSET UNITYSDK_OFFSET(0x11054BC0)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x11054AD0)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11054460)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x110546B0)
#define CLASS_2_9ED55D95EFFCACD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11054660)
#define CLASS_2_9ED55D95EFFCACD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11054A20)
#define CLASS_2_9ED55D95EFFCACD0_TICK_OFFSET UNITYSDK_OFFSET(0x11054A70)
#define CLASS_2_9ED55D95EFFCACD0__CTOR_OFFSET UNITYSDK_OFFSET(0x11054400)

inline static constexpr unsigned int Class_2_9ED55D95EFFCACD0_TypeDefinitionIndex = 43253;

class Class_2_9ED55D95EFFCACD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TrainPartyCreateAvatarEntity* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_9477221A6F70535F_OFFSET))(this);
	}

	::System::Void Method_2_3B59FF842335F9D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_3B59FF842335F9D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
