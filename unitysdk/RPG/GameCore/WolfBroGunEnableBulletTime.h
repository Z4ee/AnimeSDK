#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_1A423A188092E256_OFFSET UNITYSDK_OFFSET(0x1D6B2AB0)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_6B9CF24547911C07_OFFSET UNITYSDK_OFFSET(0x1D6B2A60)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B2AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunEnableBulletTime_TypeDefinitionIndex = 21345;

	class WolfBroGunEnableBulletTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Single TimeScale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B9CF24547911C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunEnableBulletTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_6B9CF24547911C07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A423A188092E256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_1A423A188092E256_OFFSET))(a1, a2);
		}
	};
}
