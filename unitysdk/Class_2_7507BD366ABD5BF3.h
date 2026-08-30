#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenStepOnTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7507BD366ABD5BF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155EE730)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x155EECF0)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0x155EF640)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_2975C272EE2FEBE8_OFFSET UNITYSDK_OFFSET(0x155EF250)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_90E9D33A92962443_OFFSET UNITYSDK_OFFSET(0x155EF540)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x155EE9D0)
#define CLASS_2_7507BD366ABD5BF3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155EEB30)
#define CLASS_2_7507BD366ABD5BF3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155EF050)
#define CLASS_2_7507BD366ABD5BF3_TICK_OFFSET UNITYSDK_OFFSET(0x155EF1F0)
#define CLASS_2_7507BD366ABD5BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x155EE540)

inline static constexpr unsigned int Class_2_7507BD366ABD5BF3_TypeDefinitionIndex = 53228;

class Class_2_7507BD366ABD5BF3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ListenStepOnTarget* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* CDCGFIMJAKF; // 0x20
	::Class_3_07C3C4D2990C49EE* EGEJPBBNOKH; // 0x28
	::Class_3_07C3C4D2990C49EE* ECKCNGMMKBL; // 0x30
	::Class_3_07C3C4D2990C49EE* DINAOFBDLPI; // 0x38
	::Class_2_37D832480CB327E1* NEFDDGCPFFG; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
	::System::Boolean OMMDCOPCDKE; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenStepOnTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenStepOnTarget*))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2975C272EE2FEBE8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_METHOD_2_2975C272EE2FEBE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_164DA41B84B6F6E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_METHOD_2_164DA41B84B6F6E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Boolean Method_2_90E9D33A92962443(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7507BD366ABD5BF3_METHOD_2_90E9D33A92962443_OFFSET))(this, a1);
	}
};
