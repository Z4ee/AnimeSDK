#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureCharacterIdleShowShapeConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1AE5C6B0)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_METHOD_2_1FBA55993C232EC9_OFFSET UNITYSDK_OFFSET(0x1AE5BA50)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE5C6E0)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5C570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterIdleShowConfig_TypeDefinitionIndex = 16738;

	class AdventureCharacterIdleShowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::AdventureCharacterIdleShowConfig** StaticGet__Default_k__BackingField()
		{
			return (::RPG::GameCore::AdventureCharacterIdleShowConfig**)Il2CppClass::FromTypeDefinitionIndex(AdventureCharacterIdleShowConfig_TypeDefinitionIndex)->GetStaticField(0x9540);
		}
		::System::Single IdleShow1DetectDistance; // 0x10
		::System::Single IdleShow2DetectDistance; // 0x14
		::RPG::GameCore::AdventureCharacterIdleShowShapeConfig* IdleShow1ShapeConfig; // 0x18
		::RPG::GameCore::AdventureCharacterIdleShowShapeConfig* IdleShow2ShapeConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_1FBA55993C232EC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterIdleShowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterIdleShowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_METHOD_2_1FBA55993C232EC9_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AdventureCharacterIdleShowConfig* get_Default()
		{
			return ((::RPG::GameCore::AdventureCharacterIdleShowConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_GET_DEFAULT_OFFSET))();
		}
	};
}
