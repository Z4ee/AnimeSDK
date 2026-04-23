#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STATICPROJECTILEDATA_METHOD_3_AD9757C0204F0EF2_OFFSET UNITYSDK_OFFSET(0x18E9DEE0)
#define RPG_GAMECORE_STATICPROJECTILEDATA_METHOD_3_E4D92800DEEA8B71_OFFSET UNITYSDK_OFFSET(0x18E9DF50)
#define RPG_GAMECORE_STATICPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9DF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaticProjectileData_TypeDefinitionIndex = 14825;

	class StaticProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Boolean StaticProjectileCanPassAirWall; // 0xB0
		::System::Single StaticExtraRadius; // 0xB4
		::System::Boolean StaticProjectileKeepHigh; // 0xB8
		::System::Single MaxLifeTime; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD9757C0204F0EF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StaticProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StaticProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA_METHOD_3_AD9757C0204F0EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4D92800DEEA8B71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StaticProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StaticProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA_METHOD_3_E4D92800DEEA8B71_OFFSET))(a1, a2);
		}
	};
}
