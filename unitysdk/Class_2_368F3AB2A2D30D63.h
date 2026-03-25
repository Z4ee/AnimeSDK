#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SelectAISkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_368F3AB2A2D30D63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A70910)
#define CLASS_2_368F3AB2A2D30D63_METHOD_2_63D396B662030C2A_OFFSET UNITYSDK_OFFSET(0x10A70D70)
#define CLASS_2_368F3AB2A2D30D63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A70950)
#define CLASS_2_368F3AB2A2D30D63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A70E20)
#define CLASS_2_368F3AB2A2D30D63_TICK_OFFSET UNITYSDK_OFFSET(0x10A70E70)
#define CLASS_2_368F3AB2A2D30D63__CTOR_OFFSET UNITYSDK_OFFSET(0x10A70900)

inline static constexpr unsigned int Class_2_368F3AB2A2D30D63_TypeDefinitionIndex = 43474;

class Class_2_368F3AB2A2D30D63 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SelectAISkillTarget* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectAISkillTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectAISkillTarget*))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_63D396B662030C2A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + CLASS_2_368F3AB2A2D30D63_METHOD_2_63D396B662030C2A_OFFSET))(this, a1, a2);
	}
};
