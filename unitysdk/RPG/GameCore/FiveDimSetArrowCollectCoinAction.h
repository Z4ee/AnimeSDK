#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_4_4E55B8D0738C85D1_OFFSET UNITYSDK_OFFSET(0x1D6D8BE0)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_4_EEF03ED71D7972FC_OFFSET UNITYSDK_OFFSET(0x1D6D8B60)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetArrowCollectCoinAction_TypeDefinitionIndex = 18781;

	class FiveDimSetArrowCollectCoinAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EEF03ED71D7972FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_4_EEF03ED71D7972FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E55B8D0738C85D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_4_4E55B8D0738C85D1_OFFSET))(a1, a2);
		}
	};
}
