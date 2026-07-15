#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LevelVariable_1.h"

namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define CLASS_3_5B71608117F66EFC_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x181A1930)
#define CLASS_3_5B71608117F66EFC_METHOD_3_E942A4C350694BAC_OFFSET UNITYSDK_OFFSET(0x181A1870)
#define CLASS_3_5B71608117F66EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x181A19B0)

inline static constexpr unsigned int Class_3_5B71608117F66EFC_TypeDefinitionIndex = 72586;

class Class_3_5B71608117F66EFC : public ::RPG::Client::LittleGame::LevelVariable_1<::RPG::GameCore::LGameEntityRef*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B71608117F66EFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E942A4C350694BAC(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_3_5B71608117F66EFC_METHOD_3_E942A4C350694BAC_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::LGameEntityRef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + CLASS_3_5B71608117F66EFC_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
