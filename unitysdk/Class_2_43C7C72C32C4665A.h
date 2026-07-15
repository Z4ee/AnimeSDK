#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

#define CLASS_2_43C7C72C32C4665A_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x17FB1520)
#define CLASS_2_43C7C72C32C4665A__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB1CD0)

inline static constexpr unsigned int Class_2_43C7C72C32C4665A_TypeDefinitionIndex = 61313;

class Class_2_43C7C72C32C4665A : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C7C72C32C4665A__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C7C72C32C4665A_SETUPDATA_OFFSET))(this);
	}
};
