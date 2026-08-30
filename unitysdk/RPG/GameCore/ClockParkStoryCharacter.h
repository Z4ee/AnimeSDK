#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_METHOD_2_D3FE65BB30C4DE16_OFFSET UNITYSDK_OFFSET(0x1CFE83B0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE8570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryCharacter_TypeDefinitionIndex = 15857;

	class ClockParkStoryCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* Anchor; // 0x18
		::System::Boolean Flipped; // 0x20
		::RPG::GameCore::ClockParkStoryAnimState* DefaultAnimState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D3FE65BB30C4DE16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_METHOD_2_D3FE65BB30C4DE16_OFFSET))(a1, a2);
		}
	};
}
