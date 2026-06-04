#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D42443398E3AD863_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C4A5E0)
#define CLASS_1_D42443398E3AD863__CTOR_OFFSET UNITYSDK_OFFSET(0x13C4A630)

inline static constexpr unsigned int Class_1_D42443398E3AD863_TypeDefinitionIndex = 53557;

class Class_1_D42443398E3AD863 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D42443398E3AD863__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D42443398E3AD863_DISPOSE_OFFSET))(this);
	}
};
