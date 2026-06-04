#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC585EE0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS37_0__STARTSCALEANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xC586280)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleItem___c__DisplayClass37_0_TypeDefinitionIndex = 73179;

	class JigsawPuzzleItem___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action* OnScaleDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartScaleAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEITEM___C__DISPLAYCLASS37_0__STARTSCALEANIMATION_B__0_OFFSET))(this);
		}
	};
}
