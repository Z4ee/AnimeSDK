#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowAlleyTransportEnergyHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2563FA2392BD6008_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABAD5D0)
#define CLASS_2_2563FA2392BD6008_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABAD610)
#define CLASS_2_2563FA2392BD6008_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xABAD690)
#define CLASS_2_2563FA2392BD6008_TICK_OFFSET UNITYSDK_OFFSET(0xABAD6E0)
#define CLASS_2_2563FA2392BD6008__CTOR_OFFSET UNITYSDK_OFFSET(0xABAD5C0)

inline static constexpr unsigned int Class_2_2563FA2392BD6008_TypeDefinitionIndex = 54751;

class Class_2_2563FA2392BD6008 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowAlleyTransportEnergyHint* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*))((::PBYTE)hIl2Cpp + CLASS_2_2563FA2392BD6008__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2563FA2392BD6008_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2563FA2392BD6008_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2563FA2392BD6008_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2563FA2392BD6008_TICK_OFFSET))(this, a1);
	}
};
