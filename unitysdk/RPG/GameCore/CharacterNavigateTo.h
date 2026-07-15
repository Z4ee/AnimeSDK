#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERNAVIGATETO_METHOD_3_4123BE2F556D8301_OFFSET UNITYSDK_OFFSET(0x1B726280)
#define RPG_GAMECORE_CHARACTERNAVIGATETO_METHOD_3_A54CBBDA62B0D51D_OFFSET UNITYSDK_OFFSET(0x1B7262D0)
#define RPG_GAMECORE_CHARACTERNAVIGATETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7262C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNavigateTo_TypeDefinitionIndex = 20069;

	class CharacterNavigateTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* AreaNameDS; // 0x30
		::RPG::GameCore::DynamicString* AnchorNameDS; // 0x38
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x48
		::System::Boolean WaitUntilFinish; // 0x4C
		::System::Single Duration; // 0x50
		::System::Boolean AvoidOthers; // 0x54
		::System::Boolean TurnInPlace; // 0x55
		::System::Boolean DontTurnInPlaceInEnd; // 0x56
		::System::Boolean ForceSuccess; // 0x57

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4123BE2F556D8301(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigateTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigateTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATETO_METHOD_3_4123BE2F556D8301_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A54CBBDA62B0D51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigateTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATETO_METHOD_3_A54CBBDA62B0D51D_OFFSET))(a1, a2);
		}
	};
}
