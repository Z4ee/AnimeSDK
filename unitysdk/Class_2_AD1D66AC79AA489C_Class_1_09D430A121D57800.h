#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_AD1D66AC79AA489C_CLASS_1_09D430A121D57800__CTOR_OFFSET UNITYSDK_OFFSET(0x10C17B00)

inline static constexpr unsigned int Class_2_AD1D66AC79AA489C_Class_1_09D430A121D57800_TypeDefinitionIndex = 58792;

class Class_2_AD1D66AC79AA489C_Class_1_09D430A121D57800 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD1D66AC79AA489C_CLASS_1_09D430A121D57800__CTOR_OFFSET))(this);
	}
};
