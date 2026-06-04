#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLENEGATIVEHP_METHOD_3_8D6DD034BC24894E_OFFSET UNITYSDK_OFFSET(0x196E50A0)
#define RPG_GAMECORE_ENABLENEGATIVEHP_METHOD_3_A9309D4160CB719F_OFFSET UNITYSDK_OFFSET(0x196E5020)
#define RPG_GAMECORE_ENABLENEGATIVEHP__CTOR_OFFSET UNITYSDK_OFFSET(0x196E5070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableNegativeHP_TypeDefinitionIndex = 22416;

	class EnableNegativeHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A9309D4160CB719F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableNegativeHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableNegativeHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP_METHOD_3_A9309D4160CB719F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D6DD034BC24894E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENEGATIVEHP_METHOD_3_8D6DD034BC24894E_OFFSET))(a1, a2);
		}
	};
}
