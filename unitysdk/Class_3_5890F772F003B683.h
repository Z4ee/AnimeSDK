#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_5890F772F003B683_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x14353D00)
#define CLASS_3_5890F772F003B683_METHOD_3_946A54FF330353F1_OFFSET UNITYSDK_OFFSET(0x14353DA0)
#define CLASS_3_5890F772F003B683_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x14353C40)
#define CLASS_3_5890F772F003B683__CTOR_OFFSET UNITYSDK_OFFSET(0x14353D80)

inline static constexpr unsigned int Class_3_5890F772F003B683_TypeDefinitionIndex = 71073;

class Class_3_5890F772F003B683 : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::LGameEntityRef*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::LGameEntityRef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}

	::System::Void Method_3_946A54FF330353F1(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_5890F772F003B683_METHOD_3_946A54FF330353F1_OFFSET))(this, a1);
	}
};
