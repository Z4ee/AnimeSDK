#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2ScoreType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_5D31F5171A531E0A_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1C774FD0)
#define CLASS_1_5D31F5171A531E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7751F0)

inline static constexpr unsigned int Class_1_5D31F5171A531E0A_TypeDefinitionIndex = 11277;

class Class_1_5D31F5171A531E0A : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x10
	::RPG::Client::TextID OACJHAFNCCB; // 0x18
	::RPG::GameCore::ActivityDiceCombatV2ScoreType FBBBHPDMFAP; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D31F5171A531E0A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5D31F5171A531E0A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5D31F5171A531E0A*&))((::PBYTE)hIl2Cpp + CLASS_1_5D31F5171A531E0A_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
