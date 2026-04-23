#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvWaitTickValueFinish; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_B09B81ABAB67AFEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96C3060)
#define CLASS_2_B09B81ABAB67AFEB_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x96C33D0)
#define CLASS_2_B09B81ABAB67AFEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96C31D0)
#define CLASS_2_B09B81ABAB67AFEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96C3110)
#define CLASS_2_B09B81ABAB67AFEB_TICK_OFFSET UNITYSDK_OFFSET(0x96C32F0)
#define CLASS_2_B09B81ABAB67AFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x96C2FE0)

inline static constexpr unsigned int Class_2_B09B81ABAB67AFEB_TypeDefinitionIndex = 53388;

class Class_2_B09B81ABAB67AFEB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvWaitTickValueFinish* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::System::String* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::RPG::GameCore::GameEntity* Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
