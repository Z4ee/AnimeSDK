#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_1_F5E46610D107584E__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEC4F0)

inline static constexpr unsigned int Class_1_F5E46610D107584E_TypeDefinitionIndex = 38590;

class Class_1_F5E46610D107584E : public ::System::Object
{
public:
	::RPG::Client::LittleGame::MovieBossConfig* Field_1_4; // 0x10
	::RPG::Client::LittleGame::MovieGameLevelConfig* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5E46610D107584E__CTOR_OFFSET))(this);
	}
};
