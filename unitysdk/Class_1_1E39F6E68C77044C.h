#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_1E39F6E68C77044C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADF420)

inline static constexpr unsigned int Class_1_1E39F6E68C77044C_TypeDefinitionIndex = 45817;

class Class_1_1E39F6E68C77044C : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E39F6E68C77044C__CTOR_OFFSET))(this);
	}
};
