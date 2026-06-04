#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_3006F30E771337D2_OFFSET UNITYSDK_OFFSET(0x199A4D30)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_FE4AE2642E11E7DE_OFFSET UNITYSDK_OFFSET(0x199A4E40)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x199A4E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchSpeTransition_TypeDefinitionIndex = 19790;

	class MonopolyShowSwitchSpeTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3006F30E771337D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_3006F30E771337D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE4AE2642E11E7DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_FE4AE2642E11E7DE_OFFSET))(a1, a2);
		}
	};
}
