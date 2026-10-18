#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ColliderConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_METHOD_2_9430CBCA66D56A5A_OFFSET UNITYSDK_OFFSET(0x1D3C7500)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterIdleShowShapeConfig_TypeDefinitionIndex = 17437;

	class AdventureCharacterIdleShowShapeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterCollisionType ShapeType; // 0x10
		::RPG::GameCore::ColliderConfig* ShapeConfig; // 0x18
		::RPG::MVector3 ShapeOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9430CBCA66D56A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterIdleShowShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterIdleShowShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_METHOD_2_9430CBCA66D56A5A_OFFSET))(a1, a2);
		}
	};
}
