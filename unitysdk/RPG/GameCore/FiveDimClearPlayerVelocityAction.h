#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_3_4B0190CFBF819176_OFFSET UNITYSDK_OFFSET(0x1BA8DE10)
#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_3_E0A36FF4B1731BE7_OFFSET UNITYSDK_OFFSET(0x1BA8DE90)
#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8DE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimClearPlayerVelocityAction_TypeDefinitionIndex = 18033;

	class FiveDimClearPlayerVelocityAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B0190CFBF819176(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_3_4B0190CFBF819176_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0A36FF4B1731BE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_3_E0A36FF4B1731BE7_OFFSET))(a1, a2);
		}
	};
}
