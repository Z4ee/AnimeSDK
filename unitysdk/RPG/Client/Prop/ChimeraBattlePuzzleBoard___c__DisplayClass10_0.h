#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraViewProxy; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADB7D80)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS10_0__DESTROYCHIMERA_B__0_OFFSET UNITYSDK_OFFSET(0xADBA9D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleBoard___c__DisplayClass10_0_TypeDefinitionIndex = 71922;

	class ChimeraBattlePuzzleBoard___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DestroyChimera_b__0(::RPG::Client::ChimeraViewProxy* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C__DISPLAYCLASS10_0__DESTROYCHIMERA_B__0_OFFSET))(this, x);
		}
	};
}
