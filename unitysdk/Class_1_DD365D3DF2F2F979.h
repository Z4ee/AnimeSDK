#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleLineupData; }

#define CLASS_1_DD365D3DF2F2F979__CTOR_OFFSET UNITYSDK_OFFSET(0x14E60C10)

inline static constexpr unsigned int Class_1_DD365D3DF2F2F979_TypeDefinitionIndex = 58254;

class Class_1_DD365D3DF2F2F979 : public ::System::Object
{
public:
	::RPG::GameCore::BattleLineupData* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD365D3DF2F2F979__CTOR_OFFSET))(this);
	}
};
