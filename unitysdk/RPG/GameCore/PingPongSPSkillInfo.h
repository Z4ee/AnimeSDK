#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGSPSKILLINFO_METHOD_2_059673FA017F4AB7_OFFSET UNITYSDK_OFFSET(0x1D78FA50)
#define RPG_GAMECORE_PINGPONGSPSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78FBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongSPSkillInfo_TypeDefinitionIndex = 16788;

	class PingPongSPSkillInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongSPSkillType SPSkillType; // 0x10
		::RPG::GameCore::PingPongProjectileType ProjectileType; // 0x14
		::System::String* BtnImagePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSPSKILLINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_059673FA017F4AB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongSPSkillInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongSPSkillInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGSPSKILLINFO_METHOD_2_059673FA017F4AB7_OFFSET))(a1, a2);
		}
	};
}
