#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE81C10)
#define RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS17_0__STARTEDIT_B__0_OFFSET UNITYSDK_OFFSET(0x1AE81C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterHPSetRatioModifier___c__DisplayClass17_0_TypeDefinitionIndex = 62100;

	class GridFightMonsterHPSetRatioModifier___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* editEndCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartEdit_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERHPSETRATIOMODIFIER___C__DISPLAYCLASS17_0__STARTEDIT_B__0_OFFSET))(this, a1);
		}
	};
}
