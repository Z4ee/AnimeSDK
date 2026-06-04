#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }

#define CLASS_1_2FF09A0095815A86___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14222380)
#define CLASS_1_2FF09A0095815A86___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET UNITYSDK_OFFSET(0x14222A30)

inline static constexpr unsigned int Class_1_2FF09A0095815A86___c__DisplayClass3_0_TypeDefinitionIndex = 69514;

class Class_1_2FF09A0095815A86___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::RelicType relicType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRelicResultInfos_b__0(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_2FF09A0095815A86___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET))(this, a1);
	}
};
