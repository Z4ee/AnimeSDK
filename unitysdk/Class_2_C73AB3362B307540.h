#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectNPCMonsterType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_C73AB3362B307540_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x1B56DF00)
#define CLASS_2_C73AB3362B307540__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56E050)

inline static constexpr unsigned int Class_2_C73AB3362B307540_TypeDefinitionIndex = 19351;

class Class_2_C73AB3362B307540 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::STDetectNPCMonsterType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C73AB3362B307540__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_C73AB3362B307540*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_C73AB3362B307540*&))((::PBYTE)hIl2Cpp + CLASS_2_C73AB3362B307540_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
