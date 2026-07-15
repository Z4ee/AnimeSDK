#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_3ED4B881A5194402_OFFSET UNITYSDK_OFFSET(0x1BB18840)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7BB980DBED906B89_OFFSET UNITYSDK_OFFSET(0x1BB18880)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB18870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableLoopTowerShake_TypeDefinitionIndex = 22081;

	class DisableLoopTowerShake : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ED4B881A5194402(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableLoopTowerShake*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableLoopTowerShake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_3ED4B881A5194402_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BB980DBED906B89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7BB980DBED906B89_OFFSET))(a1, a2);
		}
	};
}
