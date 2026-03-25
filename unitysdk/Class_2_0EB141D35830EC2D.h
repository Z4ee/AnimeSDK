#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DrinkMakerController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0EB141D35830EC2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10907630)
#define CLASS_2_0EB141D35830EC2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109076D0)
#define CLASS_2_0EB141D35830EC2D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10907720)
#define CLASS_2_0EB141D35830EC2D_TICK_OFFSET UNITYSDK_OFFSET(0x10907670)
#define CLASS_2_0EB141D35830EC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x10907620)

inline static constexpr unsigned int Class_2_0EB141D35830EC2D_TypeDefinitionIndex = 42689;

class Class_2_0EB141D35830EC2D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DrinkMakerController* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
