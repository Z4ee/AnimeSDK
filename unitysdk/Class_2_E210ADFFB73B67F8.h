#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_D9AF28D967D62092;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E210ADFFB73B67F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C93D60)
#define CLASS_2_E210ADFFB73B67F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C93DA0)
#define CLASS_2_E210ADFFB73B67F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C94270)
#define CLASS_2_E210ADFFB73B67F8_TICK_OFFSET UNITYSDK_OFFSET(0x16C93E80)
#define CLASS_2_E210ADFFB73B67F8__CTOR_OFFSET UNITYSDK_OFFSET(0x16C93D20)

inline static constexpr unsigned int Class_2_E210ADFFB73B67F8_TypeDefinitionIndex = 54366;

class Class_2_E210ADFFB73B67F8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_D9AF28D967D62092* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x28
	::System::Int32 APNGJPMPMOB; // 0x30
	::RPG::GameCore::FixPoint OLDIGCGFHJM; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D9AF28D967D62092* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D9AF28D967D62092*))((::PBYTE)hIl2Cpp + CLASS_2_E210ADFFB73B67F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E210ADFFB73B67F8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E210ADFFB73B67F8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E210ADFFB73B67F8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E210ADFFB73B67F8_TICK_OFFSET))(this, a1);
	}
};
