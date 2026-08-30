#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_08645361E812A3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1790E940)

inline static constexpr unsigned int Class_1_08645361E812A3C8_TypeDefinitionIndex = 73192;

class Class_1_08645361E812A3C8 : public ::System::Object
{
public:
	::System::String* PDJGEJNENIH; // 0x10
	::System::String* OEDECKGEFEO; // 0x18
	::System::String* ADMPOKJGIBH; // 0x20
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
	::RPG::GameCore::BattleAlertType HNBJHDBMMNN; // 0x30
	::System::Boolean GNDCCBNILML; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08645361E812A3C8__CTOR_OFFSET))(this);
	}
};
