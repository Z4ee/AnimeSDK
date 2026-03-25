#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RevertActionEntityToObserveState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7395023F8029C495_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10988240)
#define CLASS_2_7395023F8029C495_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10987F50)
#define CLASS_2_7395023F8029C495_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109881F0)
#define CLASS_2_7395023F8029C495_TICK_OFFSET UNITYSDK_OFFSET(0x10988190)
#define CLASS_2_7395023F8029C495__CTOR_OFFSET UNITYSDK_OFFSET(0x10987F40)

inline static constexpr unsigned int Class_2_7395023F8029C495_TypeDefinitionIndex = 44296;

class Class_2_7395023F8029C495 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RevertActionEntityToObserveState* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + CLASS_2_7395023F8029C495__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7395023F8029C495_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7395023F8029C495_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7395023F8029C495_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7395023F8029C495_DISPOSE_OFFSET))(this);
	}
};
