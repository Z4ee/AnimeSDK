#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_1A423A188092E256_OFFSET UNITYSDK_OFFSET(0x19E67C30)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_4ED3DB97D3C3A3CF_OFFSET UNITYSDK_OFFSET(0x19E67BB0)
#define RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19E67C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunEnableBulletTime_TypeDefinitionIndex = 20374;

	class WolfBroGunEnableBulletTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Single TimeScale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4ED3DB97D3C3A3CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunEnableBulletTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_4ED3DB97D3C3A3CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A423A188092E256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNENABLEBULLETTIME_METHOD_3_1A423A188092E256_OFFSET))(a1, a2);
		}
	};
}
