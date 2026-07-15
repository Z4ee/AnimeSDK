#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenStepOnTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7507BD366ABD5BF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1604D560)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x1604DB10)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0x1604E470)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_2975C272EE2FEBE8_OFFSET UNITYSDK_OFFSET(0x1604E080)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_90E9D33A92962443_OFFSET UNITYSDK_OFFSET(0x1604E370)
#define CLASS_2_7507BD366ABD5BF3_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1604D800)
#define CLASS_2_7507BD366ABD5BF3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1604D950)
#define CLASS_2_7507BD366ABD5BF3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1604DE80)
#define CLASS_2_7507BD366ABD5BF3_TICK_OFFSET UNITYSDK_OFFSET(0x1604E020)
#define CLASS_2_7507BD366ABD5BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1604D370)

inline static constexpr unsigned int Class_2_7507BD366ABD5BF3_TypeDefinitionIndex = 50551;

class Class_2_7507BD366ABD5BF3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::ListenStepOnTarget* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::Class_2_37D832480CB327E1* Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50

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
