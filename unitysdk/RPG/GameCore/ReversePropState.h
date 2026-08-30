#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REVERSEPROPSTATE_METHOD_3_273F385D726C72D7_OFFSET UNITYSDK_OFFSET(0x1D3B2D90)
#define RPG_GAMECORE_REVERSEPROPSTATE_METHOD_3_E3BDADFAA8BFBA93_OFFSET UNITYSDK_OFFSET(0x1D3B2D40)
#define RPG_GAMECORE_REVERSEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReversePropState_TypeDefinitionIndex = 21879;

	class ReversePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3BDADFAA8BFBA93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReversePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReversePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE_METHOD_3_E3BDADFAA8BFBA93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_273F385D726C72D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReversePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReversePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE_METHOD_3_273F385D726C72D7_OFFSET))(a1, a2);
		}
	};
}
