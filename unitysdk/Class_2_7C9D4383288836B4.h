#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7C9D4383288836B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116B19D0)
#define CLASS_2_7C9D4383288836B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116B1A10)
#define CLASS_2_7C9D4383288836B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x116B1AB0)
#define CLASS_2_7C9D4383288836B4_TICK_OFFSET UNITYSDK_OFFSET(0x116B1B00)
#define CLASS_2_7C9D4383288836B4__CTOR_OFFSET UNITYSDK_OFFSET(0x116B19C0)

inline static constexpr unsigned int Class_2_7C9D4383288836B4_TypeDefinitionIndex = 45383;

class Class_2_7C9D4383288836B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single Field_2_2; // 0x0
	::RPG::GameCore::ShowBattleUI* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + CLASS_2_7C9D4383288836B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C9D4383288836B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C9D4383288836B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C9D4383288836B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C9D4383288836B4_TICK_OFFSET))(this, a1);
	}
};
