#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_0EBC16C905C2529D___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x163FDF00)
#define CLASS_1_0EBC16C905C2529D___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163FD880)

inline static constexpr unsigned int Class_1_0EBC16C905C2529D___c__DisplayClass10_0_TypeDefinitionIndex = 64269;

class Class_1_0EBC16C905C2529D___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::UInt32 containerInstanceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Create_b__0(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D___C__DISPLAYCLASS10_0__CREATE_B__0_OFFSET))(this, a1);
	}
};
