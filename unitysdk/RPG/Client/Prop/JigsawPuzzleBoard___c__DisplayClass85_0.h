#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BC810)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS85_0___PLAYDISSOLVECURVEANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xA0BDC10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c__DisplayClass85_0_TypeDefinitionIndex = 64103;

	class JigsawPuzzleBoard___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Action* OnAnimDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayDissolveCurveAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__DISPLAYCLASS85_0___PLAYDISSOLVECURVEANIMATION_B__0_OFFSET))(this);
		}
	};
}
