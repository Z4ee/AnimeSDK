#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }

#define CLASS_1_2F344C3347FF7120___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1436F530)
#define CLASS_1_2F344C3347FF7120___C__DISPLAYCLASS3_0___CREATEPERFORMANCELEVELGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x1436F540)

inline static constexpr unsigned int Class_1_2F344C3347FF7120___c__DisplayClass3_0_TypeDefinitionIndex = 57970;

class Class_1_2F344C3347FF7120___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::LevelGraphComponent* levelGraphComponent; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreatePerformanceLevelGraph_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120___C__DISPLAYCLASS3_0___CREATEPERFORMANCELEVELGRAPH_B__0_OFFSET))(this);
	}
};
