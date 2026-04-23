#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_3_DA0E7721DFA39A55_OFFSET UNITYSDK_OFFSET(0x188F50F0)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_3_E060A9277D22AB64_OFFSET UNITYSDK_OFFSET(0x188FF5E0)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F50D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityShakeAction_TypeDefinitionIndex = 17811;

	class FiveDimEntityShakeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::RPG::GameCore::FiveDimEntityShakeConfig* ShakeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E060A9277D22AB64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityShakeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityShakeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_3_E060A9277D22AB64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA0E7721DFA39A55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityShakeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_3_DA0E7721DFA39A55_OFFSET))(a1, a2);
		}
	};
}
