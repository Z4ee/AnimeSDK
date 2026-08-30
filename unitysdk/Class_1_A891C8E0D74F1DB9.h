#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_A891C8E0D74F1DB9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16BF8F50)
#define CLASS_1_A891C8E0D74F1DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF8FB0)

inline static constexpr unsigned int Class_1_A891C8E0D74F1DB9_TypeDefinitionIndex = 56410;

class Class_1_A891C8E0D74F1DB9 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* PCIDMHBGICL; // 0x10
	::RPG::GameCore::SkillCharacterComponent* DGFJFGGIACL; // 0x18
	::System::Boolean FPFAFHLNPED; // 0x20
	::System::Boolean BKPFBCADFCC; // 0x21
	::System::Single HKNFNCGOING; // 0x24
	::System::Single FOMHLJBMINK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A891C8E0D74F1DB9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A891C8E0D74F1DB9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
