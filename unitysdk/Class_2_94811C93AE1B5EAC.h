#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeBuffSelect; }
namespace System { class Object; }

#define CLASS_2_94811C93AE1B5EAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A43490)
#define CLASS_2_94811C93AE1B5EAC_METHOD_2_1EB419DA7BAA94D4_OFFSET UNITYSDK_OFFSET(0x9A435C0)
#define CLASS_2_94811C93AE1B5EAC_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x9A434D0)
#define CLASS_2_94811C93AE1B5EAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A43280)
#define CLASS_2_94811C93AE1B5EAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A433D0)
#define CLASS_2_94811C93AE1B5EAC_TICK_OFFSET UNITYSDK_OFFSET(0x9A43420)
#define CLASS_2_94811C93AE1B5EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x9A43480)

inline static constexpr unsigned int Class_2_94811C93AE1B5EAC_TypeDefinitionIndex = 54205;

class Class_2_94811C93AE1B5EAC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerMazeBuffSelect* Field_2_0; // 0x20

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

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EB419DA7BAA94D4(::RPG::GameCore::MazeBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuff*))((::PBYTE)hIl2Cpp + CLASS_2_94811C93AE1B5EAC_METHOD_2_1EB419DA7BAA94D4_OFFSET))(this, a1);
	}
};
