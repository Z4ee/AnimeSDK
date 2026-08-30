#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_METHOD_3_720D4A2AB78F602E_OFFSET UNITYSDK_OFFSET(0x1DEC17F0)
#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_METHOD_3_ECCCEAEC04AAA89B_OFFSET UNITYSDK_OFFSET(0x1DEC1830)
#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC1820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerPropStateChange_TypeDefinitionIndex = 20985;

	class WaitServerPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_720D4A2AB78F602E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerPropStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerPropStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_METHOD_3_720D4A2AB78F602E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECCCEAEC04AAA89B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_METHOD_3_ECCCEAEC04AAA89B_OFFSET))(a1, a2);
		}
	};
}
