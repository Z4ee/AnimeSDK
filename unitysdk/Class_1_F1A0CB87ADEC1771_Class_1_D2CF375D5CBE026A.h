#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0103A0EA6CD0F4C;
class Class_1_EE559462F37DF929;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CLASS_1_F1A0CB87ADEC1771_CLASS_1_D2CF375D5CBE026A__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB16F0)

inline static constexpr unsigned int Class_1_F1A0CB87ADEC1771_Class_1_D2CF375D5CBE026A_TypeDefinitionIndex = 57839;

class Class_1_F1A0CB87ADEC1771_Class_1_D2CF375D5CBE026A : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameLevelConfig* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_1_E0103A0EA6CD0F4C* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::Class_1_EE559462F37DF929* Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A0CB87ADEC1771_CLASS_1_D2CF375D5CBE026A__CTOR_OFFSET))(this);
	}
};
