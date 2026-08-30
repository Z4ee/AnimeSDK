#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_25295E5054A2505F_OFFSET UNITYSDK_OFFSET(0x1EFA75B0)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_775D696E6F06F3A2_OFFSET UNITYSDK_OFFSET(0x1EFA74E0)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA75A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroActivateBullet_TypeDefinitionIndex = 21341;

	class WolfBroActivateBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_775D696E6F06F3A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroActivateBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroActivateBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_775D696E6F06F3A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25295E5054A2505F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_25295E5054A2505F_OFFSET))(a1, a2);
		}
	};
}
