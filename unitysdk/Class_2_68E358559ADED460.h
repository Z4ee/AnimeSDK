#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergyOnce; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_68E358559ADED460_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7F3220)
#define CLASS_2_68E358559ADED460_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD7F3560)
#define CLASS_2_68E358559ADED460_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0xD7F32C0)
#define CLASS_2_68E358559ADED460_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD7F33F0)
#define CLASS_2_68E358559ADED460_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7F3260)
#define CLASS_2_68E358559ADED460_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7F34B0)
#define CLASS_2_68E358559ADED460_TICK_OFFSET UNITYSDK_OFFSET(0xD7F3500)
#define CLASS_2_68E358559ADED460__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F3210)

inline static constexpr unsigned int Class_2_68E358559ADED460_TypeDefinitionIndex = 58565;

class Class_2_68E358559ADED460 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_GETCONFIG_OFFSET))(this);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68E358559ADED460_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
