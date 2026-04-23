#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongDropItemInfo; }

#define RPG_GAMECORE_PINGPONGDROPITEMCONFIG_METHOD_2_25751B3FED02612B_OFFSET UNITYSDK_OFFSET(0x18BFA200)
#define RPG_GAMECORE_PINGPONGDROPITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFA3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongDropItemConfig_TypeDefinitionIndex = 16078;

	class PingPongDropItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FallSpeed; // 0x10
		::Il2CppArray<::System::Int32>* NoDropWeightByBreakUnitNum; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongDropItemInfo*>* DropItemList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_25751B3FED02612B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongDropItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongDropItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMCONFIG_METHOD_2_25751B3FED02612B_OFFSET))(a1, a2);
		}
	};
}
