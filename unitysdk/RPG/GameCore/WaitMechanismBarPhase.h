#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_3A885DF37571A39F_OFFSET UNITYSDK_OFFSET(0x19E5A4B0)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_DBA7BFF3CA43698E_OFFSET UNITYSDK_OFFSET(0x19E5A430)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5A480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMechanismBarPhase_TypeDefinitionIndex = 19386;

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

		static ::System::Void Method_3_DBA7BFF3CA43698E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_DBA7BFF3CA43698E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A885DF37571A39F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_METHOD_3_3A885DF37571A39F_OFFSET))(a1, a2);
		}
	};
}
