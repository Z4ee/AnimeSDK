#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET UNITYSDK_OFFSET(0x16474880)
#define CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET UNITYSDK_OFFSET(0x16474B60)
#define CLASS_1_1EDFFB645AFD9A3E_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x16474620)
#define CLASS_1_1EDFFB645AFD9A3E_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x164746B0)
#define CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET UNITYSDK_OFFSET(0x16474C40)

inline static constexpr unsigned int Class_1_1EDFFB645AFD9A3E_TypeDefinitionIndex = 72064;

class Class_1_1EDFFB645AFD9A3E : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* APCNOCJOOOL; // 0x18
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_ONPLUGINUNINIT_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_A8B5DD81FACB4C81(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_A8B5DD81FACB4C81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF45F4E823CC047(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1EDFFB645AFD9A3E_METHOD_1_ADF45F4E823CC047_OFFSET))(this, a1);
	}
};
