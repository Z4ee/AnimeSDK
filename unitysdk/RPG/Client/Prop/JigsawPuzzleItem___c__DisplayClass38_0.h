#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD0F840)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS38_0__STARTMOVETOANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xDD0FA20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleItem___c__DisplayClass38_0_TypeDefinitionIndex = 78661;

	class JigsawPuzzleItem___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* OnMoveToDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartMoveToAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS38_0__STARTMOVETOANIMATION_B__0_OFFSET))(this);
		}
	};
}
