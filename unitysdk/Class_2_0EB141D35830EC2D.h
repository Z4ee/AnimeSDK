#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DrinkMakerController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0EB141D35830EC2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118F97F0)
#define CLASS_2_0EB141D35830EC2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118F9890)
#define CLASS_2_0EB141D35830EC2D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118F98E0)
#define CLASS_2_0EB141D35830EC2D_TICK_OFFSET UNITYSDK_OFFSET(0x118F9830)
#define CLASS_2_0EB141D35830EC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x118F97E0)

inline static constexpr unsigned int Class_2_0EB141D35830EC2D_TypeDefinitionIndex = 48669;

class Class_2_0EB141D35830EC2D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::DrinkMakerController* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerController*))((::PBYTE)hIl2Cpp + CLASS_2_0EB141D35830EC2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB141D35830EC2D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EB141D35830EC2D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB141D35830EC2D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB141D35830EC2D_ONTASKRESET_OFFSET))(this);
	}
};
