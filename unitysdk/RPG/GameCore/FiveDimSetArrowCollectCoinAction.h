#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_3_9373E30E206BF907_OFFSET UNITYSDK_OFFSET(0x1D0FF3C0)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_3_E2042654B2CC6196_OFFSET UNITYSDK_OFFSET(0x1D0FF440)
#define RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FF430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetArrowCollectCoinAction_TypeDefinitionIndex = 18571;

	class FiveDimSetArrowCollectCoinAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9373E30E206BF907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_3_9373E30E206BF907_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2042654B2CC6196(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETARROWCOLLECTCOINACTION_METHOD_3_E2042654B2CC6196_OFFSET))(a1, a2);
		}
	};
}
