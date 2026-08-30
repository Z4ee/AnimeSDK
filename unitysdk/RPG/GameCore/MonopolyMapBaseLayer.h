#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellLayerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPBASELAYER_METHOD_2_012A5D9D150ACA52_OFFSET UNITYSDK_OFFSET(0x1D1C6E00)
#define RPG_GAMECORE_MONOPOLYMAPBASELAYER_METHOD_2_FE11A3E199F97F1E_OFFSET UNITYSDK_OFFSET(0x1D1C6FB0)
#define RPG_GAMECORE_MONOPOLYMAPBASELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C6DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapBaseLayer_TypeDefinitionIndex = 16065;

	class MonopolyMapBaseLayer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::RPG::GameCore::MonopolyMapCellLayerType LayerType; // 0x14
		::System::String* PrefabPath; // 0x18
		::System::String* IconPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_012A5D9D150ACA52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapBaseLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapBaseLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER_METHOD_2_012A5D9D150ACA52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_FE11A3E199F97F1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapBaseLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapBaseLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER_METHOD_2_FE11A3E199F97F1E_OFFSET))(a1, a2);
		}
	};
}
