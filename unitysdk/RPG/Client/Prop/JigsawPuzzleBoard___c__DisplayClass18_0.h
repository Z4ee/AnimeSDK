#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawPuzzleBoard; }
namespace RPG::Client::Prop { class JigsawPuzzleItem; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14831F60)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS18_0__ONSELECTITEMUP_B__0_OFFSET UNITYSDK_OFFSET(0x14838500)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c__DisplayClass18_0_TypeDefinitionIndex = 74695;

	class JigsawPuzzleBoard___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::JigsawPuzzleBoard* __4__this; // 0x10
		::RPG::Client::Prop::JigsawPuzzleItem* jigsawItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectItemUp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS18_0__ONSELECTITEMUP_B__0_OFFSET))(this);
		}
	};
}
