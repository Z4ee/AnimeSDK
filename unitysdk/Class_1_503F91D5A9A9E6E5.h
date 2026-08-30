#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0648CB3ED0A09425.h"
#include "unitysdk/System/Object.h"

class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F9CC0)

inline static constexpr unsigned int Class_1_503F91D5A9A9E6E5_TypeDefinitionIndex = 54265;

class Class_1_503F91D5A9A9E6E5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::Struct_2_0648CB3ED0A09425 MKGKHBCAFLL; // 0x18
	::Class_1_D8203AFB32E9259C* IJGAPCNDIAG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET))(this);
	}
};
