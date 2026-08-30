#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_METHOD_3_3A1E1FB147398812_OFFSET UNITYSDK_OFFSET(0x1D1D1C50)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_METHOD_3_C186A7107631C28F_OFFSET UNITYSDK_OFFSET(0x1D1D1B80)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchFromSpeTransition_TypeDefinitionIndex = 20701;

	class MonopolyShowSwitchFromSpeTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C186A7107631C28F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_METHOD_3_C186A7107631C28F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A1E1FB147398812(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_METHOD_3_3A1E1FB147398812_OFFSET))(a1, a2);
		}
	};
}
