#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_27E38B1A892A490A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveMoveStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2C3A33FA5415278F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11841900)
#define CLASS_2_2C3A33FA5415278F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118419A0)
#define CLASS_2_2C3A33FA5415278F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11841950)
#define CLASS_2_2C3A33FA5415278F_TICK_OFFSET UNITYSDK_OFFSET(0x11842630)
#define CLASS_2_2C3A33FA5415278F__CTOR_OFFSET UNITYSDK_OFFSET(0x118418F0)

inline static constexpr unsigned int Class_2_2C3A33FA5415278F_TypeDefinitionIndex = 47046;

class Class_2_2C3A33FA5415278F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::String* Field_2_3; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::RPG::GameCore::PropCurveMoveStart* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStart*))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_TICK_OFFSET))(this, a1);
	}
};
