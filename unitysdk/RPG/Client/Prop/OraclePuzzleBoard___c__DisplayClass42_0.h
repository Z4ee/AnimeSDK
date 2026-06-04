#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzleBoard; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5C0A60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS42_0__ONSELECTITEM_B__0_OFFSET UNITYSDK_OFFSET(0xC5C5630)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard___c__DisplayClass42_0_TypeDefinitionIndex = 73242;

	class OraclePuzzleBoard___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OraclePuzzleItem* oracleItem; // 0x10
		::RPG::Client::Prop::OraclePuzzleBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS42_0__ONSELECTITEM_B__0_OFFSET))(this);
		}
	};
}
