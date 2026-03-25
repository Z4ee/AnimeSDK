#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellLayerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPCELLLAYER_METHOD_2_A5B8C388401C52BF_OFFSET UNITYSDK_OFFSET(0x1743D9F0)
#define RPG_GAMECORE_MONOPOLYMAPCELLLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1743DB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellLayer_TypeDefinitionIndex = 14859;

	class MonopolyMapCellLayer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::RPG::GameCore::MonopolyMapCellLayerType LayerType; // 0x14
		::System::String* PrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A5B8C388401C52BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapCellLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapCellLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLLAYER_METHOD_2_A5B8C388401C52BF_OFFSET))(a1, a2);
		}
	};
}
