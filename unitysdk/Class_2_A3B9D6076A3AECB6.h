#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_375;
class Class_2_82C79E778619E94D;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_A3B9D6076A3AECB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B94420)
#define CLASS_2_A3B9D6076A3AECB6_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x8B93F80)
#define CLASS_2_A3B9D6076A3AECB6_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x8B93860)
#define CLASS_2_A3B9D6076A3AECB6_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x8B94490)
#define CLASS_2_A3B9D6076A3AECB6_METHOD_2_66D2629A45A27258_OFFSET UNITYSDK_OFFSET(0x8B93B30)
#define CLASS_2_A3B9D6076A3AECB6_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x8B93870)
#define CLASS_2_A3B9D6076A3AECB6__CTOR_OFFSET UNITYSDK_OFFSET(0x8B94520)
#define CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B94600)
#define CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x8B94590)
#define CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x8B94530)

inline static constexpr unsigned int Class_2_A3B9D6076A3AECB6_TypeDefinitionIndex = 44868;

class Class_2_A3B9D6076A3AECB6 : public ::Class_1_9E296C95827C90A8
{
public:
	::Class_2_82C79E778619E94D* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_66D2629A45A27258(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6_METHOD_2_66D2629A45A27258_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B9D6076A3AECB6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
