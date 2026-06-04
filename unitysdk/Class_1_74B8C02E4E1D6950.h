#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E32D594CE469049;
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET UNITYSDK_OFFSET(0x14186CD0)

inline static constexpr unsigned int Class_1_74B8C02E4E1D6950_TypeDefinitionIndex = 67123;

class Class_1_74B8C02E4E1D6950 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_0; // 0x10
	::RPG::GameCore::LevelUIComponent* Field_1_1; // 0x18
	::Class_1_1E32D594CE469049* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET))(this);
	}
};
