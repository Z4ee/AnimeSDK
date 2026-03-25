#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainVisitorDialogueEnd; }

#define CLASS_2_5E8E3CA1C09303BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11960890)
#define CLASS_2_5E8E3CA1C09303BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119608D0)
#define CLASS_2_5E8E3CA1C09303BE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11960B00)
#define CLASS_2_5E8E3CA1C09303BE_TICK_OFFSET UNITYSDK_OFFSET(0x11960B50)
#define CLASS_2_5E8E3CA1C09303BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11960880)

inline static constexpr unsigned int Class_2_5E8E3CA1C09303BE_TypeDefinitionIndex = 43265;

class Class_2_5E8E3CA1C09303BE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + CLASS_2_5E8E3CA1C09303BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E8E3CA1C09303BE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E8E3CA1C09303BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E8E3CA1C09303BE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E8E3CA1C09303BE_TICK_OFFSET))(this, a1);
	}
};
