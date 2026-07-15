#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_2_33AB0C68208F3EE4_CLASS_1_805ADCA09D154D22__CTOR_OFFSET UNITYSDK_OFFSET(0x18B13EB0)

inline static constexpr unsigned int Class_2_33AB0C68208F3EE4_Class_1_805ADCA09D154D22_TypeDefinitionIndex = 68983;

class Class_2_33AB0C68208F3EE4_Class_1_805ADCA09D154D22 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_CLASS_1_805ADCA09D154D22__CTOR_OFFSET))(this);
	}
};
