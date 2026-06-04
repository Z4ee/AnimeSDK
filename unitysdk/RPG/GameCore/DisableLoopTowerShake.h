#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7295B2E47476DDD0_OFFSET UNITYSDK_OFFSET(0x196BC790)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7BB980DBED906B89_OFFSET UNITYSDK_OFFSET(0x196BC810)
#define RPG_GAMECORE_DISABLELOOPTOWERSHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x196BC7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableLoopTowerShake_TypeDefinitionIndex = 21655;

	class DisableLoopTowerShake : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7295B2E47476DDD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableLoopTowerShake*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableLoopTowerShake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7295B2E47476DDD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BB980DBED906B89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLELOOPTOWERSHAKE_METHOD_3_7BB980DBED906B89_OFFSET))(a1, a2);
		}
	};
}
