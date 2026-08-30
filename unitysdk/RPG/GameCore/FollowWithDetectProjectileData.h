#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_E80637E2BF7E07BA_OFFSET UNITYSDK_OFFSET(0x1D10E480)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_F0371D2C01DF7559_OFFSET UNITYSDK_OFFSET(0x1D10E4E0)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10E4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowWithDetectProjectileData_TypeDefinitionIndex = 15492;

	class FollowWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E80637E2BF7E07BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_E80637E2BF7E07BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0371D2C01DF7559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_F0371D2C01DF7559_OFFSET))(a1, a2);
		}
	};
}
