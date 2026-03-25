#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_415;
class Class_1_19B7EEF756261CFE;
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_A3AF96076A322B71_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF390C70)
#define CLASS_2_A3AF96076A322B71_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF3910E0)
#define CLASS_2_A3AF96076A322B71_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xF391080)
#define CLASS_2_A3AF96076A322B71_METHOD_2_7AEDC3D73D7F7515_OFFSET UNITYSDK_OFFSET(0xF391020)
#define CLASS_2_A3AF96076A322B71_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xF391090)
#define CLASS_2_A3AF96076A322B71_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF390CC0)
#define CLASS_2_A3AF96076A322B71__CTOR_OFFSET UNITYSDK_OFFSET(0xF391260)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF391270)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF3913A0)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xF391340)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF3912E0)

inline static constexpr unsigned int Class_2_A3AF96076A322B71_TypeDefinitionIndex = 44893;

class Class_2_A3AF96076A322B71 : public ::Class_1_9E296C95827C90A8
{
public:
	::Class_1_19B7EEF756261CFE* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_DISPOSE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_7AEDC3D73D7F7515(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_METHOD_2_7AEDC3D73D7F7515_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}
};
