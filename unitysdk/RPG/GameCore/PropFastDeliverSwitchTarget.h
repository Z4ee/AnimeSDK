#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_METHOD_3_B48DD1CD4FD9A110_OFFSET UNITYSDK_OFFSET(0x1D17BE80)
#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_METHOD_3_F498F952F7FCA69A_OFFSET UNITYSDK_OFFSET(0x1D17BF20)
#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverSwitchTarget_TypeDefinitionIndex = 21914;

	class PropFastDeliverSwitchTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsClockWise; // 0x20
		::System::String* PitchMoveItemPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B48DD1CD4FD9A110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverSwitchTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_METHOD_3_B48DD1CD4FD9A110_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F498F952F7FCA69A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverSwitchTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_METHOD_3_F498F952F7FCA69A_OFFSET))(a1, a2);
		}
	};
}
