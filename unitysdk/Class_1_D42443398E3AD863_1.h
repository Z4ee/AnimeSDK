#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D42443398E3AD863_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15858DB0)

inline static constexpr unsigned int Class_1_D42443398E3AD863_1_TypeDefinitionIndex = 60933;

class Class_1_D42443398E3AD863_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* HNJDDEBIPBK; // 0x10
	::UnityEngine::Vector3 ACGINICEHML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D42443398E3AD863_1__CTOR_OFFSET))(this);
	}
};
