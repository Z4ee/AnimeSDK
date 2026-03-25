#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_87CC10C176177385_OFFSET UNITYSDK_OFFSET(0x172153A0)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_F0371D2C01DF7559_OFFSET UNITYSDK_OFFSET(0x17215410)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172153F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowWithDetectProjectileData_TypeDefinitionIndex = 14359;

	class FollowWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xA8
		::System::Single MaxLifeTime; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87CC10C176177385(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_87CC10C176177385_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0371D2C01DF7559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_METHOD_3_F0371D2C01DF7559_OFFSET))(a1, a2);
		}
	};
}
