#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfSpecialEventSelect; }
namespace RPG::GameCore { class ElfSpecialEventWaveOrder; }

#define RPG_GAMECORE_ELFSPECIALEVENTCONFIG_METHOD_2_41E5BF2E79C5FD89_OFFSET UNITYSDK_OFFSET(0x1D05BBF0)
#define RPG_GAMECORE_ELFSPECIALEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventConfig_TypeDefinitionIndex = 18284;

	class ElfSpecialEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfSpecialEventSelect* SelectEvent; // 0x10
		::RPG::GameCore::ElfSpecialEventWaveOrder* WaveOrderEvent; // 0x18
		::RPG::GameCore::RestaurantNormalEventType NormalEvent; // 0x20
		::System::Boolean HasSuperEvent; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_41E5BF2E79C5FD89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSpecialEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSpecialEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTCONFIG_METHOD_2_41E5BF2E79C5FD89_OFFSET))(a1, a2);
		}
	};
}
