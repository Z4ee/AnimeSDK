#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E32D594CE469049;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_A3A00561B1B5C8AD__CTOR_OFFSET UNITYSDK_OFFSET(0x16447880)

inline static constexpr unsigned int Class_1_A3A00561B1B5C8AD_TypeDefinitionIndex = 71823;

class Class_1_A3A00561B1B5C8AD : public ::System::Object
{
public:
	::Class_1_1E32D594CE469049* IDJEEOFELEJ; // 0x10
	::UnityEngine::Transform* EGMMEEKIKMA; // 0x18
	::UnityEngine::Transform* MJPMAPNJMNE; // 0x20
	::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x28
	::RPG::GameCore::LevelUIComponent* DFHKMAHPJIB; // 0x30
	::RPG::Client::MonsterHPBarStyle* AFKBNHEDIFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A00561B1B5C8AD__CTOR_OFFSET))(this);
	}
};
