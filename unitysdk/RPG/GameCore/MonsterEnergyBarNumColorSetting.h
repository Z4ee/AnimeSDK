#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_METHOD_2_AA98E4B1C8285579_OFFSET UNITYSDK_OFFSET(0x1B1C4920)
#define RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C4A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarNumColorSetting_TypeDefinitionIndex = 16466;

	class MonsterEnergyBarNumColorSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Normal; // 0x10
		::System::String* Golden; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AA98E4B1C8285579(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarNumColorSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarNumColorSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARNUMCOLORSETTING_METHOD_2_AA98E4B1C8285579_OFFSET))(a1, a2);
		}
	};
}
