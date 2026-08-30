#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define CLASS_1_F5E46610D107584E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76CE00)

inline static constexpr unsigned int Class_1_F5E46610D107584E_TypeDefinitionIndex = 41045;

class Class_1_F5E46610D107584E : public ::System::Object
{
public:
	::RPG::Client::LittleGame::MovieGameLevelConfig* EABKOHGCHFP; // 0x10
	::RPG::Client::LittleGame::MovieBossConfig* KMGIBGPAOPC; // 0x18
	::System::Single HOGDJANIOMI; // 0x20
	::System::Single DBMAHJMCGOD; // 0x24
	::System::Single ODEDKOHDCOC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5E46610D107584E__CTOR_OFFSET))(this);
	}
};
