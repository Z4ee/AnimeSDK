#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace System { class Action; }

#define CLASS_1_CE84D8E232AFC277_CLASS_1_F9D0D949D4DE2864__CTOR_OFFSET UNITYSDK_OFFSET(0x15832DE0)

inline static constexpr unsigned int Class_1_CE84D8E232AFC277_Class_1_F9D0D949D4DE2864_TypeDefinitionIndex = 75824;

class Class_1_CE84D8E232AFC277_Class_1_F9D0D949D4DE2864 : public ::System::Object
{
public:
	::RPG::Client::ChenLingBattle::IGamePhase* PPOIJHJIMLL; // 0x10
	::System::Object* BKMMGBPOKGI; // 0x18
	::System::Action* HMLKKGLNFCJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277_CLASS_1_F9D0D949D4DE2864__CTOR_OFFSET))(this);
	}
};
