#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_METHOD_3_8231EE155C4D0476_OFFSET UNITYSDK_OFFSET(0x19638400)
#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_METHOD_3_95FF1CD4927A3308_OFFSET UNITYSDK_OFFSET(0x19638460)
#define RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19638450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraCasterAttributeDivideValueGetter_TypeDefinitionIndex = 15151;

	class ChimeraDuelChimeraCasterAttributeDivideValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* DivideValueGetter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8231EE155C4D0476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_METHOD_3_8231EE155C4D0476_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95FF1CD4927A3308(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERACASTERATTRIBUTEDIVIDEVALUEGETTER_METHOD_3_95FF1CD4927A3308_OFFSET))(a1, a2);
		}
	};
}
