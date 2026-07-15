#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_86B4CACC0974BF85__CTOR_OFFSET UNITYSDK_OFFSET(0x16A55CC0)

inline static constexpr unsigned int Class_1_86B4CACC0974BF85_TypeDefinitionIndex = 52471;

class Class_1_86B4CACC0974BF85 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::UIDamageTextType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86B4CACC0974BF85__CTOR_OFFSET))(this);
	}
};
