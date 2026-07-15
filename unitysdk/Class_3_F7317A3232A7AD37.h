#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_F7317A3232A7AD37_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x19218BF0)
#define CLASS_3_F7317A3232A7AD37_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x19218B30)
#define CLASS_3_F7317A3232A7AD37__CTOR_OFFSET UNITYSDK_OFFSET(0x19218C70)

inline static constexpr unsigned int Class_3_F7317A3232A7AD37_TypeDefinitionIndex = 72587;

class Class_3_F7317A3232A7AD37 : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::LevelEntityRef*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7317A3232A7AD37__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_F7317A3232A7AD37_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::LevelEntityRef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*))((::PBYTE)hIl2Cpp + CLASS_3_F7317A3232A7AD37_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
