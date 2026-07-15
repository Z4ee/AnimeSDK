#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_3A885DF37571A39F_OFFSET UNITYSDK_OFFSET(0x1B8A83A0)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_FCAF12D18B28D592_OFFSET UNITYSDK_OFFSET(0x1B8A8350)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A8390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMechanismBarPhase_TypeDefinitionIndex = 19742;

	class WaitMechanismBarPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::UInt32 Phase; // 0x1C
		::System::Boolean IsEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCAF12D18B28D592(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_FCAF12D18B28D592_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A885DF37571A39F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_3A885DF37571A39F_OFFSET))(a1, a2);
		}
	};
}
