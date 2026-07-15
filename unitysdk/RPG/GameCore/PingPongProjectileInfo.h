#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGPROJECTILEINFO_METHOD_2_03FE1EC9F9161203_OFFSET UNITYSDK_OFFSET(0x1B4C9870)
#define RPG_GAMECORE_PINGPONGPROJECTILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C9B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongProjectileInfo_TypeDefinitionIndex = 16308;

	class PingPongProjectileInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single Speed; // 0x18
		::System::Single Angle; // 0x1C
		::System::Single NormalizedPos; // 0x20
		::System::Boolean Piercing; // 0x24
		::System::Boolean Homing; // 0x25
		::System::Single HomingRotSpeed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_03FE1EC9F9161203(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongProjectileInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongProjectileInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEINFO_METHOD_2_03FE1EC9F9161203_OFFSET))(a1, a2);
		}
	};
}
