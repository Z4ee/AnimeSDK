#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_9FBD726DC86C07C4___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xAF02C20)
#define CLASS_1_9FBD726DC86C07C4___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF02860)

inline static constexpr unsigned int Class_1_9FBD726DC86C07C4___c__DisplayClass10_0_TypeDefinitionIndex = 60003;

class Class_1_9FBD726DC86C07C4___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::UInt32 containerInstanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Create_b__0(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET))(this, a1);
	}
};
