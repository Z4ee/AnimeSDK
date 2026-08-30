#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_575;
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_471E55D9FB5CC368_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1632A760)
#define CLASS_2_471E55D9FB5CC368_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1632AD40)
#define CLASS_2_471E55D9FB5CC368_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x1632ACE0)
#define CLASS_2_471E55D9FB5CC368_METHOD_2_D01BD37EE8E5964C_OFFSET UNITYSDK_OFFSET(0x1632AC80)
#define CLASS_2_471E55D9FB5CC368_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x1632ACF0)
#define CLASS_2_471E55D9FB5CC368_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1632A7B0)
#define CLASS_2_471E55D9FB5CC368__CTOR_OFFSET UNITYSDK_OFFSET(0x1632AE40)

inline static constexpr unsigned int Class_2_471E55D9FB5CC368_TypeDefinitionIndex = 56231;

class Class_2_471E55D9FB5CC368 : public ::Class_1_D90D29A0DA06B4F8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_DISPOSE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_D01BD37EE8E5964C(::Class_0_16E4307DCC419505_575* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_575*))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_METHOD_2_D01BD37EE8E5964C_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_GENSTATISTICS_OFFSET))(this, a1);
	}
};
