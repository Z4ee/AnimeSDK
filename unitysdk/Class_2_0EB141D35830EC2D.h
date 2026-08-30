#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DrinkMakerController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0EB141D35830EC2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13521870)
#define CLASS_2_0EB141D35830EC2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13521910)
#define CLASS_2_0EB141D35830EC2D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13521960)
#define CLASS_2_0EB141D35830EC2D_TICK_OFFSET UNITYSDK_OFFSET(0x135218B0)
#define CLASS_2_0EB141D35830EC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x13521860)

inline static constexpr unsigned int Class_2_0EB141D35830EC2D_TypeDefinitionIndex = 53012;

class Class_2_0EB141D35830EC2D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DrinkMakerController* IGHAHBNLIJA; // 0x20

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
