#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_25295E5054A2505F_OFFSET UNITYSDK_OFFSET(0x1910F030)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_777A2A1393595EEB_OFFSET UNITYSDK_OFFSET(0x1910EF20)
#define RPG_GAMECORE_WOLFBROACTIVATEBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1910F000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroActivateBullet_TypeDefinitionIndex = 20428;

	class WolfBroActivateBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_777A2A1393595EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroActivateBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroActivateBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_777A2A1393595EEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25295E5054A2505F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROACTIVATEBULLET_METHOD_3_25295E5054A2505F_OFFSET))(a1, a2);
		}
	};
}
