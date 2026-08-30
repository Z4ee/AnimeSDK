#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkStoryCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCONFIG_METHOD_2_3A679A348B61B316_OFFSET UNITYSDK_OFFSET(0x1CFE89A0)
#define RPG_GAMECORE_CLOCKPARKSTORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE8BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryConfig_TypeDefinitionIndex = 15858;

	class ClockParkStoryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraphConfigPath; // 0x10
		::System::String* BackgroundPrefabPath; // 0x18
		::System::String* BackgroundFrontPrefabPath; // 0x20
		::System::Boolean BackgroundFrontVisible; // 0x28
		::Il2CppArray<::RPG::GameCore::ClockParkStoryCharacter*>* CharacterConfigs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A679A348B61B316(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCONFIG_METHOD_2_3A679A348B61B316_OFFSET))(a1, a2);
		}
	};
}
