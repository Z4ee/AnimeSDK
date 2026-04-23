#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

#define CLASS_2_08C8725DCD06E4E6_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xC716950)
#define CLASS_2_08C8725DCD06E4E6__CTOR_OFFSET UNITYSDK_OFFSET(0xC716F50)
#define CLASS_2_08C8725DCD06E4E6___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xC716F60)

inline static constexpr unsigned int Class_2_08C8725DCD06E4E6_TypeDefinitionIndex = 59098;

class Class_2_08C8725DCD06E4E6 : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6_SETUPDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08C8725DCD06E4E6___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}
};
