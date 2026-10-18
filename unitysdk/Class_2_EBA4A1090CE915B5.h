#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipResetState; }

#define CLASS_2_EBA4A1090CE915B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF4F480)
#define CLASS_2_EBA4A1090CE915B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF4F520)
#define CLASS_2_EBA4A1090CE915B5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF4F5A0)
#define CLASS_2_EBA4A1090CE915B5_TICK_OFFSET UNITYSDK_OFFSET(0xBF4F4C0)
#define CLASS_2_EBA4A1090CE915B5__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4F470)

inline static constexpr unsigned int Class_2_EBA4A1090CE915B5_TypeDefinitionIndex = 53441;

class Class_2_EBA4A1090CE915B5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::TravelShipResetState* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipResetState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipResetState*))((::PBYTE)hIl2Cpp + CLASS_2_EBA4A1090CE915B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA4A1090CE915B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EBA4A1090CE915B5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA4A1090CE915B5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA4A1090CE915B5_ONTASKRESET_OFFSET))(this);
	}
};
