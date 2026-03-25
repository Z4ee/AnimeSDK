#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;

#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1058DD80)
#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS7_0__HASBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1058E020)

inline static constexpr unsigned int Class_1_5E0E949FD7F7BB0B___c__DisplayClass7_0_TypeDefinitionIndex = 63263;

class Class_1_5E0E949FD7F7BB0B___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleBuffType buffType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasBuff_b__0(::Class_1_634284739E90CAFA* buff)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS7_0__HASBUFF_B__0_OFFSET))(this, buff);
	}
};
