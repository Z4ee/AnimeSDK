#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectNPCMonsterType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_522E2B05E54D073B_METHOD_2_0AC42050E87DB1F3_OFFSET UNITYSDK_OFFSET(0x19296E80)
#define CLASS_2_522E2B05E54D073B__CTOR_OFFSET UNITYSDK_OFFSET(0x19297040)

inline static constexpr unsigned int Class_2_522E2B05E54D073B_TypeDefinitionIndex = 19000;

class Class_2_522E2B05E54D073B : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Single Field_2_0; // 0x10
	::RPG::GameCore::STDetectNPCMonsterType Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_522E2B05E54D073B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_0AC42050E87DB1F3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_522E2B05E54D073B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_522E2B05E54D073B*&))((::PBYTE)hIl2Cpp + CLASS_2_522E2B05E54D073B_METHOD_2_0AC42050E87DB1F3_OFFSET))(a1, a2);
	}
};
