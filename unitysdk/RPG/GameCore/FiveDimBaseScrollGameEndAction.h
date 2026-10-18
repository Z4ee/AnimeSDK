#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_4_336990773A491410_OFFSET UNITYSDK_OFFSET(0x1D6B3400)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_4_E46EE8D71A67EF15_OFFSET UNITYSDK_OFFSET(0x1D6B3380)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseScrollGameEndAction_TypeDefinitionIndex = 18761;

	class FiveDimBaseScrollGameEndAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E46EE8D71A67EF15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_4_E46EE8D71A67EF15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_336990773A491410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_4_336990773A491410_OFFSET))(a1, a2);
		}
	};
}
