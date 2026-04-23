#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C10F28B737AE4307;
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET UNITYSDK_OFFSET(0x9377EE0)

inline static constexpr unsigned int Class_1_74B8C02E4E1D6950_TypeDefinitionIndex = 66186;

class Class_1_74B8C02E4E1D6950 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::Class_1_C10F28B737AE4307* Field_1_2; // 0x18
	::RPG::GameCore::LevelUIComponent* Field_1_3; // 0x20
	::UnityEngine::UI::Text* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET))(this);
	}
};
