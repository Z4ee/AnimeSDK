#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_METHOD_3_40F2A9C3F0B23385_OFFSET UNITYSDK_OFFSET(0x17448700)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_METHOD_3_A811CD5B89553F94_OFFSET UNITYSDK_OFFSET(0x17448680)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x174486D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchTransition_TypeDefinitionIndex = 19266;

	class MonopolyShowSwitchTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean isShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A811CD5B89553F94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_METHOD_3_A811CD5B89553F94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40F2A9C3F0B23385(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_METHOD_3_40F2A9C3F0B23385_OFFSET))(a1, a2);
		}
	};
}
