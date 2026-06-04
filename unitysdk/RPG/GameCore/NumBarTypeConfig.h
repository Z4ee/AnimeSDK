#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NumBarSubType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NUMBARTYPECONFIG_METHOD_2_9847733D03CB77E6_OFFSET UNITYSDK_OFFSET(0x199D3FE0)
#define RPG_GAMECORE_NUMBARTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199D4170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumBarTypeConfig_TypeDefinitionIndex = 21496;

	class NumBarTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::BoolEx ShowIcon; // 0x18
		::RPG::GameCore::NumBarSubType SubType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBARTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9847733D03CB77E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NumBarTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NumBarTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBARTYPECONFIG_METHOD_2_9847733D03CB77E6_OFFSET))(a1, a2);
		}
	};
}
