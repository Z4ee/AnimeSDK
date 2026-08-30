#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E32D594CE469049;
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET UNITYSDK_OFFSET(0x160A5080)

inline static constexpr unsigned int Class_1_74B8C02E4E1D6950_TypeDefinitionIndex = 71765;

class Class_1_74B8C02E4E1D6950 : public ::System::Object
{
public:
	::UnityEngine::Transform* MJPMAPNJMNE; // 0x10
	::Class_1_1E32D594CE469049* IDJEEOFELEJ; // 0x18
	::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x20
	::RPG::GameCore::LevelUIComponent* DFHKMAHPJIB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET))(this);
	}
};
