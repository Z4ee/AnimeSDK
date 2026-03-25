#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOUNCYPROJECTILEDATA_METHOD_3_2F466F8F3D1E0EDB_OFFSET UNITYSDK_OFFSET(0x16FF05A0)
#define RPG_GAMECORE_BOUNCYPROJECTILEDATA_METHOD_3_FA29FCF719090AB3_OFFSET UNITYSDK_OFFSET(0x16FF0530)
#define RPG_GAMECORE_BOUNCYPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF0580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BouncyProjectileData_TypeDefinitionIndex = 14356;

	class BouncyProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single Bounciness; // 0xA8
		::System::Single MaxLifeTime; // 0xAC
		::System::Single Gravity; // 0xB0
		::System::Single CollisionEnableDelay; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA29FCF719090AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BouncyProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BouncyProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA_METHOD_3_FA29FCF719090AB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F466F8F3D1E0EDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BouncyProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BouncyProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA_METHOD_3_2F466F8F3D1E0EDB_OFFSET))(a1, a2);
		}
	};
}
