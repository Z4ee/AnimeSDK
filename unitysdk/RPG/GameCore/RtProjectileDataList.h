#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_RTPROJECTILEDATALIST_METHOD_2_ADD06C4806FAE74D_OFFSET UNITYSDK_OFFSET(0x19BEF210)
#define RPG_GAMECORE_RTPROJECTILEDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEF3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtProjectileDataList_TypeDefinitionIndex = 22817;

	class RtProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::RPG::GameCore::ProjectileData* Projectile; // 0x18
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x20
		::RPG::GameCore::FixPoint Interval; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEDATALIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ADD06C4806FAE74D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtProjectileDataList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtProjectileDataList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEDATALIST_METHOD_2_ADD06C4806FAE74D_OFFSET))(a1, a2);
		}
	};
}
