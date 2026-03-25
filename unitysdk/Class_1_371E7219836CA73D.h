#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SealState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_371E7219836CA73D__CTOR_OFFSET UNITYSDK_OFFSET(0x8CE9460)

inline static constexpr unsigned int Class_1_371E7219836CA73D_TypeDefinitionIndex = 48922;

class Class_1_371E7219836CA73D : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::UnityEngine::Vector2 Field_1_1; // 0x14
	::RPG::Client::SealState Field_1_2; // 0x1C
	::UnityEngine::Vector2 Field_1_0; // 0x20
	::UnityEngine::Vector2 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_371E7219836CA73D__CTOR_OFFSET))(this);
	}
};
