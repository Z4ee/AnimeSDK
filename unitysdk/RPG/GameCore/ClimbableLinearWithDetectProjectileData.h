#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_METHOD_3_47DB81D2A37E8C29_OFFSET UNITYSDK_OFFSET(0x1E349810)
#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_METHOD_3_9FC4300CAB8EEF8E_OFFSET UNITYSDK_OFFSET(0x1E349880)
#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E349870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClimbableLinearWithDetectProjectileData_TypeDefinitionIndex = 15491;

	class ClimbableLinearWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::System::Boolean KeepHorizontalForward; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47DB81D2A37E8C29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_METHOD_3_47DB81D2A37E8C29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FC4300CAB8EEF8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_METHOD_3_9FC4300CAB8EEF8E_OFFSET))(a1, a2);
		}
	};
}
