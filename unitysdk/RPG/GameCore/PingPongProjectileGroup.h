#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongProjectileInfo; }

#define RPG_GAMECORE_PINGPONGPROJECTILEGROUP_METHOD_2_10D5366BF50916E5_OFFSET UNITYSDK_OFFSET(0x174B2110)
#define RPG_GAMECORE_PINGPONGPROJECTILEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x174B22B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongProjectileGroup_TypeDefinitionIndex = 15555;

	class PingPongProjectileGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongProjectileType Type; // 0x10
		::System::Single CD; // 0x14
		::Il2CppArray<::RPG::GameCore::PingPongProjectileInfo*>* ProjectileList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10D5366BF50916E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongProjectileGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongProjectileGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEGROUP_METHOD_2_10D5366BF50916E5_OFFSET))(a1, a2);
		}
	};
}
