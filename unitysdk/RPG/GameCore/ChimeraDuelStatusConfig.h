#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_METHOD_2_F5584F0F88F25691_OFFSET UNITYSDK_OFFSET(0x170A6460)
#define RPG_GAMECORE_CHIMERADUELSTATUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170A6580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusConfig_TypeDefinitionIndex = 14701;

	class ChimeraDuelStatusConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelStatusType StatusType; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* DurationValueGetter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F5584F0F88F25691(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_METHOD_2_F5584F0F88F25691_OFFSET))(a1, a2);
		}
	};
}
