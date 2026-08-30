#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define CLASS_3_43B41AA286E69FCD_1_METHOD_3_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0x15ABE440)
#define CLASS_3_43B41AA286E69FCD_1_METHOD_3_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x15ABE380)
#define CLASS_3_43B41AA286E69FCD_1_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x15ABE2C0)
#define CLASS_3_43B41AA286E69FCD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABE490)

inline static constexpr unsigned int Class_3_43B41AA286E69FCD_1_TypeDefinitionIndex = 76026;

class Class_3_43B41AA286E69FCD_1 : public ::RPG::Client::LittleGame::LevelVariable_1<::System::String*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_1_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Void Method_3_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_1_METHOD_3_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_3_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43B41AA286E69FCD_1_METHOD_3_BC53D0C0E999F7DD_OFFSET))(this);
	}
};
