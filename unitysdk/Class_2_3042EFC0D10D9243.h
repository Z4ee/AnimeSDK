#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TwinkleFlipperLightDevice; }

#define CLASS_2_3042EFC0D10D9243_DISPOSE_OFFSET UNITYSDK_OFFSET(0x964FCE0)
#define CLASS_2_3042EFC0D10D9243_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x964FB80)
#define CLASS_2_3042EFC0D10D9243_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x964FD20)
#define CLASS_2_3042EFC0D10D9243_TICK_OFFSET UNITYSDK_OFFSET(0x964FD70)
#define CLASS_2_3042EFC0D10D9243__CTOR_OFFSET UNITYSDK_OFFSET(0x964FB70)

inline static constexpr unsigned int Class_2_3042EFC0D10D9243_TypeDefinitionIndex = 48708;

class Class_2_3042EFC0D10D9243 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TwinkleFlipperLightDevice* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TwinkleFlipperLightDevice* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TwinkleFlipperLightDevice*))((::PBYTE)hIl2Cpp + CLASS_2_3042EFC0D10D9243__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3042EFC0D10D9243_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3042EFC0D10D9243_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3042EFC0D10D9243_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3042EFC0D10D9243_TICK_OFFSET))(this, a1);
	}
};
