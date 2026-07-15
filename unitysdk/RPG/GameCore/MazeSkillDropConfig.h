#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZESKILLDROPCONFIG_METHOD_2_DB553DC456E7CFC7_OFFSET UNITYSDK_OFFSET(0x1AF54520)
#define RPG_GAMECORE_MAZESKILLDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF54560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillDropConfig_TypeDefinitionIndex = 20949;

	class MazeSkillDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DB553DC456E7CFC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeSkillDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeSkillDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLDROPCONFIG_METHOD_2_DB553DC456E7CFC7_OFFSET))(a1, a2);
		}
	};
}
