#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_2787ABBB14E52A15;

#define CLASS_1_F9FBCC956DFCF137_19_METHOD_1_A6609BBCD97F5BCD_OFFSET UNITYSDK_OFFSET(0x158D85B0)
#define CLASS_1_F9FBCC956DFCF137_19__CTOR_OFFSET UNITYSDK_OFFSET(0x158D85A0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_19_TypeDefinitionIndex = 64095;

class Class_1_F9FBCC956DFCF137_19 : public ::System::Object
{
public:
	::Class_1_2787ABBB14E52A15* JOIPPIKNILC; // 0x10

	::System::Void _ctor(::Class_1_2787ABBB14E52A15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2787ABBB14E52A15*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_19__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_1_A6609BBCD97F5BCD(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_19_METHOD_1_A6609BBCD97F5BCD_OFFSET))(this, a1);
	}
};
