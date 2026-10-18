#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_METHOD_3_BC84DF9DF67E7865_OFFSET UNITYSDK_OFFSET(0x1D80FCC0)
#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_METHOD_3_CA2623E3EEE5EE6D_OFFSET UNITYSDK_OFFSET(0x1D80FC60)
#define RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80FCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleForceLaunchToTarget_TypeDefinitionIndex = 16837;

	class MarbleForceLaunchToTarget : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA2623E3EEE5EE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleForceLaunchToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleForceLaunchToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_METHOD_3_CA2623E3EEE5EE6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC84DF9DF67E7865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleForceLaunchToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleForceLaunchToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFORCELAUNCHTOTARGET_METHOD_3_BC84DF9DF67E7865_OFFSET))(a1, a2);
		}
	};
}
