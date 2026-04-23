#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD_METHOD_3_A57ED3CE4C2DF419_OFFSET UNITYSDK_OFFSET(0x18C7C550)
#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD_METHOD_3_F8A99638823AB037_OFFSET UNITYSDK_OFFSET(0x18C7C5D0)
#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7C5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTryGetNiudanReward_TypeDefinitionIndex = 20823;

	class PropTryGetNiudanReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RollShopId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A57ED3CE4C2DF419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTryGetNiudanReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTryGetNiudanReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD_METHOD_3_A57ED3CE4C2DF419_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8A99638823AB037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTryGetNiudanReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTryGetNiudanReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD_METHOD_3_F8A99638823AB037_OFFSET))(a1, a2);
		}
	};
}
