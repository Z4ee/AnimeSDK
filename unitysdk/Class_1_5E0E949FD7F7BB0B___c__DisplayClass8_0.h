#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;

#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1058DFC0)
#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS8_0__GETBUFFS_B__0_OFFSET UNITYSDK_OFFSET(0x1058E040)

inline static constexpr unsigned int Class_1_5E0E949FD7F7BB0B___c__DisplayClass8_0_TypeDefinitionIndex = 63264;

class Class_1_5E0E949FD7F7BB0B___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleBuffType buffType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetBuffs_b__0(::Class_1_634284739E90CAFA* buff)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS8_0__GETBUFFS_B__0_OFFSET))(this, buff);
	}
};
