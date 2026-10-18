#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_362DA25DC626931A__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAED10)

inline static constexpr unsigned int Class_1_362DA25DC626931A_TypeDefinitionIndex = 56406;

class Class_1_362DA25DC626931A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnState>* OFAKIFNIDPO; // 0x10
	::System::Boolean GEOPPFCKACN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362DA25DC626931A__CTOR_OFFSET))(this);
	}
};
