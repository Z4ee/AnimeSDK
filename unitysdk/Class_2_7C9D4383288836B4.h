#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7C9D4383288836B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19961240)
#define CLASS_2_7C9D4383288836B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19961280)
#define CLASS_2_7C9D4383288836B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19961320)
#define CLASS_2_7C9D4383288836B4_TICK_OFFSET UNITYSDK_OFFSET(0x19961370)
#define CLASS_2_7C9D4383288836B4__CTOR_OFFSET UNITYSDK_OFFSET(0x19961230)

inline static constexpr unsigned int Class_2_7C9D4383288836B4_TypeDefinitionIndex = 56633;

class Class_2_7C9D4383288836B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single BKDJLPKIPIL; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowBattleUI* OFKGLJOAMLD; // 0x20

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
