#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawPuzzleItem; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161157D0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS36_0__STARTROTATEANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x16115950)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleItem___c__DisplayClass36_0_TypeDefinitionIndex = 78188;

	class JigsawPuzzleItem___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::JigsawPuzzleItem* __4__this; // 0x10
		::System::Action* OnRotationDone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartRotateAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS36_0__STARTROTATEANIMATION_B__0_OFFSET))(this);
		}
	};
}
