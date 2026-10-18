#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_663;
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_471E55D9FB5CC368_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2110F0)
#define CLASS_2_471E55D9FB5CC368_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB2116D0)
#define CLASS_2_471E55D9FB5CC368_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB211670)
#define CLASS_2_471E55D9FB5CC368_METHOD_2_D01BD37EE8E5964C_OFFSET UNITYSDK_OFFSET(0xB211610)
#define CLASS_2_471E55D9FB5CC368_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB211680)
#define CLASS_2_471E55D9FB5CC368_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB211140)
#define CLASS_2_471E55D9FB5CC368__CTOR_OFFSET UNITYSDK_OFFSET(0xB2117D0)

inline static constexpr unsigned int Class_2_471E55D9FB5CC368_TypeDefinitionIndex = 56044;

class Class_2_471E55D9FB5CC368 : public ::Class_1_B6AB561EB80E0B93
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

	::System::Void Method_2_D01BD37EE8E5964C(::Class_0_16E4307DCC419505_663* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_663*))((::PBYTE)hIl2Cpp + CLASS_2_471E55D9FB5CC368_METHOD_2_D01BD37EE8E5964C_OFFSET))(this, a1);
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
