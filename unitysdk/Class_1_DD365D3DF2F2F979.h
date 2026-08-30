#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleLineupData; }

#define CLASS_1_DD365D3DF2F2F979__CTOR_OFFSET UNITYSDK_OFFSET(0xC02DCC0)

inline static constexpr unsigned int Class_1_DD365D3DF2F2F979_TypeDefinitionIndex = 61081;

class Class_1_DD365D3DF2F2F979 : public ::System::Object
{
public:
	::RPG::GameCore::BattleLineupData* LLJMONPONCI; // 0x10
	::System::UInt32 LLDCHLHNADA; // 0x18
	::System::UInt32 NJIOMOHBILM; // 0x1C
	::System::UInt32 FIMNPJLNLEE; // 0x20
	::System::UInt32 HNEIIAGADGO; // 0x24
	::System::UInt32 FGCOBKOEACE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD365D3DF2F2F979__CTOR_OFFSET))(this);
	}
};
