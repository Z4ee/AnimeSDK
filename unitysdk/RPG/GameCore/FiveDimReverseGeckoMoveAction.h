#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_4_2B29A795475D4239_OFFSET UNITYSDK_OFFSET(0x1D6A9E30)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_4_A091C629A0C003E4_OFFSET UNITYSDK_OFFSET(0x1D6A9DB0)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimReverseGeckoMoveAction_TypeDefinitionIndex = 18733;

	class FiveDimReverseGeckoMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A091C629A0C003E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_4_A091C629A0C003E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B29A795475D4239(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_4_2B29A795475D4239_OFFSET))(a1, a2);
		}
	};
}
