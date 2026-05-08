#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14250FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfig_TypeDefinitionIndex = 55495;

	class FootPrintConfig : public ::System::Object
	{
	public:
		::System::String* MoveState; // 0x10
		::System::String* FootType; // 0x18
		::System::String* Des; // 0x20
		::System::String* MoveType; // 0x28
		::System::String* Value; // 0x30
		::System::String* RoleType; // 0x38
		::MoleMole::Config::TerrainMatType Terrain; // 0x40
		::MoleMole::Config::CharacterSize Size; // 0x44
		::System::Boolean AnyMoveState; // 0x48
		::System::Boolean AnyShoes; // 0x49
		::System::Boolean AnyMoveType; // 0x4A
		::System::Boolean AnyTerrain; // 0x4B
		::System::Boolean AnyFootType; // 0x4C
		::System::Boolean AnySize; // 0x4D
		::System::Boolean AnyRoleType; // 0x4E
		::MoleMole::Config::ShoesType Shoes; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
