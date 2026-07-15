#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_METHOD_3_49D0E1CD4B84057F_OFFSET UNITYSDK_OFFSET(0x1B03E730)
#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_METHOD_3_DA32565E933C2E5F_OFFSET UNITYSDK_OFFSET(0x1B03E7B0)
#define RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipHideDockMapIcon_TypeDefinitionIndex = 20189;

	class TravelShipHideDockMapIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49D0E1CD4B84057F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideDockMapIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideDockMapIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_METHOD_3_49D0E1CD4B84057F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA32565E933C2E5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideDockMapIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideDockMapIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEDOCKMAPICON_METHOD_3_DA32565E933C2E5F_OFFSET))(a1, a2);
		}
	};
}
