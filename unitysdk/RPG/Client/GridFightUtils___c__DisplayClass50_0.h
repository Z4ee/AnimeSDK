#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5CF250)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__ISEQUIPCANTUSEDBYELATIONEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA5CFBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c__DisplayClass50_0_TypeDefinitionIndex = 59738;

	class GridFightUtils___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEquipCantUsedByElationEffect_b__0(::RPG::GameCore::DynamicValue* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__ISEQUIPCANTUSEDBYELATIONEFFECT_B__0_OFFSET))(this, x);
		}
	};
}
