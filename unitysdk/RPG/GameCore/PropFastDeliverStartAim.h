#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_METHOD_3_3917215826F7A2FB_OFFSET UNITYSDK_OFFSET(0x1D17BCF0)
#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_METHOD_3_91BB5A48DD9744DB_OFFSET UNITYSDK_OFFSET(0x1D17BD70)
#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17BD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverStartAim_TypeDefinitionIndex = 21915;

	class PropFastDeliverStartAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3917215826F7A2FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverStartAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverStartAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_METHOD_3_3917215826F7A2FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91BB5A48DD9744DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverStartAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverStartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_METHOD_3_91BB5A48DD9744DB_OFFSET))(a1, a2);
		}
	};
}
