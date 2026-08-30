#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeBuffSelect; }
namespace System { class Object; }

#define CLASS_2_94811C93AE1B5EAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15634210)
#define CLASS_2_94811C93AE1B5EAC_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x15634250)
#define CLASS_2_94811C93AE1B5EAC_METHOD_2_E255558924534A43_OFFSET UNITYSDK_OFFSET(0x15634360)
#define CLASS_2_94811C93AE1B5EAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15634000)
#define CLASS_2_94811C93AE1B5EAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15634150)
#define CLASS_2_94811C93AE1B5EAC_TICK_OFFSET UNITYSDK_OFFSET(0x156341A0)
#define CLASS_2_94811C93AE1B5EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15634200)

inline static constexpr unsigned int Class_2_94811C93AE1B5EAC_TypeDefinitionIndex = 58941;

class Class_2_94811C93AE1B5EAC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerMazeBuffSelect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeBuffSelect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeBuffSelect*))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E255558924534A43(::RPG::GameCore::MazeBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuff*))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_METHOD_2_E255558924534A43_OFFSET))(this, a1);
	}
};
