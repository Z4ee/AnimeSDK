#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }

#define RPG_CLIENT_RELICSUITDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB8480)
#define RPG_CLIENT_RELICSUITDATA___C__DISPLAYCLASS10_0__GETVIRTUALDATA_B__0_OFFSET UNITYSDK_OFFSET(0xAFB8C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicSuitData___c__DisplayClass10_0_TypeDefinitionIndex = 57714;

	class RelicSuitData___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetVirtualData_b__0(::RPG::Client::RelicItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITDATA___C__DISPLAYCLASS10_0__GETVIRTUALDATA_B__0_OFFSET))(this, x);
		}
	};
}
