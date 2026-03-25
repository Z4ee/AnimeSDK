#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_08645361E812A3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEC890)

inline static constexpr unsigned int Class_1_08645361E812A3C8_TypeDefinitionIndex = 60056;

class Class_1_08645361E812A3C8 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::GameCore::BattleAlertType Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08645361E812A3C8__CTOR_OFFSET))(this);
	}
};
