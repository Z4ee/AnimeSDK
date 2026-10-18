#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleActionAgainTowardBuffSource; }

#define CLASS_2_11043EC87B4EBC79_METHOD_2_650D5DFF2A4275E6_OFFSET UNITYSDK_OFFSET(0x1CB783B0)
#define CLASS_2_11043EC87B4EBC79__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB783A0)

inline static constexpr unsigned int Class_2_11043EC87B4EBC79_TypeDefinitionIndex = 43100;

class Class_2_11043EC87B4EBC79 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleActionAgainTowardBuffSource* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleActionAgainTowardBuffSource* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_11043EC87B4EBC79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_650D5DFF2A4275E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11043EC87B4EBC79_METHOD_2_650D5DFF2A4275E6_OFFSET))(this);
	}
};
