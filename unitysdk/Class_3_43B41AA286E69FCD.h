#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_43B41AA286E69FCD_METHOD_3_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x18F8AFC0)
#define CLASS_3_43B41AA286E69FCD_METHOD_3_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0x18F8B050)
#define CLASS_3_43B41AA286E69FCD_METHOD_3_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x18F8B0A0)
#define CLASS_3_43B41AA286E69FCD_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x18F8AF00)
#define CLASS_3_43B41AA286E69FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8B0E0)

inline static constexpr unsigned int Class_3_43B41AA286E69FCD_TypeDefinitionIndex = 76024;

class Class_3_43B41AA286E69FCD : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::FixPoint>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Void Method_3_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_METHOD_3_182BA737D561CA10_OFFSET))(this);
	}

	::System::Void Method_3_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_METHOD_3_BC53D0C0E999F7DD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_METHOD_3_E2C273CA106EBD0B_OFFSET))(this);
	}
};
