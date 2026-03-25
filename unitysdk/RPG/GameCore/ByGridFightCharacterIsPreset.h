#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_6927661C05269674_OFFSET UNITYSDK_OFFSET(0x17022490)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_79B4D91A77954336_OFFSET UNITYSDK_OFFSET(0x17022560)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x17022510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCharacterIsPreset_TypeDefinitionIndex = 20708;

	class ByGridFightCharacterIsPreset : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6927661C05269674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCharacterIsPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_6927661C05269674_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79B4D91A77954336(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_METHOD_4_79B4D91A77954336_OFFSET))(a1, a2);
		}
	};
}
