#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }

#define CLASS_1_F49374CBA1C64DD2_DISTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18FE2130)
#define CLASS_1_F49374CBA1C64DD2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2120)

inline static constexpr unsigned int Class_1_F49374CBA1C64DD2_TypeDefinitionIndex = 64478;

class Class_1_F49374CBA1C64DD2 : public ::System::Object
{
public:
	::RPG::Client::NotifyType GMCNLFICNOB; // 0x10

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_F49374CBA1C64DD2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Distribute(::RPG::Client::GridFightBonusResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + CLASS_1_F49374CBA1C64DD2_DISTRIBUTE_OFFSET))(this, a1);
	}
};
