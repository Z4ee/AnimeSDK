#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_PROJECTILEDATALIST_METHOD_2_36B38DE4EC1F726B_OFFSET UNITYSDK_OFFSET(0x1D172C60)
#define RPG_GAMECORE_PROJECTILEDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D172DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileDataList_TypeDefinitionIndex = 22334;

	class ProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::RPG::GameCore::ProjectileData* Projectile; // 0x18
		::System::Single Interval; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATALIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_36B38DE4EC1F726B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileDataList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileDataList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATALIST_METHOD_2_36B38DE4EC1F726B_OFFSET))(a1, a2);
		}
	};
}
