#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_4_E1D839B9CCCBF392_OFFSET UNITYSDK_OFFSET(0x1D6A36F0)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_4_F908D72611EC0D93_OFFSET UNITYSDK_OFFSET(0x1D6A3670)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A36E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayUsePropAnimAction_TypeDefinitionIndex = 18729;

	class FiveDimPlayUsePropAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F908D72611EC0D93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_4_F908D72611EC0D93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E1D839B9CCCBF392(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_METHOD_4_E1D839B9CCCBF392_OFFSET))(a1, a2);
		}
	};
}
