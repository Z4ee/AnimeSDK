#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_547;
class Class_2_C4BCD569548B7F3E;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_24494BDE5FAFD197_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1647F030)
#define CLASS_2_24494BDE5FAFD197_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1647EBA0)
#define CLASS_2_24494BDE5FAFD197_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x1647E5C0)
#define CLASS_2_24494BDE5FAFD197_METHOD_2_6A729C7D378F1951_OFFSET UNITYSDK_OFFSET(0x1647E8A0)
#define CLASS_2_24494BDE5FAFD197_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x1647F0D0)
#define CLASS_2_24494BDE5FAFD197_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x1647E5D0)
#define CLASS_2_24494BDE5FAFD197__CTOR_OFFSET UNITYSDK_OFFSET(0x1647F170)

inline static constexpr unsigned int Class_2_24494BDE5FAFD197_TypeDefinitionIndex = 56014;

class Class_2_24494BDE5FAFD197 : public ::Class_1_B6AB561EB80E0B93
{
public:
	::Class_2_C4BCD569548B7F3E* GPKLLCNNDHF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A729C7D378F1951(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_METHOD_2_6A729C7D378F1951_OFFSET))(this, a1);
	}
};
