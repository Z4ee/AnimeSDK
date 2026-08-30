#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_METHOD_2_69FC4F89D2B4863B_OFFSET UNITYSDK_OFFSET(0x1D0FC800)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FC960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropSpawnerItem_TypeDefinitionIndex = 18375;

	class FiveDimPropSpawnerItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10
		::System::Boolean UseDefaultSpawnParam; // 0x18
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_69FC4F89D2B4863B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropSpawnerItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropSpawnerItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_METHOD_2_69FC4F89D2B4863B_OFFSET))(a1, a2);
		}
	};
}
