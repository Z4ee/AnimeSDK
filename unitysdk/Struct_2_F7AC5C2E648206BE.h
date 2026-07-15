#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_38;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }

inline static constexpr unsigned int Struct_2_F7AC5C2E648206BE_TypeDefinitionIndex = 35308;

struct alignas(8) Struct_2_F7AC5C2E648206BE
{
	::RPG::Client::LittleGameShare::ChangeType Field_2_0; // 0x10
	::Entitas::IComponent* Field_2_1; // 0x18
	::System::RuntimeTypeHandle Field_2_2; // 0x20
	::Entitas::IEntity* Field_2_3; // 0x28
	::Class_0_16E4307DCC419505_38* Field_2_4; // 0x30
};
