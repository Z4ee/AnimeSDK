#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D42443398E3AD863_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A427A0)
#define CLASS_1_D42443398E3AD863__CTOR_OFFSET UNITYSDK_OFFSET(0x17A427F0)

inline static constexpr unsigned int Class_1_D42443398E3AD863_TypeDefinitionIndex = 54773;

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
