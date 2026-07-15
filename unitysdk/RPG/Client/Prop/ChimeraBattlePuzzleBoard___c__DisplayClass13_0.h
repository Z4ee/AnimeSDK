#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraViewProxy; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E12BA0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__GETCHIMERATFREF_B__0_OFFSET UNITYSDK_OFFSET(0x16E15540)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c__DisplayClass13_0_TypeDefinitionIndex = 74470;

	class ChimeraBattlePuzzleBoard___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 chimeraID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChimeraTfRef_b__0(::RPG::Client::ChimeraViewProxy* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__GETCHIMERATFREF_B__0_OFFSET))(this, a1);
		}
	};
}
