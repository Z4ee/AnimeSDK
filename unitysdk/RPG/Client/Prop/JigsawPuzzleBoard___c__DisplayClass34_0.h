#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawPuzzleBoard; }
namespace RPG::Client::Prop { class JigsawPuzzleItem; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC57F450)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS34_0__TRYAUTOABSORBITEM_B__0_OFFSET UNITYSDK_OFFSET(0xC5835B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c__DisplayClass34_0_TypeDefinitionIndex = 73171;

	class JigsawPuzzleBoard___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::JigsawPuzzleItem* item; // 0x10
		::RPG::Client::Prop::JigsawPuzzleBoard* __4__this; // 0x18
		::System::Boolean tryAbsorbPending; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAutoAbsorbItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS34_0__TRYAUTOABSORBITEM_B__0_OFFSET))(this);
		}
	};
}
