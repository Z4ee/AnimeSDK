#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_EE559462F37DF929;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CLASS_1_BEA934240A310541_CLASS_1_DDF59D027B6AAE4C__CTOR_OFFSET UNITYSDK_OFFSET(0x12391F40)

inline static constexpr unsigned int Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C_TypeDefinitionIndex = 55839;

class Class_1_BEA934240A310541_Class_1_DDF59D027B6AAE4C : public ::System::Object
{
public:
	::Class_1_151B93D9C4BBDCA4* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::LittleGameLevelConfig* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_0; // 0x30
	::Class_1_EE559462F37DF929* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541_CLASS_1_DDF59D027B6AAE4C__CTOR_OFFSET))(this);
	}
};
