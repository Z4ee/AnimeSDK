#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraViewProxy; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA039C60)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__GETCHIMERATFREF_B__0_OFFSET UNITYSDK_OFFSET(0xA03C500)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c__DisplayClass13_0_TypeDefinitionIndex = 63876;

	class ChimeraBattlePuzzleBoard___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 chimeraID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChimeraTfRef_b__0(::RPG::Client::ChimeraViewProxy* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS13_0__GETCHIMERATFREF_B__0_OFFSET))(this, x);
		}
	};
}
