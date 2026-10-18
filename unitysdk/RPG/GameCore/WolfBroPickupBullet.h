#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPICKUPBULLET_METHOD_3_6FA4910A760AF28B_OFFSET UNITYSDK_OFFSET(0x1DCA89D0)
#define RPG_GAMECORE_WOLFBROPICKUPBULLET_METHOD_3_8584C94687BA448E_OFFSET UNITYSDK_OFFSET(0x1DCA8AA0)
#define RPG_GAMECORE_WOLFBROPICKUPBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPickupBullet_TypeDefinitionIndex = 21589;

	class WolfBroPickupBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FA4910A760AF28B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPickupBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPickupBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET_METHOD_3_6FA4910A760AF28B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8584C94687BA448E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPickupBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPickupBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPICKUPBULLET_METHOD_3_8584C94687BA448E_OFFSET))(a1, a2);
		}
	};
}
