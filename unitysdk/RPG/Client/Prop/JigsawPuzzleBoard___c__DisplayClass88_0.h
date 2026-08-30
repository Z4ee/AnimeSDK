#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16112870)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS88_0___PLAYOUTLINEFADEANIAMTION_B__0_OFFSET UNITYSDK_OFFSET(0x16113240)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c__DisplayClass88_0_TypeDefinitionIndex = 78183;

	class JigsawPuzzleBoard___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::Action* OnAnimDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayOutlineFadeAniamtion_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS88_0___PLAYOUTLINEFADEANIAMTION_B__0_OFFSET))(this);
		}
	};
}
