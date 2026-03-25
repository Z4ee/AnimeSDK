#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }

#define CLASS_1_E9054A92590C980A_DISTRIBUTE_OFFSET UNITYSDK_OFFSET(0xDE3EC50)
#define CLASS_1_E9054A92590C980A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3EC40)

inline static constexpr unsigned int Class_1_E9054A92590C980A_TypeDefinitionIndex = 52318;

class Class_1_E9054A92590C980A : public ::System::Object
{
public:
	::RPG::Client::NotifyType Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_E9054A92590C980A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Distribute(::RPG::Client::GridFightBonusResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + CLASS_1_E9054A92590C980A_DISTRIBUTE_OFFSET))(this, a1);
	}
};
