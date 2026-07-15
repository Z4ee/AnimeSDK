#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_METHOD_2_3ACE8FFD4B7E0933_OFFSET UNITYSDK_OFFSET(0x1AE5C130)
#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5C330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFloatingConfig_TypeDefinitionIndex = 16789;

	class AdventureCharacterFloatingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ForceUseWorldUp; // 0x10
		::System::Single Height; // 0x14
		::System::Single Offset; // 0x18
		::System::Single LoopDuration; // 0x1C
		::System::String* CurveName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3ACE8FFD4B7E0933(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCharacterFloatingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCharacterFloatingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_METHOD_2_3ACE8FFD4B7E0933_OFFSET))(a1, a2);
		}
	};
}
