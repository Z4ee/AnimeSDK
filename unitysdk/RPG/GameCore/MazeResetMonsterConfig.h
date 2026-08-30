#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZERESETMONSTERCONFIG_METHOD_2_B6F5C0CF4558FE22_OFFSET UNITYSDK_OFFSET(0x1D278280)
#define RPG_GAMECORE_MAZERESETMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2836F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeResetMonsterConfig_TypeDefinitionIndex = 17415;

	class MazeResetMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DisappearEff; // 0x10
		::System::String* AppearEff; // 0x18
		::System::Single AppearDelay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZERESETMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6F5C0CF4558FE22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeResetMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeResetMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZERESETMONSTERCONFIG_METHOD_2_B6F5C0CF4558FE22_OFFSET))(a1, a2);
		}
	};
}
