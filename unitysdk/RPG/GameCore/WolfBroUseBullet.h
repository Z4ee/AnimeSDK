#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROUSEBULLET_METHOD_3_1E2289F7B25C2FFB_OFFSET UNITYSDK_OFFSET(0x19111240)
#define RPG_GAMECORE_WOLFBROUSEBULLET_METHOD_3_654848E3FB965287_OFFSET UNITYSDK_OFFSET(0x19111130)
#define RPG_GAMECORE_WOLFBROUSEBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x19111210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroUseBullet_TypeDefinitionIndex = 20429;

	class WolfBroUseBullet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_654848E3FB965287(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroUseBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroUseBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_METHOD_3_654848E3FB965287_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E2289F7B25C2FFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLET_METHOD_3_1E2289F7B25C2FFB_OFFSET))(a1, a2);
		}
	};
}
