#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER_METHOD_3_01B3DD63ECC3A621_OFFSET UNITYSDK_OFFSET(0x19BD5570)
#define RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER_METHOD_3_383C4F98F2740871_OFFSET UNITYSDK_OFFSET(0x19BD54E0)
#define RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD5540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotatableRegionAutoDeployPoseSwitcher_TypeDefinitionIndex = 20093;

	class RotatableRegionAutoDeployPoseSwitcher : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_383C4F98F2740871(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotatableRegionAutoDeployPoseSwitcher*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotatableRegionAutoDeployPoseSwitcher*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER_METHOD_3_383C4F98F2740871_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01B3DD63ECC3A621(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotatableRegionAutoDeployPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotatableRegionAutoDeployPoseSwitcher*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONAUTODEPLOYPOSESWITCHER_METHOD_3_01B3DD63ECC3A621_OFFSET))(a1, a2);
		}
	};
}
