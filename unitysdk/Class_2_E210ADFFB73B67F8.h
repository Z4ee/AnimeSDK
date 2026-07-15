#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_D9AF28D967D62092;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E210ADFFB73B67F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B05090)
#define CLASS_2_E210ADFFB73B67F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B050D0)
#define CLASS_2_E210ADFFB73B67F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B055A0)
#define CLASS_2_E210ADFFB73B67F8_TICK_OFFSET UNITYSDK_OFFSET(0x18B051B0)
#define CLASS_2_E210ADFFB73B67F8__CTOR_OFFSET UNITYSDK_OFFSET(0x18B05050)

inline static constexpr unsigned int Class_2_E210ADFFB73B67F8_TypeDefinitionIndex = 51682;

class Class_2_E210ADFFB73B67F8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::Class_3_D9AF28D967D62092* Field_2_2; // 0x28
	::RPG::GameCore::FixPoint Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38

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
